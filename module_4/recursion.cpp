#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n <= 0){
        return 1;
    }

    return n * fac(n-1);
    
}


int sum(vector<int> n, int start, int end){
    if(start > end){
        return 0;
    }
    return n[end] + sum(n, start, end-1);
}

int get_max(vector<int> n, int start, int end){
    // int size = n.size();
    if(start >= end){
        return n[start];
    }
    if(n[end] >= get_max(n, start, end - 1)){
        return n[end];
    }
    else return get_max(n, start, end - 1);
    
    
}

bool is_palindrome(string s, int start, int end){
    if(s[start] != s[end]){
        return false;
    }
    if(start >= end){
        return true;
    }
    return is_palindrome(s, start + 1, end - 1);
}

int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    vector<int> num = {2,3,5,66,0,1};

    int result = get_max(num, 0, num.size()-1);

    string str = "masdfdam";
    
    if(is_palindrome(str, 0, str.length() - 1)){
        cout << "YES" << endl;
    }else{
        cout << "NO" <<endl;
    }

    int result = fib(10);
    cout << result << endl;
    return 0;
}