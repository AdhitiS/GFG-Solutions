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
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    for(int i=1;i<n;i++)
	    {
	        v[i]=v[i-1]+v[i];
	    }
	   
	    unordered_map<int,int> hash;
	    int count=0;
	     hash[0]=1;
	    for(int i=0;i<n;i++)
	    {
	        if(hash[v[i]])
	        {
	            count+=hash[v[i]];
	        }
	        hash[v[i]]++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}