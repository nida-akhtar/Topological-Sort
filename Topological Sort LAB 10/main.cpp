#include "TopologicalSort.h"
#include <iostream>
using namespace std;
int main()
{
    //creating graph representing cities
    TopologicalSort DAG(15);
    DAG.city("PIEAS",0);
    DAG.city("Chirah",1);
    DAG.city("Thanda Pani",2);
    DAG.city("Mohara",3);
    DAG.city("Taramri",4);
    DAG.city("Ali Pur",5);
    DAG.city("Jagiot",6);
    DAG.city("Pind Begwal",7);
    DAG.city("Chatta Bakhtawar",8);
    DAG.city("Kuri",9);
    DAG.city("Malot",10);
    DAG.city("Athal",11);
    DAG.city("Bhara Kahu",12);
    DAG.city("Bani Gala",13);
    DAG.city("Chak Shehzad",14);
    
    //connection between cities=edges
    DAG.edge("PIEAS","Chirah");
    DAG.edge("PIEAS","Mohara");
    DAG.edge("PIEAS","Thanda Pani");
    DAG.edge("Thanda Pani","Ali Pur");
    DAG.edge("Ali Pur","Taramri");
    DAG.edge("Taramri","Chatta Bakhtawar");
    DAG.edge("Chatta Bakhtawar","Chak Shehzad");
    DAG.edge("Chak Shehzad","Kuri");
    DAG.edge("Chatta Bakhtawar","Kuri");
    DAG.edge("Ali Pur","Jagiot");
    DAG.edge("Chak Shehzad","Bani Gala");
    DAG.edge("Kuri","Malot");
    DAG.edge("Jagiot","Malot");
    DAG.edge("Jagiot","Pind Begwal");
    DAG.edge("Mohara","Pind Begwal");
    DAG.edge("Malot","Athal");
    DAG.edge("Pind Begwal","Athal");
    DAG.edge("Athal","Bhara Kahu");
    DAG.edge("Bhara Kahu", "Bani Gala");
   
    vector<int> result = DAG.topologicalSort();
    
    cout<<"TOPOLOGICAL SORT of cities linked with PIEAS:"<<"\n";
    for(int index: result)
    {
       for(const auto& entry: DAG.CityIndexes)
           {
           if(entry.second==index)
           {
               cout<<entry.first<<"\n";
               break;
           }
       }
    }
    DAG.printAdjacencyList();
           cout<<endl;
           return 0;
    
}

