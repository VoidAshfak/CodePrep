#include <bits/stdc++.h>
using namespace std;
     
int main() {
    
    int N;
    cin >> N;
    vector<unsigned int> nums;
    for(int i = 0; i < N; i++){
        unsigned int num;
        cin >> num;
        nums.push_back(num);
    }

    int ans = N+1;
    for(int i = 0; i < N; i++){
        int index = nums[i];
        if(index < N){
            nums[index] = nums[index]*(-1);
        }
    }
    for(int i=0; i<N; i++){
        if(nums[i] > 0){
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    

}