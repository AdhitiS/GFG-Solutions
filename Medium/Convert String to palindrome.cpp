#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
 
    bool isValid(string s,unordered_map<int,int>& hash)
    {
        int odd=0,even=0;
        for(int i=0;i<s.size();i++)
        {
            if(hash.find(s[i])==hash.end())
            {
                odd++;
            }
            else if(hash[s[i]]%2==0)
            {
                even--;
                odd++;
            }
            else
            {
                odd--;
                even++;
            }
            hash[s[i]]++;
        }
        if(odd>1)
        {
            return false;
        }
        return true;
    }
    
    
    int swaps(string s)
    {
        int n=s.size();
        int count=0;
        for(int i=0;i<n/2;i++)
        {
            int left=i;
            int right=n-left-1;
            while(left<right)
            {
                if(s[left]==s[right])
                {
                    break;
                }
                else
                {
                    right--;
                }
            }
            if(left==right)
            {
                return -1;
            }
            for(int j=right;j<n-left-1;j++)
            {
                swap(s[j],s[j+1]);
                count++;
            }
        }
        return count;
    }
     
    int minswaps(string s)
    {
        unordered_map<int,int> hash;
        if(!isValid(s,hash))
        {
            return -1;
        }
        
        int ans1=swaps(s);
        reverse(s.begin(),s.end());
        int ans2=swaps(s);
        return max(ans1,ans2);
    
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R;int C;
        
        string s;
        cin>>s;
        Solution ob;
        int ans = ob.minswaps(s);
        cout << ans << endl;
    }
    return 0;
} 