#include <bits/stdc++.h>
using namespace std;
     
int main() {


    vector<int> nums;
    int N,k;
    cin >> N >> k;
    
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    if(k == 0){
        cout << nums[N-1] << " ";
        for(int i = 0; i < N-1; i++){
            cout << nums[i] << " ";
        }

    }
    if(k == 1){
        for(int i = 1; i < N; i++){
            cout << nums[i] << " ";
        }
        cout << nums[0];

    }

    return 0;
}

/*

1 2 3 4
4 1 2 3

*/