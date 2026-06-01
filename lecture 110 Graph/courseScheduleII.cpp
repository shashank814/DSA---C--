#include<iostream>
#include<vector>
#include<stack>
using namespace std;

    bool isCycleDFS(int src, vector<bool> &vis, vector<bool> &recPath, vector<vector<int>>& edges) {
        vis[src] = true;
        recPath[src] = true;

        for(int i=0; i<edges.size(); i++) {
            int v = edges[i][0];
            int u = edges[i][1];

            if(u == src) {
                if(!vis[v]) {
                    if(isCycleDFS(v, vis, recPath, edges)) {
                        return true;
                    }
                } else if(recPath[v]) {      // BackEdge -> Cycle Exist
                    return true;
                }
            }
        }

        recPath[src] = false;
        return false;
    }

    void topoOrder(int src, vector<bool> &vis, stack<int> &s, vector<vector<int>>& edges) {
        vis[src] = true;
        for(int i=0; i<edges.size(); i++) {
            int v = edges[i][0];
            int u = edges[i][1];

            if(u == src) {
                if(!vis[v]) {
                    topoOrder(v, vis, s, edges);
                } 
            }
        }
        s.push(src);
    }

    vector<int> findOrder(int n, vector<vector<int>> &edges) {
        vector<bool> vis(n, false);
        vector<bool> recPath(n, false);
        vector<int> ans;

        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                if(isCycleDFS(i, vis, recPath, edges)) {
                    return ans;
                }
            }
        }

        //  Topological sorted order
        stack<int> s;
        vis.assign(n, false);

        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                topoOrder(i, vis, s, edges);
            }
        }

        while (s.size()>0) {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }

int main() {
    vector<vector<int>> edges = {{1,0},{2,0},{3,1},{3,2}};

    int n = 4;
    vector<int> result = findOrder(n, edges);
    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}