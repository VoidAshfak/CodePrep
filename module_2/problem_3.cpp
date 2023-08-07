/*

    https://www.hackerrank.com/challenges/array-left-rotation/problem


*/

vector<int> rotateLeft(int d, vector<int> arr) {
    
    vector<int> temp_arr;
    
    int l = arr.size();
    
    for (int i = d; i < l; i++) {
        temp_arr.push_back(arr[i]);
    }
    for (int i = 0; i < d; i++) {
        temp_arr.push_back(arr[i]);
    }
    // for (int i = 0; i < l; i++) {
    //     arr[i];
    // }
    
    return temp_arr;

}