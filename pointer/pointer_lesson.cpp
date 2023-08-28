#include<bits/stdc++.h>
using namespace std;

// void swap(int *ptr1, int *ptr2){

//     int temp;
//     temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;

// }

// void swap2(int x, int y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

int res;
int func(int *ptr){
    for(int i=0; i<5; i++){
        *(ptr+i) = *(ptr+i) + 5;
    }
}

int square(int x){
    return x*x;
}

int squareOfSum(int x, int y){
    return (square(x) + square(y));
}

int main()
{

    // pointers and dynamic memory.........................................

    int a = 3, b = 4;
    res = squareOfSum(a, b);
    cout << res << endl;
    
    // arrays and function arguments......................................

    // int arr[] = {5, 2, 4, 8, 9};
    // func(arr);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    

    //pointer and array...................................................

    // int a[] = {5, 2, 4, 8, 9};

    // for(int i=0; i<5; i++){
    //     printf("%d\n", a+i);
    //     printf("%d\n", &a[i]);
    
    //     printf("%d\n", a[i]);
    //     printf("%d\n", *(a+i));
    // }


    // pointer to pointer...............................................

    // int a = 10;
    // int* p = &a;
    // int** q = &p;
    // int*** r = &q;
    // int**** s = &r;

    // printf("value = %d\n", *s);
    // printf("value = %d\n", r);
    // printf("value = %d\n", **s);
    // printf("value = %d\n", q);
    // printf("value = %d\n", ***s);
    // printf("value = %d\n", p);

    //****s = 23;

    // printf("value = %d\n", ****s);
    //printf("value = %d\n", a);

    // //pointer typecasting and understanding............................
    // int a = 10255;
    // int* intpt = &a;
    // printf("Address %d, Value %d\n",intpt, *intpt);
    // char* chpt = (char*)intpt;
    // printf("Address %d, Value %d\n",chpt, *(chpt+2));
    
    //printf("%d \n", &x);
    //cout << x << " " << &x << endl;
    // int x = 10, y = 20;
    // int *pointer1 = &x;
    // int *pointer2 = &y;
    
    // int array[] = {1,2,3,4,5};
    // int *ptr = array;

    //print array with pointer...........................................
    // for(int i = 0; i < 5; i++){
    //     cout << *ptr << " ";
    //     ptr++;
    // }
    // cout << endl;

    //swapping by a function using pointer................................
    // cout << "Before:" << x << " " << y << endl;
    // swap(&x, &y);
    // cout << "After swap:" << x << " " << y << endl;

    //swapping
    //int temp;
    // temp = *pointer1;
    // *pointer1 = *pointer2;
    // *pointer2 = temp;
    // cout << "After:" << x << " " << y << endl;
    //cout << *pointer << " " << pointer << endl;

    //*pointer = 20;

    // cout << "x = " << x << " " << &pointer << endl;
    // cout << "y = " << x << " " << &pointer << endl;

    return 0;
}