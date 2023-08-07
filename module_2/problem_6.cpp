/*

    https://leetcode.com/problems/remove-duplicates-from-sorted-array/


*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
// SUBIN VAI
        int i = 0;
        
        for(int j = 1; j < n; j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
                
            }
        }
        return i+1;
        
// MYSELF
        // int i = 0;
        // int j = 1;

        // while(j < n){
        //     if(nums[i] != nums[j]){
        //         i++;
        //         nums[i] = nums[j];
        //     }
        //     j++;

        // }
        // return i+1;
        
    }
};