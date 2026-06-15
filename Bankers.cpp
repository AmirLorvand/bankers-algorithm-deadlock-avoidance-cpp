// AMIR LORVAND
// M00872834

#include <iostream>
#include <vector>
#include "Bankers.h"

using namespace std;

// to calculate need resources by each process
void calculateNeed(vector<vector<int>> &need, vector<vector<int>> &maxR, vector<vector<int>> &allocated) {

    for (int i = 0; i < maxR.size(); i++) {
        for (int j = 0; j < maxR[i].size(); j++) {
            need[i][j] = maxR[i][j] - allocated[i][j];
        }
    }
}


bool isSafe(vector<int> &available, vector<vector<int>> &maxR, vector<vector<int>> &allocated) {
    
    // define 5 * 3 matrix for needed resources
    vector<vector<int>> need(maxR.size(), vector<int>(maxR[0].size()));

    calculateNeed(need, maxR, allocated);

    // define a vector to check each process is done or not
    vector<bool> finish(maxR.size(), false);

    vector<int> availableCp = available;
    
    int processCount = 0;
    while(processCount < maxR.size()){
        
        // to check the next candidate(process) has been found or not
        bool found = false;
        
       // iterate through each process
        for(int i = 0; i < maxR.size(); i++) {
            
            // if process is not finished,
            // assume that it is possible to allocate resources to this process  
            if(finish[i] == false) {
                bool isPossible = true;

                
                for (int j = 0; j < maxR[0].size(); j++) {
                    
                    // if the process needs more resources than aavilable
                    // it is not possible to allocate resources to this process
                    if (need[i][j] > availableCp[j]) {
                        isPossible = false;
                    }
                }

                if (isPossible) {

                    // the released resources are added to available resources
                    for (int k = 0; k < maxR[0].size(); k++) {
                        availableCp[k] += allocated[i][k];
                    }

                    finish[i] = true;
                    processCount++;
                    found = true;
                }
            }
        }

        // deny the request if no process can be executed
        if (!found) {
            cout << "System is not in the safe mode, deny the request." << endl;
            return false;
        }
    }

    // grant the request
    cout << "System is in the safe mode, grant the request." << endl;
    return true;

}