#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    unordered_set<char> nt;
	    for(int i=0;i<n;i++)
	    {
	        nt.insert(nuts[i]);
	    }
	    
	    char arr[9]={'!','#','$','%','&','*','@','^','~'};
	    int k=0;
	    for(int i=0;i<9;i++)
	    {
	        if(nt.find(arr[i])!=nt.end())
	        {
	            nuts[k]=arr[i];
	            bolts[k]=arr[i];
	            nt.erase(arr[i]);
	            k++;
	        }
	    }

	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}