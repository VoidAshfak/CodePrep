// https://codemama.io/codetest/participate/ecebd1d1-a28e-412d-a77b-08eab4074404/problems/max-unsorted-subarray

#include <bits/stdc++.h>
using namespace std;
     
int main() {
    
    vector<int> nums;
    vector<int> sorted_nums;
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        nums.push_back(num);
        sorted_nums.push_back(num);
    }

    sort(sorted_nums.begin(), sorted_nums.end());

    // bool is_started = false;
    int start_index = -1, end_index;

    for(int i = 0; i < N; i++){

        if(nums[i] != sorted_nums[i]){
            start_index = i+1;
            break;
        }
    }

    for(int j = N-1; j >= 0 ; j--){

        if(nums[j] != sorted_nums[j]){
            end_index = j+1;
            break;
        }
    }



    if(start_index == -1){
        cout << start_index << endl;
    }else{
        cout << start_index << " " << end_index << endl;
    }


    return 0;
}