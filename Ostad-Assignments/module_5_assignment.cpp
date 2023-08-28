    #include<bits/stdc++.h>
    using namespace std;
    struct node
    {
        int data;
        node* next;
    };
    struct node* head = NULL;

    node* reverseBetween(node* head, int left, int right) {
        if(!head)   return NULL;
        if(!head->next) return head;

        node *dummy = new node();
        dummy->next = head;
        node *prev = dummy;

        for(int i = 0; i < left - 1; i++)    prev = prev->next;
        node *curr = prev->next;

        for(int i = 0; i < right - left; i++)
        {
            node *forw = curr->next;
            curr->next = forw->next;
            forw->next = prev->next;
            prev->next = forw;
        }
        return dummy->next;     
        
    }
    void insertBack(int x){
        node* temp = new node();
        node* temp2 = new node();
        temp->data = x;
        if(head == NULL){
            temp->next = head;
            head = temp;
            return;
        }
        temp2 = head;
        while(1){
            if(temp2->next == NULL){
                temp2->next = temp;
                break;
            }else{
                temp2 = temp2->next;
            }
        }

        temp->next = NULL;
        
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
        int n, left, right;
        cin >> n >> left >> right;
        for (int i = 0; i < n; i++)
        {
            int num;
            cout << "Insert the number: " ;
            cin >> num;
            insertBack(num);
        }
        reverseBetween(head, left, right);
        
        print();

        return 0;
    }
    
/*

Time Complexity: O(right - left)
Space Complexity: O(1)

*/

