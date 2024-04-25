#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>
#include<unordered_map>
#include<set>
#include<queue>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<limits.h>
#include<string.h>
#include<list>
using namespace std;
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int src, int des) {
        unordered_map<int,list<int>> adj;
        for(int i=0; i<edges.size(); i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>vis(adj.size(),false);
        return Dfs(src,des,adj,vis);
    }
    private:
        bool dfs(int node, int des,unordered_map<int,list<int>> &adj,vector<bool> &vis){
            if(node==des)
                return true;
            vis[node]=true;
            for(int i : adj[node])
                if(vis[i]==false)
                    if(dfs(i,des,adj,vis))
                        return true;
            return false;
        }
        private:
    bool Dfs(int node, int des, unordered_map<int, list<int>> &adj, vector<bool> &vis) {
        if (node == des) {
            return true;
        }
        vis[node] = true;
        for (int i : adj[node]) {
            if (!vis[i]) {
                if (Dfs(i, des, adj, vis)) {
                    return true;
                }
            }
        }
        return false;
    }

};

int main() {
    Solution solution;
    vector<vector<int>> edges = {{0, 1}, {2, 3}, {1, 3}};
    int src = 0;
    int des = 3;

    bool pathExists = solution.validPath(4, edges, src, des);

    if (pathExists) {
        cout << "A path exists between nodes " << src << " and " << des << endl;
    } else {
        cout << "No path exists between nodes " << src << " and " << des << endl;
    }

    return 0;
}

