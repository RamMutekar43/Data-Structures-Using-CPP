#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* newNode  = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode  = new Node(val);
    Node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtKposition(Node* &head, int val, int pos){

    if(pos==0){
        insertAtHead(head,val);
        return;
    }

    Node* newNode  = new Node(val);
    Node* temp = head;
    int count=0;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    
    newNode->next=temp->next;
    temp->next=newNode;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    // Node* n = new Node(1);
    // cout<<n->val<<"  "<<n->next;

    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,4);
    display(head);
    insertAtHead(head,6);
    display(head);
    insertAtHead(head,3);
    display(head);
    insertAtTail(head,0);
    display(head);
    insertAtKposition(head,11,2);
    display(head);

    return 0;
}