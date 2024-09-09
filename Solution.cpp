struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    void deleteNode(struct Node** head, int key) {
        if(*head==NULL) return;
        Node* temp = *head;
        
        if (temp->data == key) {
            Node* last = *head;
            while (last->next!=NULL &&  last->next != *head) {
                last = last->next;
            }
            if (temp == last) {
                *head = NULL; 
                delete temp;
                return;
            }
            last->next = temp->next;
            *head = temp->next;  
            delete temp;  
            return;
        }
        temp=temp->next;
        Node* prev = *head; 
        while(temp!=*head && temp->data != key){
            prev = prev->next;
            temp = temp->next;
        }
        if(temp==*head) return;
        
        prev->next=temp->next;
        delete temp;
    }

    void reverse(struct Node** head_ref) {
        if (*head_ref == NULL || (*head_ref)->next == *head_ref) return;
        
        Node* curr=*head_ref;
        Node* prev=NULL;
        Node* next=NULL;
        Node* head = *head_ref; 
        
        do {
            next = curr->next;   
            curr->next = prev;   
            prev = curr;         
            curr = next;         
        } while (curr != head);
    
        (*head_ref)->next = prev;  
        *head_ref = prev; 
    }
};
