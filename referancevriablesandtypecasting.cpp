#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"*****************Build in data types*************************";

    cout<<"Enter the valuee of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b is :"<<endl;
    cin>>b;
    cout<<"Enter the value of c is :"<<endl;
    cin>>c;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    float d=34.5F;
    long double e =34.654L;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    cout<<endl;
    cout<<"*****************Literals********************";
    cout<<"The size of d is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"*********************Referance variables********************";
    // float x = 435;
    // float y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    


    // Type Casting
    int x = 34;
    float y =54.6;
    cout<<"The value of x is "<<(float)a;
    cout<<"The value of x is "<<float(a);
    cout<<"The value of y is "<<(int)y;
    cout<<"The value of y is "<<int(y);
    return 0;
}