#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n1,n2,n3;
	    string s1,s2,s3;
	    cin>>n1>>n2>>n3;
	    cin>>s1>>s2>>s3;
	    // Start
	    vector<vector<vector<int>>> dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,0)));
	    for(int i=n1-1;i>=0;i--)
	    {
	        for(int j=n2-1;j>=0;j--)
	        {
	            for(int k=n3-1;k>=0;k--)
	            {
	                if((s1[i]==s2[j])&&(s2[j]==s3[k]))
	                {
	                    dp[i][j][k]=1+dp[i+1][j+1][k+1];
	                }
	                else
	                {
	                    dp[i][j][k]=max(dp[i+1][j][k],max(dp[i][j+1][k],dp[i][j][k+1]));
	                }
	            }
	        }
	    }
	    cout<<dp[0][0][0]<<endl;
	    
	    
	}
	return 0;
}