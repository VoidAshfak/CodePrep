#include <bits/stdc++.h>
using namespace std;


void print(vector<int>& vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return;
}


int main() {
    int N, M;
    vector<int> arr_1;
    vector<int> arr_2;
    set<int> result;

    cin >> M >> N;
    

    for(int i = 0; i < M; i++){
        int num;
        cin >> num;
        arr_1.push_back(num);
    }

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        arr_2.push_back(num);
    }

    sort(arr_1.begin(), arr_1.end());
    sort(arr_2.begin(),arr_2.end());

    int i = 0, j = 0;

    while(i < arr_1.size() && j < arr_2.size()){
        if(arr_1[i] == arr_2[j]){
            result.insert(arr_1[i]);
            ++i;
            ++j;
        }
        else if(arr_1[i] < arr_2[j]){
            ++i;
        }
        else{
            ++j;
        }
    }
   
    set<int>::iterator itr;

    for (itr = result.begin(); itr != result.end(); itr++){
        cout << (*itr) << " ";
    }

    return 0;
}