#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int>& v1,vector<int>& v2)
{
    return (double)v1[0]/v1[1]>(double)v2[0]/v2[1];
}


int main() {
	//code
	int T;
	cin>>T;
	for(int k=0;k<T;k++)
	{
	    int n,w;
	    cin>>n>>w;
	    vector<vector<int>> v;
	    for(int i=0;i<n;i++)
	    {
	        vector<int> ans;
	        int a,b;
	        cin>>a>>b;
	        ans.push_back(a);
	        ans.push_back(b);
	        v.push_back(ans);
	    }
	    
	    sort(v.begin(),v.end(),comp);
	    double ans=0.0;
	    int wt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(v[i][1]+wt<=w)
	        {
	            ans+=v[i][0];
	            wt+=v[i][1];
	        }
	        else
	        {
	            int rem=w-wt;
	            ans+=v[i][0]*((double)rem/v[i][1]);
	            break;
	        }
	    }
	    //cout<<ans<<endl;
	    cout<<fixed<<setprecision(2)<<ans<<endl;
	    
	}
	return 0;
}