// https://codemama.io/codetest/participate/ecebd1d1-a28e-412d-a77b-08eab4074404/problems/remove-duplicate


#include <bits/stdc++.h>
using namespace std;


void print(vector<int>& vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return;
}



int main() {
    
    vector<int> nums;
    vector<int> result;

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    result.push_back(nums[0]);
    for(int j = 1; j < N; j++){
        if(nums[j] != nums[j-1]){
            result.push_back(nums[j]);
        }
    }

    print(result);

    return 0;
}