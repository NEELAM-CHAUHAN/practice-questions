#include<iostream>
using namespace std;

int main() {
    int marks[4] = {23,45,35,43};
    int mathmarks[4];
    mathmarks[0] = 3245;
    mathmarks[1] = 3244;
    mathmarks[2] = 3245;
    mathmarks[3] = 3247;
    cout<<"These are maths marks : "<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    mathmarks [2] = 5435;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    for (int i =0;i<4;i++)
    {
        cout<<"The values of marks "<<i<<marks[i]<<endl;
    }
    int* p =marks;
    cout<<*(p++);
    cout<<*p;
    cout<< "The valuue of *p "<<*p <<endl;
    cout<< "The valuue of *(p+1) "<<*(p+1)<<endl;
    cout<< "The valuue of *(p+2) "<<*(p+2)<<endl;
    cout<< "The valuue of *(p+3) "<<*(p+3)<<endl;


    return 0;
}