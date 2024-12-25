#include<iostream>
using namespace std;
// ************** FUNCTION THAT CALCULATES FACTORIAL OF NUMBER:
// int factorial(int num){
//     if(num==0){     // check condition (skiped if false)
//         return 1;   // If we not put this condition then zero will multiplied and result becomes 0
//     }
//     else{
//         return num*factorial(num-1);    // 5*4*3*2*1*factorial(num(mean 0)) <-- Here factorial() calls itself again again
//     }
// }
// int main(){
//     int num;  //Declared
//     cout<<"Enter Your Number: ";
//     cin>>num;   // take value of num from user
//     cout<<factorial(num);  // calls function and print it 
//     return 0;
// }

// ************** FUNCTION THAT IDENTIFY THE TERM IN FIBONACCI SEQUENCE ASKED POSITION:
// int fibonacci(int num){
//     if(num<2){
//         return 1;
//     }
//     else{
//         return fibonacci(num-2) + fibonacci(num-1);
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter Number: ";
//     cin>>num;
//     cout<<"The term of Fibonacci Sequence at position "<<num<<" is "<<fibonacci(num);
//     return 0;
// }

// RECURSION FUNCTION TO FIND FICTORIAL:     **********************************
// int fictorial(int num){
//     if(num<2){
//         return 1;
//     }
//     else{
//         return num*fictorial(num-1);
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter number to find factorial: ";
//     cin>>num;
//     cout<<"Fictorial of "<<num<<" is "<<fictorial(num);
//     return 0;
// }

// RECURSION FUNCTION TO FIND TERM IN FABONACCI SEQUENCE:     **********************************
// 1,1,2,3,5,8,13,....
int fib(int num){
    if(num<2){
        return 1;
    }
    return fib(num-2) + fib(num-1);
}
int main(){
    int num;
    cout<<"Enter Position to find term: ";
    cin>>num;
    cout<<"The term at position "<<num<<" is "<<fib(num);
    return 0;
}
