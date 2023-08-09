#include<bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;
    vector<int> nums;
    bool is_present = false;

    int target;
    cin >> target;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }



    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++){
        if(map.find(target - nums[i]) == map.end()){
            map[nums[i]] = i;
        }else{
            is_present = true;
        }
    }

    if(is_present){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

