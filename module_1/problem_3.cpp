//    https://www.interviewbit.com/problems/perfect-peak-of-array/



int Solution::perfectPeak(vector<int> &A) {

    int n = A.size();
    
    for(int i = 1; i < n-1; i++){
        bool flag = true;
        for(int j = 0; j < i; j++){
            if(A[j] >= A[i]){
                flag = false;
                break;
                
            }
        }
        for(int j = i+1; j < n; j++){
            if(A[j] <= A[i]){
                flag = false;
                break;
            }
        }
        
        if(flag){
            return 1;
        }
    }
    
    return 0;

// UNOPTIMIZED





}