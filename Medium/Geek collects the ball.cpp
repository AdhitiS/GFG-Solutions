#include<iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
	    int m,n;
	    cin>>m>>n;
	    int* M=new int[m];
	    int* N=new int[n];
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>M[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>N[i];
	    }
	    
	    int op1=0,op2=0,maxi=0,i=0,j=0;
	    while(i<m&&j<n)
	    {
	        if(M[i]==N[j])
	        {
	            if(i<m-1&&M[i]==M[i+1])
	            {
	                op1+=M[i];
	                i++;
	            }
	            else if(j<n-1&&N[j]==N[j+1])
	            {
	                op2+=N[j];
	                j++;
	            }
	            else
	            {
	                maxi=maxi+max(op1,op2)+M[i];
	                op1=0;//maxi;
	                op2=0;//maxi;
	                i++;
	                j++;
	            }
	            
	            
	        }
	        else if(M[i]<N[j])
	        {
	            op1+=M[i];
	            i++;
	        }
	        else
	        {
	            op2+=N[j];
	            j++;
	        }
	    }
	    while(i<m)
	    {
	        op1+=M[i];
	        i++;
	    }
	    while(j<n)
	    {
	        op2+=N[j];
	        j++;
	    }
	    maxi=maxi+max(op1,op2);
	    cout<<maxi<<endl;
	}
	return 0;
}