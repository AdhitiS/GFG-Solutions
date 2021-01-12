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
        for(int i=0;i<=n;i++)
        {
            v[i]=i;
        }
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int x=1;x*x<=i;x++)
	        {
	            v[i]=min(v[i],1+v[i-x*x]);
	        }
	        
	    }
	    cout<<v[n]<<endl;
	}
	return 0;
}