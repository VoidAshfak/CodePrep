/*

    https://www.hackerrank.com/challenges/flipping-bits/problem

*/


long flippingBits(long n) {
    
    vector<int> binary;
    int bit = 32;
    
    while(bit > 0){
        binary.push_back(n%2);
        n = n/2;
        bit--;
    }
    for (int i = 0; i < 32; i++) {
        if(binary[i] == 0){
            binary[i] = 1;
        }
        else {
            binary[i] = 0;
        }
    }
    unsigned long result = 0;
    for (int i = 0; i < 32; i++) {
        result += binary[i] * pow(2,i);
    }
    
    return result;

}