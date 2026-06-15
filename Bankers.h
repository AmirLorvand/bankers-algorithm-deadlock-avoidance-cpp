// AMIR LORVAND
// M00872834

#ifndef BANKERS_H
#define BANKERS_H
#include <vector>

using namespace std;

void calculateNeed(vector<vector<int>> &need, vector<vector<int>> &maxR, vector<vector<int>> &allocated);
bool isSafe(vector<int> &available, vector<vector<int>> &maxR, vector<vector<int>> &allocated);

#endif