#include <bits/stdc++.h> 
using namespace std; 

class Solution
{
  public:
    int mod=pow(10,9)+7;

    int countWays(int arr[], int m, int N) 
    { 
      vector<int> dp(N+1,0);
      dp[0]=1;
      for(int i=1;i<=N;i++)
      {
          for(int j=0;j<m;j++)
          {
              if(i>=arr[j])
              {
                  dp[i]=(dp[i]%mod+dp[i-arr[j]]%mod)%mod;
              }
          }
      }
      return dp[N];     
    }    
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int m,n ;
	        cin>>m>>n;
	        int arr[m];
	        for(int i = 0;i<m;i++)
	            cin>>arr[i];
	        Solution ob;     
	        cout<<ob.countWays(arr,m,n)<<endl;
	    }
} 