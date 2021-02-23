#include<bits/stdc++.h>
using namespace std;


int pairnoncoincident(vector<vector<int>> points){
	int n = points.size();
	unordered_map<int, int> xcoordinate;
	unordered_map<int, int> ycoordinate;
	unordered_map<string, int> hash;

	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		if(xcoordinate.count(points[i][0]) != 0)
		{
			ans += xcoordinate[points[i][0]];
			xcoordinate[points[i][0]]++;
		}
		else
		{
			xcoordinate[points[i][0]] = 1;
		}
		
		if(ycoordinate.count(points[i][1]) != 0)
		{
			ans += ycoordinate[points[i][1]];
			ycoordinate[points[i][1]]++;
		}
		else
		{
			ycoordinate[points[i][1]] = 1;
		}

		string temp = to_string(points[i][0]) + "," + to_string(points[i][1]);
		if(hash.count(temp) != 0){

			ans = ans - 2*hash[temp];
		}
		else
		{
			hash[temp] = 1;
		}
	}
	return ans;
}

int main() {
    
    int T;
    cin>>T;
    
    for(int k=0;k<T;k++)
    {
        int n;
        cin>>n;
        vector<vector<int>> points;
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            int a,b;
            cin>>a>>b;
            v.push_back(a);
            v.push_back(b);
            points.push_back(v);
        }
        int ans=pairnoncoincident(points);
        cout<<ans<<endl;
        
    }
	return 0;
}
