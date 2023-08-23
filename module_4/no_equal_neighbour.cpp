#include <iostream>
#include <string>

using namespace std;

void generateStrings(int N, string current, char lastChar) {
    if (N == 0) {
        cout << current << endl;
        return;
    }

    if (lastChar != 'a') {
        generateStrings(N - 1, current + "a", 'a');
    }
    if (lastChar != 'b') {
        generateStrings(N - 1, current + "b", 'b');
    }
    if (lastChar != 'c') {
        generateStrings(N - 1, current + "c", 'c');
    }
}

int main() {
    int N;
    cin >> N;

    generateStrings(N, "", ' ');

    return 0;
}
