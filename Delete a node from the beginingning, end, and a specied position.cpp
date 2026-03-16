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
    void deleteAtbeg(Node* &head){
        if(head==NULL){
            cout<<"list is empty";
        }
        else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    void deleteAtend(Node* &head){
        if(head==NULL){
            cout<<"list is empty";
        }
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;}
            delete temp->next;
            temp->next=NULL;
        
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
    N1.deleteAtbeg(head);
    N1.deleteAtend(head);
    N1.display(head);
    
    
}
/*output
data=20
next=0
*/
