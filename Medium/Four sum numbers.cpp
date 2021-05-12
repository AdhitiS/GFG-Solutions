#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> v(n,0);
	    unordered_map<int,int> hash;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    if(n<4)
	    {
	        cout<<-1<<endl;       
	        continue;
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<n;i++)
	    {
	        hash[v[i]]=i;
	    }
	    unordered_map<string,int> check;
	    int sum=0;
	    bool flag=false;

	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            for(int w=j+1;w<n;w++)
	            {
	                sum=v[i]+v[j]+v[w];
	                if(hash[k-sum]>w)
	                {
	                    string ans=to_string(v[i])+"#"+to_string(v[j])+"#"+to_string(v[w])+"#"+to_string(k-sum);
	                    if(check[ans])
	                    {
	                        continue;
	                    }
	                    else
	                    {
	                        cout<<v[i]<<" "<<v[j]<<" "<<v[w]<<" "<<k-sum<<" $";
	                        check[ans]++;
	                        flag=true;
	                    }
	                }
	            }
	        }
	    }
	    if(!flag)
	    {
	        cout<<-1;
	    }
	    cout<<endl;	    
	}
	return 0;
}