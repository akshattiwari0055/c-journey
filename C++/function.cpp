/*
#include<iostream>
using namespace std;
void sayHello(){
    cout<<"Hello\n";
}
void assistant(){
    sayHello();
    cout<<"Work Done!";
}
int main(){
    //sayHello();
    assistant();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int product(int a, int b){
    int product = a * b;
    return product;
}
int main(){
    int p = product(2, 5);
    cout << "product = " << p << endl; 
}
*/
/*
#include<iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}
    int main(){
        cout<<isEven(1)<<endl;
    }
*/
/*
#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
return fact;
}
int main(){
    //factorial(1);
    //factorial(2);
    //factorial(3);
    factorial(4);
    factorial(5);
}
*/
/*
#include<iostream>
using namespace std;
bool prime(int n){
    if(n<=1){
        return false;
    }else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    cout<<prime(7)<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f*=i;
    }
    return f;
}
int bincoeff(int n,int r){
    int val1=fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);
    int result = val1/(val2*val3);
    return result;
}
int main(){
    cout<<bincoeff(3,2)<<endl;
}
*/
/*
#include<iostream>
using namespace std;
bool is_prime(int n){
    if(n<=1){
        return false;
    }else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
void prime_range(int n){
    for(int i=0;i<=n;i++){
        if(is_prime(i)){
            cout<<i;
        }
    }
}
int main(){
    prime_range(10);
}
*/
/*
#include<iostream>
using namespace std;
bool rev(int n){
    int revnum=0;
    int l;
    int c=n;
    while (n>0){
        l=n%10;
        revnum=revnum*10+l;
        n=n/10;
    }
    if(c==revnum){
        return true;
    }else{
        return false;
    }
}
void palcheck(int(n)){
    if(rev(n)){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
}
int main(){
    palcheck(77177);
}
*/
/*
#include<iostream>
using namespace std;
int digit_sum(int n){
    int s=0;
    while(n>0){
        int d = n%10;
        s+=d;
        n/=10;
    }
    cout<<s<<endl;
}
int main(){
    digit_sum(5643);
}
*/
/*
#include<iostream>
using namespace std;
int parameter(int a,int b){
    int param=(a*a)+(b*b)+2*a*b;
    return param;
}
int main(){
    cout<<parameter(3,4)<<endl;
}
*/
/*
#include<iostream>
using namespace std;
char next_char(char a){
    if(a=='z'){
        return 'a';
    }
    else if(a=='Z'){
        return 'A';
    }
    else{
            char next = char (a+1);
            return next;
        }
    }
int main(){
    cout<<next_char('Z')<<endl;
}
*/