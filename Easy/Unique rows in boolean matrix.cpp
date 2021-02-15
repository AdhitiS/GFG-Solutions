#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000 
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here
unordered_set<string> hash;
vector<vector<int>> ans;
for(int i=0;i<row;i++)
{
    string v="";
    vector<int> temp;
    for(int j=0;j<col;j++)
    {
        v+=M[i][j];
        temp.push_back(M[i][j]);
    }
    if(hash.find(v)==hash.end())
    {
        hash.insert(v);
        ans.push_back(temp);
    }
    
}
return ans;
}