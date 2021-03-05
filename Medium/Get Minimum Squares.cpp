#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    if(n<=3)
	    {
	        return n;
	    }
	        
	    vector<int> v(n+1,0);
	    v[0]=0;
	    v[1]=1;
	    v[2]=2;
	    v[3]=3;
	
	    for(int i=4;i<=n;i++)
	    {
	       // 
	       v[i]=i;
	        for(int x=1;x*x<=i;x++)
	        {
	            v[i]=min(v[i],1+v[i-x*x]);
	        }
	        
	    }
	    cout<<v[n]<<endl;
	}
	return 0;
}