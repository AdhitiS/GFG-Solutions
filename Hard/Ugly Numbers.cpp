
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    long long arr[n];
	    arr[0]=1;
	    int i2=0,i3=0,i5=0;
	    for(int i=1;i<n;i++)
	    {
	        arr[i]=min(arr[i2]*2,min(arr[i3]*3,arr[i5]*5));
	        if(arr[i2]*2==arr[i])
	        {
	            i2++;
	        }
	        if(arr[i3]*3==arr[i])
	        {
	            i3++;
	        }
	        if(arr[i5]*5==arr[i])
	        {
	            i5++;
	        }
	    }
	    cout<<arr[n-1]<<endl;
	}
	return 0;
}