#include<bits/stdc++.h>
using namespace std;
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        
        for (auto x : s) {
            count[x]++;
        }
        
        for (auto x : t) {
            count[x]--;
        }
        
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }
        
        return true;
    }

int main()
{
    string A, B;
    cin >> A >> B;

    if(isAnagram(A, B)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}