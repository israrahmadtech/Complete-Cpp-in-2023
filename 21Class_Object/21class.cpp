#include<iostream>
#include<conio.h>
using namespace std;

// class classname{
//     public:
//     void funName(){
//         cout<<"This is function in class";
//     }
// };
// int main(){
//     clrscr();
//     classname obj;
//     obj.funName();
//     getch();
// }
// class A{
//     public:
//     void show(){
//         cout<<"This is function in class";
//     }
// };
// void main(){
//     clrscr();
//     A obj;
//     obj.show();
//     getch();
// }

class Employee{
    private:
    int a , b, c;
    public:
    int d, e;
    void setData(int a1, int b1, int c1);   // Just declaration(available below)
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
//  class(Employee) have(::) function(setData()) 
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee israr;
    israr.setData(1,2,3);
    israr.getData();
    // israr.a=32;      // throw an error
    israr.d=4;
    israr.e=5;
    israr.getData();
    return 0;
}