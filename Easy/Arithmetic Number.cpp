#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int abs(int data)
    {
        if(data<0)
        {
            return -data;
        }
        else
        {
            {
                return data;
            }
        }
        
    }
    int inSequence(int A, int B, int C){
        if(A==B)
        {
            return 1;
        }
        else if(C==0)
        {
            return 0;
        }
        int diff=B-A;
        if(diff<0&&C<0&&abs(diff)%abs(C)==0)
        {
            return 1;
        }
        else if(diff>0&&C>0&&diff%C==0)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};