#include<iostream>
using namespace std;
// // ******** FANCTION THAT CALCULATE VOLUME OF CYLENDER:
// int volume(double r, double h){
//     return(3.14*r*r*h);
// }
// // ******** FUNCTION THAT CALCULATE VOLUME OF CUBE:
// int Cube(int c){
//     return (c*c*c);
// }
// // ******** FANCTION THAT CALCULATE VOLUME OF RECTANGLE:
// int volume(int lenght, int bredth, int height){
//     return (lenght*bredth*height);
// }

// int main(){
// // ******** FANCTION THAT CALCULATE VOLUME OF CYLENDER:
//     int r, h;
//     cout<<"Enter Radius: ";
//     cin>>r;
//     cout<<"Enter Height: ";
//     cin>>h;
//     cout<<"Total Volume of Cylender is "<<volume(r, h)<<endl;
// // ******** FANCTION THAT CALCULATE VOLUME OF CUBE:
//     int c;
//     cout<<"Enter Radius: ";
//     cin>>c;
//     cout<<"Total Volume of Cylender is "<<Cube(c)<<endl;

// // ******** FANCTION THAT CALCULATE VOLUME OF RECTANGLE:
//     int lenght; int bredth; int height;
//     cout<<"Enter Lenght: ";
//     cin>>lenght;
//     cout<<"Enter Bredth: ";
//     cin>>bredth;
//     cout<<"Enter Height: ";
//     cin>>height;
//     cout<<"Total Volume of Cylender is "<<volume(lenght, bredth, height);
//     return 0;
// }

// VOLUME OF CYLENDER:      ****************************************
// float cylender(float radius, float height){
//     return (3.14*radius*radius*height);
// }
// int main(){
//     float radius;
//     float height;
//     cout<<"Enter Radius: ";
//     cin>>radius;
//     cout<<"Enter Height: ";
//     cin>>height;
//     cout<<"Volume of Cylender is "<<cylender(radius, height);
//     return 0;
// }

// // VOLUME OF A CUBE:      ****************************************
// double Cube(double cube){
//     return (cube*cube*cube);
// }
// int main(){
//     double cube;
//     cout<<"Enter value: ";
//     cin>>cube;
//     cout<<"Volume of cube is "<<Cube(cube);
//     return 0;
// }

// VOLUME OF RECTANGULAR BOX:      ****************************************
float rect(float l, float b, float h){
    return (l*b*h);
}
int main(){
    float l, b, h;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter Bredth: ";
    cin>>b;
    cout<<"Enter Height: ";
    cin>>h;
    cout<<"Volume of Rectangle is "<<rect(l,b,h);
    return 0;
}