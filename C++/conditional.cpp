/*
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    if(a>b){
        cout<<a<<" is larger than "<<b<<endl;
    }
    else{
        cout<<b<<" is larger than "<<a<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Number: ";
    cin>>a;
    if(a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    float income,tax;
    cout<<"Enter Salary(in Lakhs): ";
    cin>>income;
    if(income<5){
        tax = 0;
    }
    else if (income>=5 && income<10){
        tax = 0.2*income;
    }
    else{
        tax = 0.3*income;
    }
    cout<<"Income Tax(in Lakhs) = "<<tax*100000<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>0){
        cout<<a<<" is positive"<<endl;
    }
    else if(a<0){
        cout<<a<<" is negative"<<endl;
    }
    else{
        cout<<a<<" is zero"<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter year: ";
    cin>>a;
    if(a%400==0){
        cout<<a<<" is a leap year"<<endl;
    }
    else if(a%100==0){
        cout<<a<<" is not a leap year"<<endl;
    }
    else if(a%4==0){
        cout<<a<<" is a leap year"<<endl;
    }
    else{
        cout<<a<<" is not a leap year"<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,p,q,r,b,sum;
    cout<<"Enter a number: ";
    cin>>a;
    b=a;
    p = a%10;
    a=a/10;
    q=a%10;
    a=a/10;
    r=a%10;
    sum=p*p*p+q*q*q+r*r*r;
    if(sum==b){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not a Armstrong number"<<endl;
    }
}
*/
