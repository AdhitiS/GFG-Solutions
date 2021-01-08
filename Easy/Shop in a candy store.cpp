#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    int min=0,max=0;
	    if(k>=n-1)
	    {
	        min=v[0];
	        max=v[n-1];
	        
	        cout<<min<<" "<<max<<endl;
	        continue;
	    }
	    int total=n;
	    int i=0,j=n-1;
	    while(total>0)
	    {
	        min+=v[i++];
	        max+=v[j--];
	        total=total-k-1;
	    }
	    cout<<min<<" "<<max<<endl;
	    continue;
	    
	    
	    
	}
	return 0;
}