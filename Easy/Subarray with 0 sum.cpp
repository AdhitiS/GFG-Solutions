#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    unordered_set<int> hash;
    for(int i=1;i<n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    
    for(int i=0;i<n;i++)
    {
        if(hash.find(arr[i])!=hash.end())
        {
            return 1;
        }
        else if(arr[i]==0)
        {
            return 1;
        }
        hash.insert(arr[i]);
    }
    return 0;
}
