#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
    Node(int d, Node* n = NULL){
        data=d;
        next=n;
        
    }
};

Node* ReverseLinkedList(Node* head){
    
    Node* temp = head;
    
    Node* pre = NULL;
    
    while(temp!=NULL){
        
        Node* front = temp->next;
        
        temp->next = pre;
        
        pre = temp;
        
        temp = front;
    }
    
    return pre;
    
    
};

void display(Node* head){
    Node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
};


int main(){
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    display(head);
    
    head = ReverseLinkedList(head);
    
    display(head);
    
    
    return 0;
}
