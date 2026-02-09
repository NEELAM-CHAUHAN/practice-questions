#include<iostream>
using namespace std;

int main() {
    int a =3;
    int *b;
    b=&a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of b is "<<*b<<endl;
    int**c =&b;
     cout<<"The address of b is "<<&b<<endl;
     cout<<"The address of b is "<<c<<endl;
     cout<<"The value address of c is "<<*c<<endl;
     cout<<"The value address value(adress(c)) is "<<**c<<endl;


    return 0;
}