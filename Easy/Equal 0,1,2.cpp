// #include <vector>
// #include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s="";
	    cin>>s;
	    
	    vector<int> p0(s.size(),0);
	    vector<int> p1(s.size(),0);
	    vector<int> p2(s.size(),0);
	    
	    if(s[0]=='0')
	    {
	        p0[0]=1;
	    }
	    else if(s[0]=='1')
	    {
	        p1[0]=1;
	    }
	    else
	    {
	        p2[0]=1;
	    }
	    
	    for(int i=1;i<s.size();i++)
	    {
	        if(s[i]=='0')
	        {
	            p0[i]=1+p0[i-1];
	        }
	        else
	        {
	            p0[i]=p0[i-1];
	        }
	        
	        if(s[i]=='1')
	        {
	            p1[i]=1+p1[i-1];
	        }
	        else
	        {
	            p1[i]=p1[i-1];
	        }
	        
	        if(s[i]=='2')
	        {
	            p2[i]=1+p2[i-1];
	        }
	        else
	        {
	            p2[i]=p2[i-1];
	        }
	        
	    }
	    
	    
	    map<pair<int,int>,int> hash;
	    int count=0;
	    hash[{0,0}]=1;
	  
	    for(int i=0;i<s.size();i++)
	    {
	        if(hash[{p0[i]-p1[i],p1[i]-p2[i]}])
	        {
	            count+=hash[{p0[i]-p1[i],p1[i]-p2[i]}];
	        }
	        hash[{p0[i]-p1[i],p1[i]-p2[i]}]++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}