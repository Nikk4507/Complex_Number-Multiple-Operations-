#include<iostream>
using namespace std;

class Complex{
    int a,a1,C;
    int b,b1;
    public:
    void getData(){
        cout<<"Enter the real number: ";
        cin>>a;
        cout<<"Enter the imaginary number: ";
        cin>>b;
    }
    /* prints the complex number*/
    void PrintNum(){
        cout<<"\nThe number is: "<<a<<" + "<<b<<"i"<<endl;
    }/*get the data and add the real num to real and imaginary num to imaginary*/
    void GetDataBySum(Complex o1,Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        cout<<"The addition of complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }/*get the data and sub the real num to real and imaginary num to imaginary*/

    void GetDataBySub(Complex o1,Complex o2){
        a = o1.a - o2.a;
        b = o1.b - o2.b;
        cout<<"The Subtraction of complex number is: "<<a<<" - "<<b<<"i"<<endl;
    }/*get the data and multiply the real num to real and imaginary num to imaginary*/
     void GetDataByMultiplication(Complex o1,Complex o2){
        a = o1.a * o2.a;
        a1= o1.a * o2.b;
        b = o1.b * o2.b;
        b1 = o1.b * o2.a;
        C = a + b;
        cout<<"The Multiplication of complex number we get: "<<C<<" + "<<(a1+b1)<<"i"<<endl;
    }
};

int main(){
    Complex c1,c2,c3;

    c1.getData();
    c1.PrintNum();

    c2.getData();
    c2.PrintNum();


    c3.GetDataBySum(c1,c2);
    c3.GetDataBySub(c1,c2);
    c3.GetDataByMultiplication(c1,c2);
}
