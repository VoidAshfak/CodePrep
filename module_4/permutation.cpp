#include<bits/stdc++.h>
using namespace std;

void print(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int permutation(vector<int> list, vector<bool> used, vector<int> permute){
    if(list.size() == permute.size()){
        print(permute);
    }
    for(int i = 0; i < list.size(); i++){
        if(!used[i]){
            used[i] = true;
            permute.push_back(list[i]);

            //RECURSIVE CAL
            permutation(list, used, permute);

            used[i] = false;
            permute.pop_back();
        }
    }
}

int main()
{  
    vector<int> number = {1,2,3};

    vector<bool> used = {false, false, false};
    vector<int> permute;

    permutation(number, used, permute);

    return 0;
}