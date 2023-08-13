/*
Complexity analysis

Time Complexity: O(n)
Space Complexity: O(n)

*/

#include<bits/stdc++.h>
using namespace std;

    bool isValid(string s) {
        stack<char> stack_s;

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch == '[' || ch == '{' || ch == '('){
                stack_s.push(ch);
            }
            else
            {
                if(!stack_s.empty()){
                    if((stack_s.top() == '(' && ch == ')') || 
                    (stack_s.top() == '[' && ch == ']') || 
                    (stack_s.top() == '{' && ch == '}')){
                        stack_s.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }


        if(stack_s.empty())
            return true;
        else
            return false;
    }


int main()
{

    string s;
    cin >> s;
    if(isValid(s)){    
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }


    return 0;
}