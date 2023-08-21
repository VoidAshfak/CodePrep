#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n <= 0){
        return 1;
    }

    return n * fac(n-1);
    
}

int fib(int n){
    // base condition

    return fib(n-1) + fib(n-2)
}

int main()
{

    int val = fib(9);
    cout << val << endl;
    return 0;
}