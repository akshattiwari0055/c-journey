#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;   
    char op;
    cout<<"Enter operator: ";
    cin>>op;
    switch(op){
        case '+': cout<<"Sum = "<<a+b<<endl;
        break;
        case '-': cout<<"Difference = "<<a-b<<endl;
        break;
        case '*': cout<<"Product = "<<a*b<<endl;
        break;
        case '/': cout<<"Division= "<<a/b<<endl;
        break;
        default: cout<<"Invalid Operator"<<endl;
    }
}