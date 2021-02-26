#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    unordered_map<int,int> ladder;
	    unordered_map<int,int> snake;
	    for(int i=0;i<n;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        if(x<y)
	        {
	            ladder[x]=y;
	        }
	        else
	        {
	            snake[x]=y;
	        }
	    }
	    
	    queue<pair<int,int>> q;
	    q.push({1,0});
	    int ans=INT_MAX;
	    
	    while(!q.empty())
	    {
	        pair<int,int> p=q.front();
	        
	        int coor=p.first;
	        int count=p.second;
	        q.pop();

	        if(coor==30)
	        {
	            ans=min(ans,count);
	            continue;
	        }
	        else if(coor>30)
	        {
	            continue;
	        }
	        
	        for(int i=1;i<=6;i++)
	        {
	            if(ladder.find(coor+i)!=ladder.end())
	            {
	                q.push({ladder[coor+i],count+1});
	            }
	            if(i==6)
	            {
	                int k=i;
	                while(snake.find(coor+k)!=snake.end())
	                {
	                    k--;
	                }
	                q.push({coor+k,count+1});
	            }
	            if((coor+i)==30)
	            {
	                ans=min(ans,count+1);

	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}