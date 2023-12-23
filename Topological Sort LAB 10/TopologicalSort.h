#ifndef TOPOLOGICALSORT_H
#define TOPOLOGICALSORT_H
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;
class TopologicalSort
{
public:
    int vertices;
    vector<vector<int>>adjacencylist;
    unordered_map<string,int> CityIndexes;
    TopologicalSort(int v);
    void city(string citynames, int index);
    void edge(string city1, string city2);
    void Sort(int v, vector<bool>&visited, stack<int>&result);
    vector<int>topologicalSort();
    void printAdjacencyList();
};
#endif //CITYGRAPH_H

