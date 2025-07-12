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

class LinkedList{
    public: 
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int val){
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

    void display(){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    }

};

Node* reverseLL(Node* &head){
    Node* prev=NULL;
    Node* curr = head;
    Node* newNxt ;

    while(curr!=NULL){
        newNxt = curr->next;
        curr->next=prev;
        prev=curr;
        curr=newNxt;
    }
    head = prev;
    return head;
}


int main(){
    LinkedList l;
    l.insertAtTail(9);
    l.insertAtTail(8);
    l.insertAtTail(7);
    l.insertAtTail(6);
    l.insertAtTail(5);
    l.insertAtTail(4);
    l.insertAtTail(3);
    l.insertAtTail(2);
    l.insertAtTail(1);
    l.display();
    reverseLL(l.head);
    l.display();

    return 0;
}