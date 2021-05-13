#include<bits/stdc++.h>
using namespace std;

bool hasPath(int** arr,pair<int,int> desti,int i,int j,int n,bool**& visited)
{
    if(i==desti.first&&j==desti.second)
    {
        return true;
    }   
    if(i-1>=0&&arr[i-1][j]!=0&&!visited[i-1][j])
    {
        visited[i-1][j]=true;
        bool ans=hasPath(arr,desti,i-1,j,n,visited);
        if(ans)
        {
            return true;
        }
    }
    if(i+1<n&&arr[i+1][j]!=0&&!visited[i+1][j])
    {
        visited[i+1][j]=true;
        bool ans=hasPath(arr,desti,i+1,j,n,visited);
        if(ans)
        {
            return true;
        }
    }
    if(j-1>=0&&arr[i][j-1]!=0&&!visited[i][j-1])
    {
        visited[i][j-1]=true;
        bool ans=hasPath(arr,desti,i,j-1,n,visited);
        if(ans)
        {
            return true;
        }
    }
    if(j+1<n&&arr[i][j+1]!=0&&!visited[i][j+1])
    {
        visited[i][j+1]=true;
        bool ans=hasPath(arr,desti,i,j+1,n,visited);
        if(ans)
        {
            return true;
        }
    }
    return false;   
}


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int** arr=new int*[n];
	    bool** visited=new bool*[n];
	    pair<int,int> source,desti;
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=new int[n];
	        visited[i]=new bool[n];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	            if(arr[i][j]==1)
	            {
	                source={i,j};
	            }
	            else if(arr[i][j]==2)
	            {
	                desti={i,j};
	            }
	        }
	    }
	    int i=source.first;
	    int j=source.second;
	    visited[i][j]=true;
	    
	  bool ans=hasPath(arr,desti,i,j,n,visited);
	  if(ans)
	  {
	      cout<<1<<endl;
	  }
	  else
	  {
	      cout<<0<<endl;
	  }	    
	}
	return 0;
}