/*

#include <bits/stdc++.h>
using namespace std;
     
int main() {
    
    string s;
    cin >> s;

    int Q;
    cin >> Q;

    int rev = 0;
    for(int i = 0; i < Q; i++){
        int op;
        cin >> op;
        if(op == 1){
            rev++;
            //reverse(s.begin(), s.end());
        }
        if(op == 2){
            int type;
            char ch;
            cin >> type >> ch;
            if(rev % 2 == 0){
                if(type == 1){
                    s = ch + s;
                }
                if(type == 2){
                    s = s + ch;
                }
            }
            else{
                if(type == 1){
                    s = s + ch;
                }
                if(type == 2){
                    s = ch + s;
                }
            }
        }
    }

    if(rev % 2 == 0){
        cout << s << endl;
    }else{
        reverse(s.begin(), s.end());
        cout << s << endl;
    }


    return 0;
}

*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    deque<char> dq;

    for (char c : s) {
        dq.push_back(c);
    }

    bool reversed = false;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            reversed = !reversed; // Toggle the reversed flag
        } else {
            int x;
            char c;
            cin >> x >> c;

            if ((x == 1 && !reversed) || (x == 2 && reversed)) {
                dq.push_front(c);
            } else {
                dq.push_back(c);
            }
        }
    }

    if (reversed) {
        reverse(dq.begin(), dq.end());
    }

    for (char c : dq) {
        cout << c;
    }
    cout << endl;

    return 0;
}

