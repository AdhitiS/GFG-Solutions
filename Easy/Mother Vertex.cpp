#include <bits/stdc++.h> 
using namespace std; 

 void dfs(int S,bool* visited,stack<int>& s,vector<int> adj[])//
{
    vector<int>::iterator i;
    for(i=adj[S].begin();i!=adj[S].end();i++)
    {
        if(!visited[*i])
        {
            visited[*i]=true;
            dfs(*i,visited,s,adj);
        }
    }
    s.push(S);
}

int findMother(int V, vector<int> adj[]) 
{ 
    bool* visited=new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    stack<int> s;
    
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            dfs(i,visited,s,adj);
        }
    }
    int ans=s.top();
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    stack<int> faaltu;
    visited[ans]=true;
    dfs(ans,visited,faaltu,adj);
    if(faaltu.size()==V)
    {
        return ans;
    }
    else
    {
        return -1;
    }
} 

int main() 
{ 
    int T;
    cin>>T;
    while(T--){
        int num, edges;
        cin>>num>>edges;
        
        vector<int> adj[num];
        
        int u, v;
        while(edges--){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        cout<<findMother(num, adj)<<endl;
    }

	return 0;
}