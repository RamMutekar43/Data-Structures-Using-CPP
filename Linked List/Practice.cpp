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

void deleteHead(Node* &head){
    Node* temp = head;
    head=head->next;
    free(temp);
}

void deleteTail(Node* &head){
    Node* temp = head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}

void deleteAtKposition(Node* &head, int idx){
    if(idx==0){
        deleteHead(head);
        return;
    }

    int count=0;
    Node* temp = head;
    while(count!=idx-1){
        temp=temp->next;
        count++;
    }
    Node* n = 
    temp->next=temp->next->next;

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
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    deleteAtKposition(head,2);
    display(head);

    return 0;
}