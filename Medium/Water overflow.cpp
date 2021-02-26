#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--)
	{
	    int K;
	    int j,i; cin>>K>>i>>j;
	    if(i<j)
	    {cout<<-1<<endl; continue;}
	    
	    float k=(float)K;
	    int n=(i*(i+1))/2;
	    vector<float> v(n+i,0.0);
	    
	    v[0]=k;
	    int ind=0;
	    for(int row=1;row<=i;row++)
	    {
	        for(int col=1;col<=row;col++,ind++)
	        {
	            float x=v[ind];
	            v[ind]=x>1.0?1:x;
	            x=x>1.0?x-1:0.0;
	            v[ind + row] += x / 2;
                v[ind + row + 1] += x / 2;
	        }
	    }
	   int a=(i*(i-1))/2;
	    cout<<fixed<<setprecision(6)<<v[a+j-1]<<endl;
	}
	return 0;
}