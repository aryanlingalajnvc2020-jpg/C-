//Use a map to store StudentID -> Name pairs and display all elements
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,string>students;
    students.insert({'a',"ramu"});
    students['b']="rohith";
    students.insert({'c',"sathwik"});
    map<char,string>::iterator i;
    cout<<"printing the key value pairs of a map"<<endl;
    for(i=students.begin();i!=students.end();i++){
        cout<<i->first<<":"<<i->second<<endl;
    }
    
    
}
the o/p of above code is:
printing the key value pairs of a map
a:ramu
b:rohith
c:sathwik
