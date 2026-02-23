#include<iostream>
using namespace std;
class SWAP{
    int i;float j;string k;
    public:
    void swap(int a,int b){
        i=a;
        a=b;
        b=i;
        cout<<"after swap"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    void swap(float c,float d){
        j=c;
        c=d;
        d=j;
        cout<<"after swap"<<endl<<"c="<<c<<endl<<"d="<<d<<endl;
    }
    void swap(string e,string f){
        k=e;
        e=f;
        f=k;
        cout<<"after swap"<<endl<<"e="<<e<<endl<<"f="<<f<<endl;
    }
};
int main(){
    SWAP s;
    string e,f;
    cout<<"enter the e:&f:";
    cin>>e>>f;
    s.swap(10,15);
    s.swap(10.5f,11.5f);
    s.swap(e,f);
}
output;
enter the e:&framu sathwik
after swap
a=15
b=10
after swap
c=11.5
d=10.5
after swap
e=sathwik
f=ramu
