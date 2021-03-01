#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    char* arr=new char[n];
	    queue<char> q;
	    unordered_map<char,int> hash;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    
	    cout<<arr[0]<<" ";
	    q.push(arr[0]);
	    hash[arr[0]]++;
	    
	    for(int i=1;i<n;i++)
	    {
	        hash[arr[i]]++;
	        if(hash[arr[i]]==1)
	        {
	            q.push(arr[i]);
	            cout<<q.front()<<" ";
	        }
	        else
	        {
	            while(!q.empty()&&hash[q.front()]>1)
	            {
	                q.pop();
	            }
	            
	            if(q.empty())
	            {
	                cout<<-1<<" ";
	            }
	            else
	            {
	                cout<<q.front()<<" ";
	            }
	       
	        }
	        
	    }
	    cout<<endl;
	    
	}
	return 0;
}