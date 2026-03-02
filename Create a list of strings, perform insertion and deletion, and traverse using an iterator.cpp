//Create a list of strings, perform insertion and deletion, and traverse using an iterator
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<string>strings;
    strings.push_front("rohith");
    strings.push_back("sathwik");
    strings.push_back("mani");
    strings.push_back("ramu");
    strings.insert(strings.begin(),"aryan");//like vector list doesnot support random access(+1,+2)
    
    list<string>::iterator i;
    
    cout<<"after insertion list of stings are"<<endl;
    for(i=strings.begin();i!=strings.end();i++){
        cout<<*i<<endl;
    }
    strings.remove("mani");
    strings.pop_back();
    cout<<"after remove op list of stings are"<<endl;
    for(i=strings.begin();i!=strings.end();i++){
        cout<<*i<<endl;
    }
    
    
}
the o/p of above code is:
after insertion list of stings are
aryan
rohith
sathwik
mani
ramu
after remove op list of stings are
aryan
rohith
sathwik
