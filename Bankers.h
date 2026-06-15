// Author: Amir Lorvand
// Project: Banker's Algorithm Deadlock Avoidance Simulation

#ifndef BANKERS_H
#define BANKERS_H
#include <vector>

using namespace std;

void calculateNeed(vector<vector<int>> &need, vector<vector<int>> &maxR, vector<vector<int>> &allocated);
bool isSafe(vector<int> &available, vector<vector<int>> &maxR, vector<vector<int>> &allocated);

#endif
