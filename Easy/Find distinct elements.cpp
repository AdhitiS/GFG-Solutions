#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
class Solution{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        if(N==0)
        {
            return 0;
        }
        unordered_map<int,int> hash;
        set<int> s;
        for(int i=0;i<N;i++)
        {
            if(s.find(M[0][i])==s.end())
            {
                hash[M[0][i]]++;
                s.insert(M[0][i]);
            }
            
        }
        
        
        
        for(int i=1;i<N;i++)
        {
            set<int> s;
            for(int j=0;j<N;j++)
            {
                if(s.find(M[i][j])==s.end()&&hash.find(M[i][j])!=hash.end())
                {
                    hash[M[i][j]]++;
                    s.insert(M[i][j]);
                }
            }
        }
        int count=0;
        for(auto i=hash.begin();i!=hash.end();i++)
        {
            if(i->second==N)
            {
                count++;
            }
        }
        return count;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for(int i = 0;i < N*N; i++)
            cin>>M[i/N][i%N];
        
        Solution ob;
        cout<<ob.distinct(M, N)<<"\n";
    }
    return 0;
} 