#include<iostream>
using namespace std;
class sum{
    public:
    void add(int a,int b){
        cout<<"sum of a+b:"<<a+b<<endl;
        
    }
    void add(float c,float d){
        cout<<"sum of c+d:"<<c+d<<endl;
    }
    
};
int main(){
    sum s;
    int a,b;
    float c,d;
    cout<<"enter the a:";
    cin>>a;
    cout<<"enter the b:";
    cin>>b;
    cout<<"enter the c value:";
    cin>>c;
    cout<<"enter the d value:";
    cin>>d;
    
    s.add(a,b);
    s.add(c,d);
}
output:
enter the a:10 
enter the b:15
enter the c value:10.5
enter the d value:11.5
sum of a+b:25
sum of c+d:22
