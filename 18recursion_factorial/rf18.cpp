#include<iostream>
using namespace std;
/*
Recursive function: A function that calls itself.
SYNTAX:
    return-type funName(parameter){
        if(condition){
            code;
        }
        else{
            funName(parameter);
        }
    }
*/
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

// Factorial(!\):
// Steps for calculation of factorial(!)
// factorial(4) = 4 * factorial(3)
// factorial(4) = 4 * 3 * factorial(2)
// factorial(4) = 4 * 3 * 2 * factorial(1)
// factorial(4) = 4 * 3 * 2 * 1
// factorial(4) = 24
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n - 1);
}


// Fibonacci Sequence: (1,1,2,3,5,8,13...)
int fib(int n){
if(n<2){
    return 1;
}
    return fib(n-2) + fib(n-1);
}
int main(){
//  0! = 1.
//  1! = 1.
//  6! = 6 * 5 * 4 * 3 * 2 * 1.
//  n! = n*(n-1)*(n-2)*(n-3)....
//  n! = n*(n-1)!
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}