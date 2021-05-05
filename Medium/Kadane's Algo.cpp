#include<bits/stdc++.h> 
using namespace std; 

class Solution
{

public:
    int maxoccourence(int arr[], int n, int k)
    {
        
        int num=0;
        int maxi=0;
        
        for(int i=0;i<n;i++)
        {
            int count=0;
            int curr=arr[i];
            while(curr>0)
            {
                int x=curr%10;
                curr/=10;
                if(x==k)
                {
                    count++;
                }
            }
            if(maxi<count)
            {
                maxi=count;
                num=arr[i];
            }
            else if(maxi==count)
            {
                num=min(num,arr[i]);
            }
        }
        return num;
    
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n ; i++)
        cin>>arr[i];
        cin>>k;
        Solution ob;
        int ans = ob.maxoccourence(arr,n,k);
        cout << ans << endl;
    }
    return 0;
} 