#include <iostream>
#include <vector>
using namespace std;
int v = 5;
vector<vector<int>> l(V);

//traversal
void dfshelper(int u, vector<bool> &vis){
    cout<<u<<"";
    vis[u] = true;

    for(int v : l[u]){
        if(!vis[v]){
            dfshelper(v,vis);
        }
    }
}

void dfs(){
    int src  = 0;
    vector<bool> vis(V, false);
    dfshelper(src, vis);
}




int main(){
    Graph f(5);

    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(1.3);
    g,addedge(2,4);

    cout<<"dfs";

    cout<<"bfs":

    g.bfs();
    return 0;



}
