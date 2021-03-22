#include<iostream>           //header file
using namespace std;
int main()
{
    int a=8, b=2;
    cout<<"oprators in c++"<<endl<<"following type of oprator in c++ :"<<endl<<"1_Arithmetic oprators"<<endl;
    //*****************"1_Arithmetic Oprators"*******************

    cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a ++ is "<<a++<<endl;
    cout<<"the value of a --  is "<<a--<<endl;
    cout<<"the value of ++ a   is "<<++a<<endl;
    cout<<"the value of --a  is "<<--a<<endl;
    cout<<endl;
    //********************"2_Assigment Oprator"*********************

    cout<<"2_Assigment oprators\n";
      cout<<endl;
    // use to assign value to variables
    // like int a=3;
    // char c='p';
    //*********************"Comparison Oprator"*********************

    cout<<"3_Comparison oprators\n";
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<=b is"<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<endl;

    //************************"Logical Oprator"****************************

    cout<<"4_logical oprators :\n";
    cout<<"The value of this logical and oprator  ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or oprator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not oprator (!(a==b)) is "<<(!(a==b))<<endl;
  



    return 0;
}
