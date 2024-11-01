/*
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=5;i++){
        cout<<i<<" ";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,i;
    cin>>a;
    for(i=1;i<=a;i++){
        cout<<i<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int i,a,sum=0;
    cin>>a;
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    cout<<"Sum = "<<sum<<endl;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int a,d;
    cin>>a;
    int sum = 0;
    while (a>0){
        d=a%10;
        a=a/10;
        sum = sum+d;
    }
    cout<<"Sum of Digits: "<<sum<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,d;
    cin>>a;
    int rev = 0;
    while (a>0){
        d=a%10;
        a=a/10;
        rev = rev*10+d;
    }
    cout<<"Reverse of Digits: "<<rev<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,d,c,rev;
    cin>>a;
    c=a;
    rev = 0;
    while (a>0){
        d=a%10;
        a=a/10;
        rev = rev*10+d;
    }
    if(c==rev){
        cout<<"Palindrome number"<<endl;
    }
    else{
        cout<<"Not a Palindrome number"<<endl;
    }
    return 0;
}
*/
/* 
#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"Enter number: ";
        cin>>n;
        if (n%10==0){
            break;
        }
        else{
            cout<<"Your number is: "<<n<<endl;
        }
    }
    while(true);
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,i,c=0;
    cout<<"Enter number: ";
    cin>>a;
    for(i=1;i<=a;i++){
        if(a%i==0){
            c++;
        }
    }
    if(c==2){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"Enter number: ";
    cin>>a;
    if (a==1){
        cout<<"Not Prime Number"<<endl;
    }
    for(i=2;i<=a-1;i++){
        if(a%i==0){
            cout<<"Not Prime Number"<<endl;
            break;
        }
        else{
        cout<<"Prime Number"<<endl;
        break;
        }
    }
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,i;
    cout<<"Enter number: ";
    cin>>a;
    if (a==1){
        cout<<"Not Prime Number"<<endl;
    }
    for(i=2;i<sqrt(a);i++){
        if(a%i==0){
            cout<<"Not Prime Number"<<endl;
            break;
        }
        else{
        cout<<"Prime Number"<<endl;
        break;
        }
    }
}
*/
/* 
#include<iostream>
using namespace std;
int main(){
    int a,i,p=1;
    cout<<"Enter number: ";
    cin>>a;
    for(i=1;i<=a;i++){
        p=p*i;
    }
cout<<"Factorial is: "<<p<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,i,p;
    cout<<"Enter number: ";
    cin>>a;
    for(i=1;i<11;i++){
        p=a*i;
        cout<<a<<"*"<<i<<"="<<p<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,i,l,s=0,c;
    cout<<"Enter number: ";
    cin>>a;
    c=a;
    while(a>0){
        l=a%10;
        s+=l*l*l;
        a=a/10;
    }
    if(c==s){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<" Not an Armstrong Number"<<endl;
    }
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cin >> a; 
    int counter = 0;
    int x = 2;
    while (counter < a) { 
        bool is_Prime = true; 
        if (x <= 1) {
            is_Prime = false;
        } else {
            for (int i = 2; i <= sqrt(x); i++) {
                if (x % i == 0) {
                    is_Prime = false;
                    break;
                }
            }
        }
        if (is_Prime) {
            cout << x << " ";
            counter++;
        }
        x++;
    }
    return 0;
}
*/
/* 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cout << "Enter Number: ";
    cin >> a;
    int count = 0;
    int x = 2;
    while(count < a){
        bool is_Prime = true;
        for(int i = 2; i <= sqrt(x); i++){
            if (x % i == 0){
                is_Prime = false;
                break;
            }
        }
        if(is_Prime){
            cout << x << endl;
            count++;
        }
        x++;
    }   
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,i;
    a=0;
    b=1;
    cout<<"Enter number: ";
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(i=0;i<n;i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
}
*/
