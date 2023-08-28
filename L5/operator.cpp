#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
  
    cout<< "a&b:" << (a&b) << endl;
    cout<< "a|b:" << (a|b) << endl;
    cout<< "~a:" << ~a << endl;
    cout<< "a^b:" << (a^b) << endl;


    //Left shift operatorr
    cout<<(17<<2)<<endl;
    cout<<(18<<2)<<endl;  

    //Right Shift operator
    cout<<(17>>2)<<endl;
    cout<<(18>>2)<<endl;

    //Increment and Decrement Operator
    int i=5;
    cout<< ++i << endl;
    cout<< --i << endl;
    cout<< i++ << endl;
    cout<< i-- << endl;

}