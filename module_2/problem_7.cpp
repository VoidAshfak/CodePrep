/*

    https://leetcode.com/problems/maximum-subarray/


*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int max_sum = nums[0];
        int cur_sum = nums[0];
        int i = 0;

        for(int j = 1; j < n; j++){
            cur_sum += nums[j];
            if(cur_sum < nums[j]){
                i = j;
                cur_sum = nums[i];
            }

            max_sum = max(cur_sum, max_sum);
        }

        return max_sum;
        
    }
};