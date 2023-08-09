#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int max_len = 1;
    int curr_max = 1;
    bool have_one = false;

    for(int i = 0; i < N; i++){
        if(nums[i] == 1){
            have_one = true;
        }
        if((nums[i] == nums[i+1]) && nums[i] == 1){
            curr_max++;
        }else{
            max_len = max(max_len,curr_max);
            curr_max = 1;
        }
    }

    if(have_one){
        cout << max_len << endl;
    }else{
        cout << 0 << endl;
    }
    

    return 0;
}