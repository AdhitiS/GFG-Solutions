#include <bits/stdc++.h>
using namespace std;

#include <vector>
class Solution{

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	    }
	    int s=sum/2;
	    vector<vector<bool>> dp(n+1,vector<bool>(s+1,0));
	    int mini=INT_MAX;
	    
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=s;j++)
	        {
	            if(j==0)
	            {
	                dp[i][j]=true;
	            }
	            else if(i==0)
	            {
	                dp[i][j]=false;
	            }
	            else if(arr[i-1]>j)
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
	            }
	        }
	    }
	    
	    for(int i=0;i<=s;i++)
	    {
	        if(dp[n][i])
	        {
	            mini=min(mini,sum-2*i);
	        }
	    }
	    return mini;    
	} 
};

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

	    Solution ob;
	    cout << ob.minDiffernce(a, n) << "\n";
	     
    }
    return 0;
}  