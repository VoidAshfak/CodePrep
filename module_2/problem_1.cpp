/*

    https://leetcode.com/problems/contains-duplicate/
    https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
    https://www.hackerrank.com/challenges/array-left-rotation/problem
    https://www.hackerrank.com/challenges/arrays-ds/problem
    https://www.hackerrank.com/challenges/flipping-bits/problem

    https://leetcode.com/problems/remove-duplicates-from-sorted-array/
    https://leetcode.com/problems/maximum-subarray/
https://leetcode.com/problems/spiral-matrix/
https://leetcode.com/problems/spiral-matrix-ii/

*/

//    https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        
        // for(int i = 0, j = 1; i < nums.size()-1, j < nums.size(); i++, j++){
        //     if(nums[i] == nums[j]){
        //         return true;
        //     }
        // }
        // return false;


        //-----------> solution using map <---------------
        
        unordered_map<int, bool> map;

        for(int i = 0; i < nums.size(); i++){
            if(map[nums[i]] == false){
                map[nums[i]] = true;
            } else{
                return true;
            }
        }
        return false;


    }
};