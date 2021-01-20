#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}


queue<ll> modifyQueue(queue<ll> q, int k)
{
    stack<ll> s;
    int Size=q.size();
    for(int i=0;i<k;i++)
    {
        ll x=q.front();
        q.pop();
        s.push(x);
    }
    for(int i=0;i<k;i++)
    {
        ll x=s.top();
        s.pop();
        q.push(x);
    }
    for(int i=k;i<Size;i++)
    {
        ll x=q.front();
        q.pop();
        q.push(x);
    }
    return q;
    
}