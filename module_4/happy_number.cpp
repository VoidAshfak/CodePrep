#include<bits/stdc++.h>
using namespace std;

unordered_set<int> seen;
bool isHappy(int n) {
    if(n == 1){
        return true;
    }
    if(seen.find(n) != seen.end()){
        return false;
    }
    seen.insert(n);
    int sq_sum = 0;
    while(n != 0){
        int temp = n % 10;
        sq_sum = sq_sum + (temp * temp);
        n = n / 10;
    }
    cout << sq_sum << " ";
    n = sq_sum;
    
    return isHappy(n);

}

int main()
{
    if(isHappy(19)){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FALSE" << endl;
    }

    return 0;
}

