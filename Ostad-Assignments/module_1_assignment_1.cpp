#include<iostream>
using namespace std;
int efficient_sum(int num){
    //the complexity for this function is O() and space complexity is also O(1)

    return (num*(num+1))/2;
}

int sum(int num){
    //the complexity for this function is O(N) and space complexity is O(1)

    int sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i;
    }
    return sum;
}

int main()
{

    //taking input
    int N;
    cin >> N;
    int result1 = efficient_sum(N);
    int result2 = sum(N);

    cout << "Sum of 1 to " << N << " is : " << result1 << endl;
    cout << "Sum of 1 to " << N << " is : " << result2 << endl;

    return 0;
}