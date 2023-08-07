/*
---------------------->>  Complexity analysis  <<----------------------------

 Time complexity : O(n)

 Space complexity : O(1)

*/


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// void print(vector<int>& vec){
//     for(int i = 0; i < vec.size(); i++){
//         cout << vec[i] << " ";
//     }
//     cout << endl;

//     return;
// }

int main()
{

    int N;
    cin >> N;

    vector<int> stock_price;

    for(int i = 0; i< N; i++){
        int input;
        cin >> input;
        stock_price.push_back(input);
    }

    int profit = 0;
    int min_price = stock_price[0];

    //int j = 0;

    for(int i = 1; i < N; i++){
        if(min_price > stock_price[i]){
            //j = i;
            min_price = stock_price[i];
        }
        else{
            profit = max(profit, (stock_price[i]-min_price));
        }
    }

    cout << profit << endl;

    return 0;
}
