#include "TopologicalSort.h"
TopologicalSort::TopologicalSort(int v):vertices(v),adjacencylist(v)
{
    
}
void TopologicalSort::city(string citynames, int index)
{
    CityIndexes[citynames]=index;
}
void TopologicalSort::edge(string city1, string city2)
{
    int index1=CityIndexes[city1];
    int index2=CityIndexes[city2];
    adjacencylist[index1].push_back(index2);
}
void TopologicalSort::Sort(int v, vector<bool>&visited, stack<int>& result)
{
    visited[v]=true;
    for(int neighbor: adjacencylist[v])
    {
        if(!visited[neighbor])
        {
            Sort(neighbor,visited,result);
        }
    }
    result.push(v);
}
vector<int> TopologicalSort:: topologicalSort()
{
    stack<int> result;
    vector<bool>visited(vertices,false);
    for(int i=0;i<vertices;i++)
    {
        if(!visited[i])
        {
            Sort(i,visited,result);
        }
    }
    
    vector<int> SortOrder;
    while(!result.empty())
    {
        SortOrder.push_back(result.top());
        result.pop();
    }
    return SortOrder;
}

void TopologicalSort::printAdjacencyList()
{
    cout<<"--------------------------";
    cout<<"\n";
    cout<<"Adjacency List:\n";
   
    for(int i=0;i<vertices;i++)
    {
        int count=0;
        cout<<"City "<<i<<" is connected to: ";
        for(int neighbor: adjacencylist[i])
        {
            for(const auto&entry : CityIndexes)
            {
                if(entry.second==neighbor)
                {
                    count++;
                    cout<<entry.first<<" ";
                    if(count==1)
                    {
                        cout<<", ";
                    }
                    
                    break;
                }
            }
        }
        cout<<"\n";
    }
}

