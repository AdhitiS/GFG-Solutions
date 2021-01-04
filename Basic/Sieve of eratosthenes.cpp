#include <cmath>
#include <vector>
#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    vector<bool> v(n+1,true);
	    int x=pow(n,0.5);
	    for(int i=2;i<=x;i++)
	    {
	        for(int j=i*i;j<=n;j+=i)
	        {
	            v[j]=false;
	        }
	    }
	    for(int i=2;i<=n;i++)
	    {
	        if(v[i])
	        {
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}