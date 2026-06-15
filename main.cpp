// AMIR LORVAND
// M00872834

#include <iostream>
#include "Bankers.h"

int main() {

    // initialize a vector for available (free) resources
    vector<int> available = {3, 3, 2};

    // initialize a vector for the maximum resource that a process needs to complete its task
    vector<vector<int>> maxR = {{7, 5, 3}, 
                                {3, 2, 2}, 
                                {9, 0, 2}, 
                                {20, 20, 20}, 
                                {4, 3, 3}}; 

    // intialize a vector for the number of resources that currently allocated to each process
    vector<vector<int>> allocated = {{0, 1, 0},
                                     {2, 0, 0},
                                     {3, 0, 2},
                                     {2, 1, 1},
                                     {0, 0, 2}};

    isSafe(available, maxR, allocated);

}