/*
OOPs --> Classes and Objects
C++ innitially called C with Classes by stroustroup
Class --> Extension of structures(in C)
Structure had limitations
            members are public
            No methods
Classes = Structures + more
Classes can have methodes(functions) and properties(Values)
Classes can make few members as private and public
Classes can declare objects along with the class declaration like:
    class Employee{
        class definition;
    } israr, abuzar;
--> israr.salery = 8000 --> it make no sense if salery is private.
*/
#include<iostream>
#include<string>
using namespace std;
// NESTING OF FUNCTION: You can call a function without putting a Dot(.)
class binary{
    string s;
    public:
    void read(void);
    void chk_bin(void);
};
void binary :: read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
}
void chk_bin(void){
    for(int i=0; i<s.length; i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            
        }
    }
}
int main(){
    return 0;
}