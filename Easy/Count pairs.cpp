#include<iostream>
#include<bits/stdc++.h>
using namesapce std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int count=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            if(map[k-arr[i]])
            {
                count+=map[k-arr[i]];
            }
            map[arr[i]]++;
        }
        return count;
    }
};