#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    void insertAtbeg(Node* &head,int value){
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=head;
        head=newNode;
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
    N1.insertAtbeg(head,10);
    N1.insertAtbeg(head,20);
    N1.insertAtbeg(head,30);
    N1.display(head);
    
    
}
/* output
data=30
next=0x24fd72d0
data=20
next=0x24fd72b0
data=10
next=0*/
