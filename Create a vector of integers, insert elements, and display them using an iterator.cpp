//Create a vector of integers, insert elements, and display them using an iterator
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int>integers;
    integers.push_back(10);
    integers.push_back(20);
    integers.push_back(30);
    integers.push_back(40);
    
    vector<int>::iterator x;
    for(x=integers.begin();x!=integers.end();x++){
        cout<<*x<<endl;
    }
    
}
the output of above code is:
10
20
30
40
