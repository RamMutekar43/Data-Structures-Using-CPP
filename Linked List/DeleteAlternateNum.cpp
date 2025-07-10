#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    Node* newNode  = new Node(val);
    if(head == NULL){
        head = newNode;  
        return;
    }

    Node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void display(Node* head){
    
    while(head!=NULL){
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

void removeAlternate(Node* &head){
    int count =1;
    Node* temp = head;
    while(temp!=NULL){
        if(count%2!=0){
        temp->next=temp->next->next;
        count++;
        }
        else{
            temp=temp->next;
            count++;
        }
    }

    display(head);
}



int main(){
    Node* head=NULL ;
    insertAtTail(head,9);
    insertAtTail(head,8);
    insertAtTail(head,7);
    insertAtTail(head,6);
    insertAtTail(head,5);
    insertAtTail(head,4);
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,1);
    insertAtTail(head,0);
    display(head);
    removeAlternate(head);
    return 0;
}