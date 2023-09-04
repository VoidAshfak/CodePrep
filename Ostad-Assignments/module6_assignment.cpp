#include <iostream>
#include <stack>
#include <string>
using namespace std;
string removeDuplicates(string s) {
    stack<char> st;

    for (char ch : s) {
        if (!st.empty() && st.top() == ch) {
            st.pop(); // Remove the duplicate letter from the stack
        } else {
            st.push(ch); // Push the character onto the stack
        }
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result; // Build the result string in reverse order
        st.pop();
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    string result = removeDuplicates(s);
    cout << result << endl;

    return 0;
}
/*
Time Complexity: O(n)
Space Complexity: O(n)
*/