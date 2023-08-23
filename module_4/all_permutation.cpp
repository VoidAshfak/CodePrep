#include <iostream>
#include <string>
#include <set>
using namespace std;

void generatePermutations(set<string>& permutations, string s, int index) {
    if (index == s.length()) {
        permutations.insert(s);
        return;
    }

    for (int i = index; i < s.length(); ++i) {
        swap(s[index], s[i]);
        generatePermutations(permutations, s, index + 1);
        swap(s[index], s[i]); // Backtrack
    }
}

int main() {
    string S;
    cin >> S;

    set<string> permutations;

    generatePermutations(permutations, S, 0);

    for (const string& perm : permutations)
        cout << perm << endl;

    return 0;
}
