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
    void search(Node* &head,int key){
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            
            if(temp->data==key){
                cout<<"key is found at  "<<count<<endl;
                return;
                
            }
            temp=temp->next;
            count++;
            
        }
    }
    
};
int main(){
    Node N1;
    Node* head=NULL;
    N1.insertAtend(head,10);
    N1.insertAtend(head,20);
    N1.insertAtend(head,30);
    N1.search(head,10);
    
    
    
}
/*output
key is found at  0
*/
