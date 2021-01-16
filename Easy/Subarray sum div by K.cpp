#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
    
    int T;
	cin>>T;
	for(int x=0;x<T;x++)
	{
	    int n,k,ans=0;
	    cin>>n>>k;
	    int* arr=new int[n];
	    int* pre=new int[n];
	    unordered_map<int,int> hash;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    pre[0]=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        pre[i]=pre[i-1]+arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(pre[i]<0)
	        {
	            pre[i]=(pre[i]%k)+k;
	        }
	        else
	        pre[i]=pre[i]%k;
	    }
	    hash[0]=1;
	    for(int i=0;i<n;i++)
	    {
	        if(hash[pre[i]])
	        {
	            ans=ans+hash[pre[i]];
	        }
	        hash[pre[i]]++;
	    }
	    cout<<ans<<endl;
	}
	//code
	return 0;
}