#include <bits/stdc++.h>
using namespace std;

int pgFault(vector<int> v,int n,int k,unordered_set<int> s,unordered_map<int,int> map)
{
    int count=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(v[i])==s.end())
        {
            if(count<k)
            {
                count++;
                ans++;
                s.insert(v[i]);
            }
            else
            {
               
                int mini=INT_MAX,val;
                for(auto k=s.begin();k!=s.end();k++)
                {
                    if(map[*k]<mini)
                    {
                        mini=map[*k];
                        val=*k;
                    }
                }
                s.erase(val);
                
                s.insert(v[i]);
                ans++;
            }
        }
        
        map[v[i]]=i;
        
            
       
    }
    return ans;
}



int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k;
	    cin>>n;
	    vector<int> v(n,0);
	    unordered_set<int> s;
	    unordered_map<int,int> map;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    cin>>k;
	    int a=pgFault(v,n,k,s,map);
	    cout<<a<<endl;
	}
	return 0;
}