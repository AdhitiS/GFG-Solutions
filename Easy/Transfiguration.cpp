#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	int n=A.size();
    	int m=B.size();
    	
    	unordered_map<char,int> hash1;
    	unordered_map<char,int> hash2;
    	
    	for(int i=0;i<n;i++)
    	{
    	    hash1[A[i]]++;
    	}
    	for(int i=0;i<m;i++)
    	{
    	    hash2[B[i]]++;
    	}
    	if(hash1.size()!=hash2.size())
    	{
    	    return -1;
    	}
    	for(auto i=hash1.begin();i!=hash2.end();i++)
    	{
    	    if(i->second!=hash2[i->first])
    	    {
    	        return -1;
    	    }
    	}
    	
    	int i=n-1,j=m-1;
    	while(i>=0&&j>=0)
    	{
    	    if(A[i]==B[j])
    	    {
    	        i--;
    	        j--;
    	    }
    	    else
    	    {
    	        while(A[i]!=B[j]&&i>=0)
    	        {
    	            i--;
    	        }
    	    }
    	}
    	return j-i;
    
    }
};