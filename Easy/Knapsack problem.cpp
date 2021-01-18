#include <iostream>
using namespace std;

int main() {
	//code
	
	int T;
	cin>>T;
	for(int k=0;k<T;k++)
	{
	    int n,w;
	    cin>>n>>w;
	    int* prof=new int[n+1];
	    int* wt=new int[n+1];
	    prof[0]=0;
	    wt[0]=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>prof[i];
	    }
	    for(int i=1;i<=n;i++)
	    {
	        cin>>wt[i];
	    }
	    int dp[n+1][w+1];
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=w;j++)
	        {
	            if(i==0||j==0)
	            {
	                dp[i][j]=0;
	            }
	            else if(j<wt[i])
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	            else
	            {
	                dp[i][j]=max(dp[i-1][j],prof[i]+dp[i-1][j-wt[i]]);
	            }
	        }
	    }
	    cout<<dp[n][w]<<endl;
	}
	return 0;
}