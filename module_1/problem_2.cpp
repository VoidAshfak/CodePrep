//    https://www.interviewbit.com/problems/highest-product/


int Solution::maxp3(vector<int> &A) {
    
    sort(A.begin(),A.end());
    int n = A.size();
    
    int product1 = A[n-1]*A[n-2]*A[n-3];
    int product2 = A[n-1]*A[0]*A[1];
    
    return max(product1,product2);
    
}