#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s, int left, int right) {
    if (left >= right) {
        return true;
    }

    if (s[left] != s[right]) {
        return false;
    }

    is_palindrome(s, left + 1, right - 1);
}


int main() {
    string s;
    cin >> s;

    if (is_palindrome(s, 0, s.length() - 1)) {
        cout << "true" << endl;
    } else {
        cout << "false." << endl;
    }
    return 0;
}

/*
*************** Complexity Discussion **************

n = s.length()

Time Complexity : O(n)
Space Complexity : O(n)

*/