#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    vector<int> dp(n+1,-1);
	    int x,y,z;
	    cin>>x>>y>>z;
	    dp[0]=0;
	    for(int i=0;i<n;i++)
	    {
	        if(dp[i]==-1)
	        {
	            continue;
	        }
	        if(i+x<=n)
	        {
	            dp[i+x]=max(dp[i+x],1+dp[i]);
	        }
	        if(i+y<=n)
	        {
	            dp[i+y]=max(dp[i+y],1+dp[i]);
	        }
	        if(i+z<=n)
	        {
	            dp[i+z]=max(dp[i+z],1+dp[i]);
	        }
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}