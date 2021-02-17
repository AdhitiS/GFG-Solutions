#include <bits/stdc++.h>
using namespace std;

 
class Solution{
public:
    int countBits(int N, long long int A[])
    {
        int mod=pow(10,9)+7;
        long long int ans=0;
        for(int i=0;i<31;i++)
        {
            int count=0;
            for(int j=0;j<N;j++)
            {
                if(A[j]&(1<<i))
                {
                    count++;
                }
            }
            ans=(ans%mod+(2*(count%mod)*(N-count)%mod)%mod)%mod;
        }
        return ans;
        
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
} 