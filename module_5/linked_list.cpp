#include<bits/stdc++.h>
using namespace std;
    struct node
    {
        int data;
        node* next;
    };
    struct node* head = NULL;
    void insertFront(int x){
        node* temp = new node();
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    // void insertBack(int x){
    //     node* temp = new node();
    //     node* temp2 = new node();
    //     temp->data = x;
    //     if(head == NULL){
    //         temp->next = head;
    //         head = temp;
    //         return;
    //     }
    //     temp2 = head;
    //     while(1){
    //         if(temp2->next == NULL){
    //             temp2->next = temp;
    //             break;
    //         }else{
    //             temp2 = temp2->next;
    //         }
    //     }

    //     temp->next = NULL;
        
    // }
    // insert a node in nth position..................
    void insertIn(int x, int position){
        node* temp = new node();
        temp->data = x;
        temp->next = head;
        node* temp2 = head;
        for(int i = 0; i < position-2; i++){
            temp2 = temp2->next;
        }
        temp->next = temp2->next;
        temp2->next = temp;

    }
    void print(){
        node* temp = head;
        while(temp != NULL){
            cout << head->data <<endl;
            head = head->next;
        }
    }
int main()
{
    // struct node* head = NULL;
    //head = NULL;
    int n = 5;
    // cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Insert the number: " ;
        cin >> num;
        insertFront(num);
    }
    //print();
    insertIn(5,1);
    insertIn(23,3);
    print();
    


    // node* A; //creating head or empty node
    // A = NULL; // assigning null to head

    // node* temp = new node(); // temporary node creation and memory allocation

    // temp ->data = 2; // dereferencing
    // temp->next = NULL; // pointing to null

    // A = temp; // A pointing new node insted of null;

    // temp = new node();
    // temp ->data = 4;
    // temp->next = NULL;

    // node* temp1 = A;
    // while(temp1->next != NULL){
    //     temp1 = temp1->next;
    // }
    // temp1->next = temp;
    

    
    return 0;
}