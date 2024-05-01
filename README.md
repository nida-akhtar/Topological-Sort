The Directed graph to be topologically sorted:


<img width="889" alt="Screenshot 2024-05-01 at 10 43 30 AM" src="https://github.com/nida-akhtar/Topological-Sort/assets/124860931/e7cb976a-9887-49d1-959f-fcbaa9876d36">


Output is as follows:
![image](https://github.com/nida-akhtar/Topological-Sort/assets/124860931/1df470f6-b391-4e09-b240-0e12deca7bda)


Class Diagram:

TopologicalSort
+ vertices: int
+ vector<vector<int>>adjacencies: void
+ unordered map<string, int> CityIndexex;
+ TopologicalSort (v: int): void
+ city (citynames: string, index: int): void
+ edge (city1: string, city2: string): void
+ Sort (v: int, vector<bool>&visited, stack<int>&result): void
+ vector<int>topologicalSort();
