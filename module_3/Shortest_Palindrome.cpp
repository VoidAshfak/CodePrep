#include <bits/stdc++.h>
#include<string>
using namespace std;
     
int main() {
    
    string S, output;
    cin >> S;

    int n = S.length();
    //output = S;

    int i = 0, j = n-1;

    while(i < j){

        if(S[i] != S[j]){
            // output = S[j] + output;
            output.push_back(S[j]);
            --j;
        }
        else{
            ++i;
            --j;
        }

    }

    cout << output+S << endl;

    return 0;
}
/*

b c b a
i   j

a b c b a

*/