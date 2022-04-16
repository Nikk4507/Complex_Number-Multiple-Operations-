#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
    void getData(){
        cout<<"Enter the real number: ";
        cin>>a;
        cout<<"Enter the imaginary number: ";
        cin>>b;
    }
    void PrintNum(){
        cout<<"\nThe number is: "<<a<<" + "<<b<<"i"<<endl;
    }
    void GetDataBySum(Complex o1,Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        cout<<"The addition of complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }

    void GetDataBySub(Complex o1,Complex o2){
        a = o1.a - o2.a;
        b = o1.b - o2.b;
        cout<<"The Subtraction of complex number is: "<<a<<" - "<<b<<"i"<<endl;
    }
     void GetDataByMultiplication(Complex o1,Complex o2){
        a = o1.a * o2.a;
        b = o1.b * o2.b;
        cout<<"The Subtraction of complex number is: "<<a<<" * "<<b<<"i"<<endl;
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
