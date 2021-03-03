#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    long long bfs(queue<long long> q,long long X)
    {
        long long ans=0;
        while(!q.empty())
        {
            long long a=q.front();
            q.pop();
            
            if(a<=X&&a>ans)
            {
                ans=a;
            }
            if(a>=X)
            {
                continue;
            }
            
            if(a%10==9)
            {
                a=a*10+8;
                q.push(a);
            }
            else if(a%10==0)
            {
                a=a*10+1;
                q.push(a);
            }
            else
            {
                long long temp=a%10;
                long long x1=a*10+temp+1;
                long long x2=a*10+temp-1;
                q.push(x1);
                q.push(x2);
            }
        }
        return ans;
    }
  
    long long jumpingNums(long long X) {
        queue<long long> q;
        for(int i=1;i<=9;i++)
        {
            q.push(i);
        }
        
        long long ans=bfs(q,X);
        return ans;
        
        
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
} 