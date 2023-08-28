#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> memory;

int climbStairs(int n){
    if(n == 1 || n == 2){
        return n;
    }

    return climbStairs(n-1) + climbStairs(n-2);
}

int main()
{
    int n;
    cin >> n;
    int res = climbStairs(n);

    cout << res << endl;
    return 0;
}