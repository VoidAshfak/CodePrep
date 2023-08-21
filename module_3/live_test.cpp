#include <bits/stdc++.h>
using namespace std;

string shuffle_string(string s, vector<int>& indices) {
    string ss = s;

    for (int i = 0; i < indices.size(); ++i) {
        ss[indices[i]] = s[i];
    }

    return ss;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> indices(n);
    for (int i = 0; i < n; ++i) {
        cin >> indices[i];
    }

    string ss = shuffle_string(s, indices);
    cout << ss << endl;

    return 0;
}
