#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
        long long* arr=new long long[n+1];
        bool* visited=new bool[n+1]{false};
        arr[0]=1;
        visited[0]=true;
        for(int i=0;i<m;i++)
        {
            for(int j=S[i];j<=n;j++)
            {
                arr[j]+=arr[j-S[i]];
            }
        }
        return arr[n];
    }
};

int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}  
    return 0;
} 