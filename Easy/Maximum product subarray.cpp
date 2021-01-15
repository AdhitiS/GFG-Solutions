#include<iostream>
using namespace std;

class Solution{
public:

	long long maxProduct(int *arr, int n) {
	   
       // Method 1 : single traversal

	   // long long pprod=1,ans=1,nprod=1;
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(arr[i]<0)
	   //     {
	   //         swap(pprod,nprod);
	   //     }
	        
	   //     pprod=max((long long)arr[i],(long long)arr[i]*pprod);
	   //     nprod=min((long long)arr[i],(long long)arr[i]*nprod);
	   //     ans=max(ans,pprod);
	        
	   // }
	   // return ans;


       // Method 2 : double traversal(easier)

	   long long ans=0,p=1;
	    if(n==1)
	    return arr[0];
	    
	    for(int i=0;i<n;i++)
	    {
	        if((p>0&&arr[i]>0)||(p<0&&arr[i]<0))
	        {
	            p*=arr[i];
	            ans=max(p,ans);
	        }
	        else
	        {
	            p*=arr[i];
	            
	        }
	        if(p==0)
	        p=1; 
	    }
	    p=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        if((p>0&&arr[i]>0)||(p<0&&arr[i]<0))
	        {
	            p*=arr[i];
	            ans=max(p,ans);
	        }
	        else
	        {
	            p*=arr[i];
	            
	        }
	        if(p==0)
	        p=1; 
	    }
	    return ans;
	}

       // test case to think about..
	   //cout<<(long long)404928287208900000*(-90)<<endl;

};