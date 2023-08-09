#include <bits/stdc++.h>
using namespace std;
     
int main() {

    int N;
    cin >> N;
    vector<int> nums;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }


    unordered_map<int, bool> map;

    for(int i = 0; i < nums.size(); i++){
        if(map[nums[i]] == true){
            cout << nums[i] << endl;
            break;           
        } else{
            map[nums[i]] = true;
        }
    }

    return 0;
}