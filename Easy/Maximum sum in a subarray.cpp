#include <vector>
#include<iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        long long sum=0,max=0;
        vector<long long> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++)
        {
            sum=v[i]+v[i+1];
            if(sum>max)
            {
                max=sum;
            }
        }
        cout<<max<<endl;
    }
	//code
	return 0;
}