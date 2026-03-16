#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    void insertAtend(Node* &head,int value){
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    void display(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<"data="<<temp->data<<endl;
            cout<<"next="<<temp->next<<endl;
            temp=temp->next;
        }
    }
    
};
int main(){
    Node N1;
    Node* head=NULL;
    N1.insertAtend(head,10);
    N1.insertAtend(head,20);
    N1.insertAtend(head,30);
    N1.display(head);
    
    
}
/*output
data=10
next=0x271d32d0
data=20
next=0x271d32f0
data=30
next=0*/
