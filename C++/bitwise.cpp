/*
#include<iostream>
using namespace std;
int main(){
    //BitWise AND[&]
    int x = 3 & 5; //[1]
    cout<<x<<endl;
    //BitWise OR[|]
    int y = 3 | 5; //[7]
    cout<<y<<endl;
    //BitWise XOR[^]
    int z = 3 ^ 5; //[6]
    cout<<z<<endl;
}
*/
//Check Even ot odd using bitwise
/*
#include<iostream>
using namespace std;
void isEvenOrOdd(int num){
    if(!(num & 1)){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
}
int main(){
    isEvenOrOdd(12);
    isEvenOrOdd(11);
}
*/
//Get ith Bit
/*
#include<iostream>
using namespace std;
int getIthbit(int num,int i){
    int bitmask = 1<<i;
    if(!(num & bitmask)){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    cout<<getIthbit(7,2)<<endl;
    cout<<getIthbit(7,5)<<endl;
}
*/
//Get ith Bit
/*
#include<iostream>
using namespace std;
int getIthbit(int num, int i){
    int bitmask = 1<<i;
        return (num | bitmask);
}
int main(){
    cout<<getIthbit(6,3)<<endl;
}
*/
//clear ith bit
/*
#include<iostream>
using namespace std;
int clearIthbit(int num, int i){
    int bitmask = ~(1<<i);
        return (num & bitmask);
}
int main(){
    cout<<clearIthbit(6,1)<<endl;
}
*/
//Check Power of 2
/*
#include<iostream>
using namespace std;
bool isPowerof2(int num){
    if(!(num & (num-1))){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout<<isPowerof2(16)<<endl;
}
*/
//Update ith bit
/*
#include<iostream>
using namespace std;
void updateIthbit(int num , int i , int val){
    num = num & ~(1<<i);
    num  = num | (val<<i);
    cout << num << endl;
}
int main(){
    updateIthbit(7 , 3 , 1);
}
*/
//Clear Last ith Bit
/*
#include<iostream>
using namespace std;
void clearIthbits(int num , int i){
    int bitmask = (~0)<<i;
    num = num & bit=mask;
    cout<<num<<endl;
}
int main(){
    clearIthbits(15 , 2);
}
*/
//Count Set Digits
/*
#include<iostream>
using namespace std;
    void countsetdigits(int num){
        int count = 0;
        while (num>0){
            int lastdig = num & 1;
            count += lastdig;
            num = num >> 1;
        }
        cout<<count<<endl;
    }
int main(){
    countsetdigits(10);
}
*/
//Fast Exponentiation
/*
#include<iostream>
using namespace std;
void fastexpo(int num, int pow){
    int ans = 1;
    while(pow>0){
        int lastBit = pow & 1;
        if(lastBit==1){
            ans = ans * num;
        }
        num = num * num;
        pow = pow >> 1;
    }
    cout<<ans<<endl;
}
int main(){
    fastexpo(3,5);
}
*/