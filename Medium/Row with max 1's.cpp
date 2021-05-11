#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,m;
	    cin>>n>>m;
	    int maxi=0,count=0,index=0;
	    vector<vector<int>> v(n,vector<int>(m,0));
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	        for(int j=0;j<m;j++)
	        {
	            cin>>v[i][j];
	            if(v[i][j]==1)
	            {
	                count++;
	            }
	        }
	        if(count>maxi)
	        {
	            index=i;
	            maxi=count;
	        }
	    }
	    cout<<index<<endl;
	}
	return 0;
}