#include <bits/stdc++.h>
using namespace std;

int Rottime(int** arr,int r,int c)
{
    queue<pair<int,pair<int,int>>> q;
    for(int i=0;i<r;i++)
	{
	    for(int j=0;j<c;j++)
	    {
	        if(arr[i][j]==2)
	        {
	            q.push({0,{i,j}});
	        }
	    }
	}
	int maxi=0;
	while(!q.empty())
	{
	    int count=q.front().first;
	    int row1=q.front().second.first;
	    int col1=q.front().second.second;
	    
	    q.pop();
	    
	    if(row1-1>=0&&arr[row1-1][col1]==1)
	    {
	        q.push({count+1,{row1-1,col1}});
	        arr[row1-1][col1]=2;
	    }
	    
	    if(row1+1<r&&arr[row1+1][col1]==1)
	    {
	        q.push({count+1,{row1+1,col1}});
	        arr[row1+1][col1]=2;
	    }
	    
	    if(col1-1>=0&&arr[row1][col1-1]==1)
	    {
	        q.push({count+1,{row1,col1-1}});
	        arr[row1][col1-1]=2;
	    }
	    if(col1+1<c&&arr[row1][col1+1]==1)
	    {
	        q.push({count+1,{row1,col1+1}});
	        arr[row1][col1+1]=2;
	    }
	    maxi=max(maxi,count);
	}
	return maxi; 
}


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int r,c;
	    cin>>r>>c;
	    int** arr=new int*[r];
	    for(int i=0;i<r;i++)
	    {
	        arr[i]=new int[c];
	    }
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
		    
	   int count=Rottime(arr,r,c);
	   bool flag=false;
	   for(int i=0;i<r;i++)
	   {
	       if(flag)
	       {
	           break;
	       }
	       for(int j=0;j<c;j++)
	       {
	           if(arr[i][j]==1)
	           {
	               cout<<-1<<endl;
	               flag=true;
	               break;
	           }
	       }
	   }
	   if(!flag)
	   {
	       cout<<count<<endl;
	   }
	}
	return 0;
}