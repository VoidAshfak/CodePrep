/*

    https://www.hackerrank.com/challenges/arrays-ds/problem


*/

vector<int> reverseArray(vector<int> a) {
    
    int start = 0;
    int end = a.size()-1;
    
    while (start < end) {
        int temp = a[end];
        a[end] = a[start];
        a[start] = temp;
        
        start++;
        end--;
    }
    
    return a;

}