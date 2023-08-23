#include <bits/stdc++.h>
using namespace std;

unordered_map<long long int, long long int> memo;

long long int rec_func(long long int n) {
    if (n == 0) {
        return 1;
    }

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    long long int result = rec_func(n / 2) + rec_func(n / 3);
    memo[n] = result;

    return result;
}

int main() {
    long long int n;
    cin >> n;
    long long int result = rec_func(n);

    cout << result << endl;
    return 0;
}
