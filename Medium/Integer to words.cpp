#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string ones[]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
string tens[]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};

class Solution{   
public:


    string convertToWords(long n) {
 
        string A="";
        
        A+=Num(n/10000000,"crore ");
        A+=Num((n/100000)%100,"lakh ");
        A+=Num((n/1000)%100,"thousand ");
        A+=Num((n/100)%10,"hundred ");
        
        if(n>100&&n%100)
        {
            A+="and ";
        }
        A+=Num(n%100,"");
        return A;       
    }

    string Num(int n,string s){
    string ans="";
    
    if(n>19) {
        ans+=tens[n/10]+ones[n%10];
    }
    else {
        ans+=ones[n];
    }
    
    if(n){
        ans+=s;
    }
    return ans;
}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        Solution ob;
        auto ans = ob.convertToWords(n);
        cout << ans << "\n";
    }
    return 0;
} 