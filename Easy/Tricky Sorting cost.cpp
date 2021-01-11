#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(hash[v[i]-1])
            {
                hash[v[i]]=hash[v[i]-1]+1;
                maxi=max(maxi,hash[v[i]]);
            }
            else
            {
                hash[v[i]]=1;
            }
            
        }
        cout<<n-maxi<<endl;
    }
	return 0;
}