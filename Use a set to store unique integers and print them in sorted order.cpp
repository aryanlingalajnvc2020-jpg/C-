//Use a set to store unique integers and print them in sorted order
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>integers;
    integers.insert(25);
    integers.insert(15);
    integers.insert(20);
    integers.insert(18);
    set<int>::iterator i;
    cout<<"printing the elements of set"<<endl;
    for(i=integers.begin();i!=integers.end();i++){
        cout<<*i<<endl;
    }
    
}
the o/p of above code is:
printing the elements of set
15
18
20
25
