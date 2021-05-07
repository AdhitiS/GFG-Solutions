#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		int editDistance(string s, string t)
		{
		    int n1=s.size();
		    int n2=t.size();
		    int** dp=new int*[n1+1];
		    for(int i=0;i<=n1;i++)
		    {
		        dp[i]=new int[n2+1]{0};
		    }
		    
		    for(int i=0;i<=n1;i++)
		    {
		        for(int j=0;j<=n2;j++)
		        {
		            dp[i][j]=0;
		        }
		    }
		    
		    for(int i=0;i<=n1;i++)
		    {
		        for(int j=0;j<=n2;j++)
		        {
		            if(i==0)
		            {
		                dp[i][j]=j;
		            }
		            else if(j==0)
		            {
		                dp[i][j]=i;
		            }
		            else if(s[i-1]==t[j-1])
		            {
		                dp[i][j]=dp[i-1][j-1];
		            }
		            else
		            {
		                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
		            }
		        }
		    }
		    return dp[n1][n2];
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s, t;
    	cin >> s >> t;
    	Solution ob;
    	int ans = ob.editDistance(s, t);
    	cout << ans <<"\n";
    }
	return 0;
}