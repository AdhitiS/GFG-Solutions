#include <bits/stdc++.h>
using namespace std;

class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        unordered_map<int,int> hash1;
        unordered_map<int,int> hash2;

        int sum1=0,sum2=0,count=0;
        
        for(int i=0;i<n;i++)
        {
            sum1+=A[i];
        }
        for(int i=0;i<m;i++)
        {
            sum2+=B[i];
        }
        int diff=abs(sum1-sum2);
        if(diff%2!=0)
        {
            return -1;
        }
        diff=diff/2;
        for(int i=0;i<m;i++)
        {
            hash2[B[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            hash1[A[i]]++;
        }
        
        if(sum1>sum2)
        {
            for(int i=0;i<n;i++)
            {
                if(hash2[(A[i]-diff)]&&(A[i]!=(A[i]-diff)))
                {
                    return 1;
                }
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                if(hash1[(B[i]-diff)]&&(B[i]!=(B[i]-diff)))
                {
                    return 1;
                }
            }
        }
        
        
        return -1;
	}
 

};


int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}
