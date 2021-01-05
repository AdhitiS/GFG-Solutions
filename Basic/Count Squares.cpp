#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquares(int N) {
        // code here
        int n=pow(N,0.5);
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(i*i<N)
            {
                count++;
            }
        }
        return count;
    }
};