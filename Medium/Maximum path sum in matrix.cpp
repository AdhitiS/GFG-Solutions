#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        int maxi=0;
        vector<vector<int>> dp(N,vector<int>(N,0));
        for(int i=0;i<N;i++)
        {
            dp[N-1][i]=Matrix[N-1][i];
            maxi=max(maxi,dp[N-1][i]);
        }
        for(int i=N-2;i>=0;i--)
        {
            for(int j=0;j<N;j++)
            {
                dp[i][j]=Matrix[i][j]+dp[i+1][j];
                if(j>0)
                {
                    dp[i][j]=max(dp[i][j],Matrix[i][j]+dp[i+1][j-1]);
                }
                if(j<N-1)
                {
                    dp[i][j]=max(dp[i][j],Matrix[i][j]+dp[i+1][j+1]);
                }
                maxi=max(maxi,dp[i][j]);
            }
        }
        return maxi;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
} 