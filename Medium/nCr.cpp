#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int nCr(int n, int r)
    {
        int i,j,mod=pow(10,9)+7;
        vector<vector<int>>dp(n+1,vector<int>(r+1,0));
        dp[0][0]=1;
        for(i=1;i<=r;i++)
        {
            dp[0][i]=0;
        }
        for(i=1;i<=n;i++)
        {
            dp[i][0]=1;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=min(i,r);j++)
            {
                 dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
            }
       }
       return dp[n][r];
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
} 