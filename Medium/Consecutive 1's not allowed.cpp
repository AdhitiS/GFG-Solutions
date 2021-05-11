#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	int mod=pow(10,9)+7;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    int dp0=1;
	    int dp1=1;
	    for(int i=2;i<=n;i++)
	    {
	        int temp=dp0%mod;
	        dp0=(dp0+dp1)%mod;
	        dp1=temp;
	    }
	    cout<<(dp0+dp1)%mod<<endl;
	}
	return 0;
}