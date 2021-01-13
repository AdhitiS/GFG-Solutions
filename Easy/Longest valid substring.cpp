#include <stack>
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string ans;
	    cin>>ans;
    	if(ans.size()==0)
    	{
    	    return 0;
    	}
    	stack<int> s;
	    int count=0,max=0;
    	s.push(0);
    	for(int i=1;i<ans.size();i++)
    	{
    	   // if(ans[i]=='(')
    	   // {
    	   //     s.push(i);
    	   //     continue;
    	   // }
    	    if(!s.empty()&&ans[i]==')'&&ans[s.top()]=='(')
    	    {
    	        s.pop();
    	        if(!s.empty())
         	    {
        	        count=i-s.top();
        	    }
        	    else
        	    {
        	        count=i+1;
        	    }
        	    
        	    if(count>max)
        	    {
        	        max=count;
        	    }
        	    continue;
    	    }
    	    
    	    
    	   // else
    	   // {
    	   //     s.push(i);
	       //     count=i+1;
    	   // }
    	    
     	    s.push(i);
    	}
    	cout<<max<<endl;
	}
	
	return 0;
}