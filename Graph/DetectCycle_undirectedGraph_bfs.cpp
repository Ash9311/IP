//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
  
  bool checkForCycle(int V,vector<int> adj[],vector<int> vis,int i){
      queue<pair<int,int>> q;
      vis[i]=true;
      q.push({i,-1});
      
      while(!q.empty()){
          int node = q.front().first;
          int parent = q.front().second;
          
          q.pop();
          
          for(auto it:adj[node]){
              if(!vis[it]){
                  vis[it]=true;
                  q.push({it,node});
              }
              else if(parent!=it){
                  return true;
              }
          }
      }
  }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkForCycle(V,adj,vis,i)){
                    return true;
                }
            }
        }
        return false;
    }
};

