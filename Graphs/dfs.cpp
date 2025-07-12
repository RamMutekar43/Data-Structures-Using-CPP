#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class dfs{
    private:
    void findDfs(int node, vector<int> adj[], vector<int>vis, vector<int> &dfsArr){
        vis[node]=1;
        dfsArr.push_back(node);

        for(auto it : adj[node]){
            if(!vis[it]){
                findDfs(it, adj, vis,dfsArr);
            }
        }
    }
    public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // int vis[V]={0};  
        vector<int>vis(V,0);
        int start = 0;
        vector<int>dfsArr;

        // call recursive function
        findDfs(start, adj, vis,dfsArr);
        return dfsArr;
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

    dfs obj;
    vector<int> result = obj.dfsOfGraph(V, adj);

    cout << "DFS Traversal starting from node 0: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}