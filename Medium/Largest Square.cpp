#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	for(int k=0;k<T;k++)
	{
	    int row,col;
	    cin>>row>>col;
	    int** arr=new int*[row];
	    int ans[row][col];
	    int max=0;
	    for(int i=0;i<row;i++)
	    {
	        arr[i]=new int[col];
	        for(int j=0;j<col;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    for(int i=0;i<row;i++)
	    {
	        ans[i][col-1]=arr[i][col-1];
	    }
	    for(int i=0;i<col;i++)
	    {
	        ans[row-1][i]=arr[row-1][i];
	    }
	    
	    for(int i=row-2;i>=0;i--)
	    {
	        for(int j=col-2;j>=0;j--)
	        {
	            if(arr[i][j]==1)
	            {
	                ans[i][j]=1+min(ans[i+1][j+1],min(ans[i][j+1],ans[i+1][j]));
	            }
	            else
	            {
	                ans[i][j]=0;
	            }
	        }
	    }
	    
	    for(int i=0;i<row;i++)
	    {
	        for(int j=0;j<col;j++)
	        {
	            if(ans[i][j]>max)
	            {
	                max=ans[i][j];
	            }
	        }
	    }
	    cout<<max<<endl;
	    
	}
	return 0;
}