#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"enter student details"<<endl;
    }
    char sname[20],sec;
    int rollno,marks;
    void details(){
        cout<<"enter the sname:";
        cin>>sname;
        cout<<"enter the marks";
        cin>>marks;
        cout<<"enter the rolno:";
        cin>>rollno;
        cout<<"enter the section:";
        cin>>sec;
    }
    void display(){
        cout<<"student details are:"<<endl;
        cout<<"student name:"<<sname<<endl;
        cout<<"student rollno:"<<rollno<<endl;
        cout<<"student marks:"<<marks<<endl;
        cout<<"student section:"<<sec<<endl;
        
        
    }
    ~student(){
        cout<<"details are entered and displayed sucessfully";
    }
    
    
};
int main(){
    student s1;
    s1.details();
    s1.display();
}
/*OUTPUT:
enter student details
enter the sname:ARYAN
enter the marks30
enter the rolno:12
enter the section:C
student details are:
student name:ARYAN
student rollno:12
student marks:30
student section:C
details are entered and displayed sucessfully
*/
