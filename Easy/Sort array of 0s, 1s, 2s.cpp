#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {	
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int* arr=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	   	    
	    int i=0,j=n-1,k=0;
	    while(k>=i&&k<=j)
	    {
	        if(arr[k]==0)
	        {
	            swap(arr[i],arr[k]);
	            
	            if(i==k)
	            {
	                 k++;
	            }
	            i++;	            
	        }
	        else if(arr[k]==2)
	        {
	            swap(arr[j],arr[k]);
	            j--;
	        }
	        else
	        {
	            k++;
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}