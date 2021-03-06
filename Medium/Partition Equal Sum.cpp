#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
       
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
        {
            return 0;
        }
        else
        {
            sum=sum/2;
        }
        bool** dp=new bool*[N+1];
        for(int i=0;i<=N;i++)
        {
            dp[i]=new bool[sum+1];
        }
        
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j==0)
                {
                    dp[i][j]=true;
      
                }
                else if(i==0)
                {
                    dp[i][j]=false;
 
                }
                else if(arr[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=(dp[i-1][j-arr[i-1]]||dp[i-1][j]);
                }
                
            }
        }
        return dp[N][sum];
        
        
        
        
        
        
        
        // if(sum%2!=0)
        // {
        //     return 0;
        // }
        // sort(arr,arr+N);
        // int i=0,j=0;
        // while(i<N||j<N)
        // {
        //     if((ans+arr[j])==sum/2)
        //     {
        //         cout<<ans+arr[j]<<" ";
        //         return 1;
        //     }
        //     else if((ans+arr[j])<sum/2)
        //     {
        //         ans+=arr[j];
        //         cout<<ans<<" ";
        //         j++;
        //     }
        //     else
        //     {
        //         ans-=arr[i];
        //         cout<<ans<<" ";
        //         i++;
        //     }
        // }
        // return 0;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends