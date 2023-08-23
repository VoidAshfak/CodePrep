#include <iostream>
#include <stack>
using namespace std;

void printStackReverse(stack<int>& s) {
    if (s.empty()) {
        return;
    }

    int topElement = s.top();
    s.pop();
    cout << topElement << " ";
    printStackReverse(s);



}

int main() {
    stack<int> s;

    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        s.push(num);
    }

    printStackReverse(s);

    return 0;
}
