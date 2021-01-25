#include <bits/stdc++.h>
using namespace std;

vector <int> bfs(vector<int> g[], int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}

vector <int> bfs(vector<int> g[], int N) {
    
    vector<bool> visited(N,false);
    vector<int> ans;
    queue<int> q;
    q.push(0);
    visited[0]=true;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        ans.push_back(x);
        for(auto i=g[x].begin();i!=g[x].end();i++)
        {
            if(!visited[*i])
            {
                q.push(*i);
                visited[*i]=true;
            }
        }
    }
    return ans;
}