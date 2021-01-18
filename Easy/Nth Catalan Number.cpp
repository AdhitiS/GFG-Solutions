#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	//code

	int T;
	cin>>T;
	//int mod=pow(10,9)+7;
	while(T--)
	{

	    int n;
	    cin>>n;
	    // cpp_int c[n+1]{0};
        int c[n+1]{0};
	    c[0]=1;
	    c[1]=1;
	    for(int i=2;i<=n;i++)
	    {
	        c[i]=0;
	        for(int j=0;j<i;j++)
	        {
	            c[i]=c[i]+(c[j]*c[i-j-1]);
	        }
	    }
	    cout<<c[n]<<endl;
	    
	}
	return 0;
}