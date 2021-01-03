#include <queue>
#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    queue<string> q;
	    q.push("1");
	    
	    while(!q.empty()&&n>0)
	    {
	        //int count=q.size();
	        string x=q.front();
	        cout<<x<<" ";
	        q.pop();
	        n--;
	        q.push(x+"0");
	        q.push(x+"1");
	        
	    }
	    cout<<endl;
	}
	return 0;
}