#include<iostream>
using namespace std;
template <typename T>
void swapData(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
    cout<<"after swap"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    
}
int main(){
    int c,d;
    float e,f;
    string g,h;
    cout<<"enter the c and d value:";
    cin>>c>>d;
    cout<<"enter the e&f value:";
    cin>>e>>f;
    cout<<"enter the g,h string values:";
    cin>>g>>h;
    swapData(c,d);
    swapData(e,f);
    swapData(g,h);
    
}
output of above code is:

enter the c and d value:10 15
enter the e&f value:12.5
9.09
enter the g,h string values:abc
cba
after swap
a=15
b=10
after swap
a=9.09
b=12.5
after swap
a=cba
b=abc
