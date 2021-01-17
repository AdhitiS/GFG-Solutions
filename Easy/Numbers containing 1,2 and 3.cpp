#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 
void findAll() {

    queue<string> q;
    q.push("1");
    q.push("2");
    q.push("3");
    while(!q.empty())
    {
        string ans=q.front();
        q.pop();
        if(ans.size()>6)
        {
            continue;
        }
        int x=stoi(ans);
        mp[x]=1;
        q.push(ans+"1");
        q.push(ans+"2");
        q.push(ans+"3");
    }
    mp[1000000]=1;
}