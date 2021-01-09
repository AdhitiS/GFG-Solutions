#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k,ans=-1;
	    cin>>n;
	    int* arr=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>k;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==k)
	        {
	            ans=i;
	            break;
	        }
	    }
	    cout<<ans<<endl;	    
	}
	return 0;
}