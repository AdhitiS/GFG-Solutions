#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
      
        int n=matrix.size();
        int m=matrix[0].size();
        vector<bool> row(n,false);
        vector<bool> col(m,false);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0&&(row[i]||col[j]))
                {
                    matrix[i][j]=1;
                }
            }
        }
        return;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
