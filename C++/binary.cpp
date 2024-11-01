/*
#include<iostream>
using namespace std;
void bintodec(int n){
    int c = n;
    int pow=1;
    int s=0;
    int l;
    while (n>0){
        l=n%10;
        s=s+l*pow;
        n/=10;
        pow=pow*2;
    }
    cout<<s<<endl;
}
int main(){
    bintodec(10010);
}
*/
/*
#include<iostream>
using namespace std;
int dectobin(int n){
    int pow = 1;
    int s=0;
    while(n>0){
        int d = n%2;
        s=s+d*pow;
        n=n/2;
        pow=pow*10;
    }
    return s;
}
int main(){
    cout<<dectobin(2);
}
*/