#include <iostream>
#include <vector>
using namespace std;

int countArrays(int S) {
    vector<int> dp(S + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= S; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i] += dp[i - j];
        }
    }

    return dp[S];
}

int main() {
    int S;
    cin >> S;

    int totalArrays = countArrays(S);

    cout << totalArrays << endl;

    return 0;
}

