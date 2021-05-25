#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long mod=pow(10,9)+7;

void validStrings(queue<string>& q,string curr,set<string>& setmap,long long& count,int mid1,int mid2,string& s,int& k)
{
    while(mid1>=0&&mid2<curr.size())
    {
        
        curr[mid1]=curr[mid1]+1;
        curr[mid2]=curr[mid2]+1;
        if((curr[mid1]>='a'&&curr[mid1]<='a'+k-1)&&(curr[mid2]>='a'&&curr[mid2]<='a'-1+k))
        {
            mid1--;
            mid2++;
            if(setmap.find(curr)==setmap.end()&&curr<s)
            {
                q.push(curr);
                setmap.insert(curr);
                count=(count+1)%mod;
            }
        }
        else
        {
            break;
        }
        
    }
}

int main(){
    int T;
    cin>>T;
    int tot=T;
    
    while(T-->0)
    {
        int n,k;
        cout<<"checkpoint1 ";
        long long count=0;
        cin>>n>>k;
        string s="";
        cout<<n<<" "<<k<<"checkpoint2 ";
        cin>>s;
        string v="";
        queue<string> q;
        set<string> setmap;
        for(int i=0;i<n;i++){
            v.push_back('a');
        }
        q.push(v);
        cout<<"checkpoint3 ";
        while(!q.empty())
        {
            string curr=q.front();
            q.pop();
            cout<<"checkpoint4 ";
            if(curr.size()%2==0)
            {
                int mid1=curr.size()/2-1,mid2=curr.size()/2;
                cout<<"1 ";
                validStrings(q,curr,setmap,count,mid1,mid2,s,k);
            }
            else
            {
                int mid1=curr.size()/2-1;
                int mid2=curr.size()/2+1;
                cout<<"2 ";
                validStrings(q,curr,setmap,count,mid1,mid2,s,k);
                
                int mid=curr.size()/2;
                curr[mid]=curr[mid]+1;
                
                if((curr[mid]>='a'&&curr[mid]<='a'-1+k)&&setmap.find(curr)==setmap.end()&&curr<s)
                {
                    q.push(curr);
                    setmap.insert(curr);
                    count=(count+1)%mod;
                }
            }
            
        }
        cout<<"Case #"<<tot-T<<": "<<count<<endl;
    }
}