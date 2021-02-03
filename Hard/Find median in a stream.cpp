#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;
	priority_queue<double> maxh;
	priority_queue<double,vector<double>,greater<double>> minh;
	double x,med;
	cin>>x;
	maxh.push(x);
	med=x;
	cout<<x<<endl;
	for(int i=1;i<n;i++)
	{
	    cin>>x;
	    if(maxh.size()>minh.size())
	    {
	        if(x<med)
	        {
	            double s=maxh.top();
	            maxh.pop();
	            minh.push(s);
	            maxh.push(x);
	        }
	        else
	        {
	            minh.push(x);
	        }
	        med=(minh.top()+maxh.top())/2.0;
	    }
	    else if(maxh.size()<minh.size())
	    {
	        if(x>med)
	        {
	            double s=minh.top();
	            minh.pop();
	            maxh.push(s);
	            minh.push(x);
	        }
	        else
	        {
	            maxh.push(x);
	        }
	        med=(minh.top()+maxh.top())/2.0;
	    }
	    else
	    {
	        if(x<med)
	        {
	            maxh.push(x);
	            med=(double)maxh.top();
	        }
	        else
	        {
	            minh.push(x);
	            med=(double)minh.top();
	        }
	    }
	    cout<<(int)med<<endl;
	}
	return 0;
}