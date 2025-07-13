#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class sol{
    private:
    bool detect(int sr, int vis[], vector<int>adj[]){
        vis[sr]  = 1;
        queue<pair<int,int>>q;
        q.push({sr,-1});
        
        while(!q.empty()){
            int parent = q.front().second;
            int node = q.front().first;
            q.pop();

            for(auto adjacent : adj[node]){
                if(!vis[adjacent]){
                    vis[adjacent]=1;
                    q.push({adjacent,node});
                }
                else if(parent!=adjacent){
                    return true;
                }
            }
        }
        return false;
    };

    public:
    bool isCycle(int v, vector<int> adj[]){
        int vis[v] = {0};
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(detect(i,vis,adj)) return true;
            }
        }
        return false;
    }
};

int main(){
    int nodes,edges;
    cout<<"enter number of nodes & edges: "<<endl;
    cin>>nodes>>edges;
    vector<int>adj[nodes];
    cout<<"enter edges"<<endl;
    for(int i=0;i<edges;i++){
        int n,m;
        cin>>n>>m;

        adj[n].push_back(m);
        adj[m].push_back(n);
    }
    sol obj;
    bool result = obj.isCycle(nodes,adj);
    cout<<result;
    return 0;
}