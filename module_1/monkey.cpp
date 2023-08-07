#include<iostream>
using namespace std;
    
void solve(){
    double height = 0;
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        if(i%2 != 0){
            height += 3;
        }
        else{
            height -= 1.2;
        }
    }

    cout << "Height : " << height << endl;

}
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--){
    
        solve();
    
    }
    return 0;
}