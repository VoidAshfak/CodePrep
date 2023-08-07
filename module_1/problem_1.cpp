/*


problems link : 
    https://www.interviewbit.com/problems/pick-from-both-sides/
    https://www.interviewbit.com/problems/highest-product/
    https://www.interviewbit.com/problems/perfect-peak-of-array/



*/

//    https://www.interviewbit.com/problems/pick-from-both-sides/



int Solution::solve(vector<int> &A, int B) {
    
    int sum = 0;
    for(int i = 0; i < B; i++){
        sum += A[i];
    }
    
    int max_sum = sum;
    
    int n = size(A);
    
    for(int i = 0; i < B; i++){
        sum = sum - A[B-1-i] + A[n-1-i];
        if(sum > max_sum){
            max_sum = sum;
        }
    }
    
    return max_sum;
    
}