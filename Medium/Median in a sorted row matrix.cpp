#include <bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int>> pp;

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        priority_queue<pp,vector<pp>,greater<pp>> pq;
        int count=0;
        int k=(r*c)/2;
        for(int i=0;i<r;i++)
        {
            pq.push({matrix[i][0],{i,0}});
        }
        
        while(!pq.empty()&&count<k)
        {
            pair<int,pair<int,int>> p=pq.top();
            pq.pop();
            pair<int,int> coor=p.second;
            int x=coor.first;
            int y=coor.second;
            count++;
            if(y+1<c)
            {
                pq.push({matrix[x][y+1],{x,y+1}});
            }
            
            
        }
        pair<int,pair<int,int>> a=pq.top();
        return a.first;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
} 