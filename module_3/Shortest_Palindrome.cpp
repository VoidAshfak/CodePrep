#include <bits/stdc++.h>
#include<string>
using namespace std;

string shortestPalindrome(string s){

    int n=s.size();
    string rev=s;
    reverse(rev.begin(), rev.end());
    string s_new = s + "#" + rev;
    int n_new = s_new.size();
    vector<int> left_s(n_new, 0);
    int t = 0;
    for(int i = 1; i < n_new; i++){
        t = left_s[i-1];
        while(t > 0 && s_new[i] != s_new[t]){
            t = left_s[t-1];
        }
        if(s_new[i]==s_new[t]){
            ++t;
        }
        left_s[i] = t;
    }
    return rev.substr(0, n-left_s[n_new-1]) + s;
}


int main() {
    
    string s;
    cin >> s;

    string ans = shortestPalindrome(s);

    cout << ans << endl;

    return 0;
}
/*

b c b a
i   j

a b c b a

*/

