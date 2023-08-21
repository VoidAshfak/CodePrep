#include <bits/stdc++.h>
using namespace std;

int prod(int a, int b) {

    if (b == 0) {
        return 0;
    }

    return a + prod(a, b - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    
    int result = prod(a, b);
    cout << result << endl;

    return 0;
}


/*

Time Complexity: O(b)
Space Complexity: O(b)


*/