#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class bfs{
    public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // int vis[V]={0};  
        vector<int>vis(V,0);
        vis[0]=1;  
        queue<int>q;
        q.push(0);
        vector<int>bfs;
        while(!q.empty()){
          int node = q.front();
          q.pop();
          bfs.push_back(node);
          for(auto it : adj[node]){
            if(!vis[it]){
              vis[it]=1;
              q.push(it);
            }
          }
        }
        return bfs;
    }
};

int main(){
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V]; // Adjacency list

    cout << "Enter " << E << " edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        // Assuming undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs obj;
    vector<int> result = obj.bfsOfGraph(V, adj);

    cout << "BFS Traversal starting from node 0: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}