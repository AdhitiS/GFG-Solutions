#include<bits/stdc++.h>

using namespace std;


int maxLen(int arr[], int N)
{
    vector<int> zeroes(N,0);
    vector<int> ones(N,0);
    unordered_map<int,int> hash;
    int maxi=0;
    
    if(arr[0]==1)
    {
        ones[0]=1;
    }
    else
    {
        zeroes[0]=1;
    }
    
    for(int i=1;i<N;i++)
    {
        if(arr[i]==0)
        {
            zeroes[i]=1+zeroes[i-1];
            ones[i]=ones[i-1];
        }
        else
        {
            zeroes[i]=zeroes[i-1];
            ones[i]=1+ones[i-1];
        }
    }
    
    hash[0]=-1;
    for(int i=0;i<N;i++)
    {
        if(hash.find(zeroes[i]-ones[i])!=hash.end())
        {
            maxi=max(maxi,i-hash[zeroes[i]-ones[i]]);
        }
        else
        {
            hash[zeroes[i]-ones[i]]=i;
        }
    }
    return maxi;
    
}