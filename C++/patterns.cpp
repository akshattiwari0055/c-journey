/*
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
*/
//Star Pattern
/*
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/
//Inverted Star Pattern
/*
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/
//Half Pyramid Pattern
/*
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout <<endl;
    }
}
*/
//Character Pyramid
/*
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=4;
    char ch='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout <<endl;
    }
}
*/
//Hollow Rectangle
/*
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=4;
    for (i=1;i<=n;i++){
        cout<<"*";
        for(j=1;j<=n-1;j++){
            if(i==1|| i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;
    }
}
*/
//Inverted and rotated half pyramid
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i,j;
    for(i=1;i<=n;i++){
        //spaces
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
//Floyd's Triangle
/*
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int num = 1;
    int n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
*/
//Diamond Pattern
/* 
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=3;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
        for(i=n;i>=1;i--){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
}
}
*/
//Butterfly Pattern
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=(2*(n-i));j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=(2*(n-i));j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int p=0;
    int n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
//Palindrome Pyramid
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
        for(j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
*/