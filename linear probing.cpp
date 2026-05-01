#include<iostream>
using namespace std;
#define size 7
class hashTable{
    int table[size];
    public:
    hashTable(){
        for(int i=0;i<size;i++){
            table[i]=-1;
        }
    }
    int hashFunction(int key){
        return key%size;
    }
    void insert(int key){
        int index=hashFunction(key);
        if(table[index]==-1){
            table[index]=key;
        }
        else{
            int i=1;
            while(i<size){
                int newindex=(i+index)%size;
                if(table[newindex]==-1){
                    table[newindex]=key;
                    return;
                }
                i++;
            }
            cout<<"hash table is full"<<endl;
        }
    }
    void search(int key){
        int index=hashFunction(key);
        int i=0;
        while(i<size){
            int newindex=(index+i)%size;
            if(table[newindex]==key){
                cout<<"element"<<key<<"found atindex"<<newindex<<endl;
                return;
                
            }
            if(table[newindex]==-1)
                break;
            i++;
        }
        cout<<"element not found\n";
    }
    void display(){
        cout<<"\n hash table\n";
        for(int i=0;i<size;i++){
            cout<<i<<"->";
            if(table[i]==-1)
                cout<<"empty";
            else
                cout<<table[i];
                cout<<endl;
        }   
    }
    void remove(int key){
        int index=hashFunction(key);
        int i=0;
        while(i<size){
            int newindex=(index+i)%size;
            if(table[newindex]==key){
                cout<<"element "<<key<<" found atindex "<<newindex<<endl;
                cout<<table[newindex]<<"deleted\n";
                table[newindex]=-1;
                return;
                
            }
            //if(table[newindex]==-1)
                //break;
            i++;
        }
        
    }
};
int main(){
    hashTable h;
    int n,key;
    cout<<"enter no of elements";
    cin>>n;
    cout<<"enter elements\n";
    for(int i=0;i<n;i++){
        cin>>key;
        h.insert(key);
    }
    h.display();
    cout<<"enter key to delete:";
    cin>>key;
    h.remove(key);
    h.display();
    cout<<"\n enter element to search:";
    cin>>key;
    h.search(key);
}
/* output
enter no of elements7
enter elements
14
21
16
18
17
19
20

 hash table
0->14
1->21
2->16
3->17
4->18
5->19
6->20
enter key to delete:21
element 21 found atindex 1
21deleted

 hash table
0->14
1->empty
2->16
3->17
4->18
5->19
6->20

 enter element to search:21
element not found
*/
