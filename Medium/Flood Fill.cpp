#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(int**& arr, int row, int col, int val,int x,int a,int b)
{
    arr[row][col]=val;
    
    if(row-1>=0&&arr[row-1][col]==x)
    {
        dfs(arr,row-1,col,val,x,a,b);
    }
    if(row+1<a&&arr[row+1][col]==x)
    {
        dfs(arr,row+1,col,val,x,a,b);
    }
     if(col-1>=0&&arr[row][col-1]==x)
    {
        dfs(arr,row,col-1,val,x,a,b);
    }
    
    if(col+1<b&&arr[row][col+1]==x)
    {
        dfs(arr,row,col+1,val,x,a,b);
    }
}

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
	    int x,y;
	    cin>>x>>y;
	    int** arr=new int*[x];
	    for(int i=0;i<x;i++)
	    {
	        arr[i]=new int[y];
	    }
	    
	    for(int i=0;i<x;i++)
	    {
	        for(int j=0;j<y;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    int row,col,val;
	    cin>>row>>col>>val;
	    
	    dfs(arr,row,col,val,arr[row][col],x,y);
	    
	    for(int i=0;i<x;i++)
	    {
	        for(int j=0;j<y;j++)
	        {
	            cout<<arr[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}