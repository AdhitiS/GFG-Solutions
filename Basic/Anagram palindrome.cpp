#include<unordered_map>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    int count=0;
	    unordered_map<char,int> hash;
	    for(int i=0;i<s.size();i++)
	    {
	        hash[s[i]]++;
	    }
	    
	    for(auto i=hash.begin();i!=hash.end();i++)
	    {
	        if((i->second%2)!=0)
	        {
	            count++;
	        }
	    }
	    if(count>1)
	    {
	        cout<<"No";
	    }
	    else
	    {
	        cout<<"Yes";
	    }
	    cout<<endl;
	}
	return 0;
}