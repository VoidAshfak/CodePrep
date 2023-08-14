#include<bits/stdc++.h>
using namespace std;

bool isFunny(string s){
    bool result;
    if(s.size() == 1 && s[0] >= 'a' && s[0] <= 'z'){
        return true;
    }else{
        for(int i = 0; i < s.size() - 1; i+=2){
            if(s[i] >= 'a' && s[i] <= 'z' && s[i+1] >= 'A' && s[i+1] <= 'Z'){
                result = true;
            }else{
                result = false;
                break;
            }
        }
    }
    return result;
}

int main()
{
    string s;
    cin >> s;
    bool is_fun = isFunny(s);
    
    if(is_fun == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}