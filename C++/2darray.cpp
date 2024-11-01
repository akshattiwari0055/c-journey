/*
#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int n=3,m=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
*/
//Spiral Matrix
/*
#include<iostream>
using namespace std;
void spiralmatrix(int mat[][4],int n,int m){
    int srow=0;
    int scol=0;
    int erow=n-1;
    int ecol=m-1;
    while(srow<=erow && scol<=ecol){
    //Top
        for(int j=scol;j<=ecol;j++){
            cout<<mat[srow][j]<<" ";
        }
    //Right
        for(int i=srow+1;i<=erow;i++){
            cout<<mat[i][ecol]<<" ";
        }
    //Bottom
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){
                break;
            }
            cout<<mat[erow][j]<<" ";
        }
    //Left
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol){
                break;
            }
            cout<<mat[i][scol]<<" ";
        }
        srow++; scol++;
        erow--; ecol--;
    }
    cout<<endl;
}
int main(){
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};
    spiralmatrix(mat,4,4);
}
*/
//Diagonal matrix (Time Complexity = O(n^2))
/*
#include<iostream>
using namespace std;
void diagonalsum(int mat[][4],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                sum=sum+mat[i][j];
            }
            else if(j==n-i-1){
                sum=sum+mat[i][j];
            }
        }
    }
    cout<<"sum = "<<sum<<endl;
}
int main(){
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};
    diagonalsum(mat,4,4);
}
*/
//Diagonal matrix (Time Complexity = O(n))
/*
#include<iostream>
using namespace std;
void diagonalsum(int mat[][4], int n, int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+mat[i][i];
        if(i!=n-i-1){
            sum=sum+mat[i][n-i-1];
        }
    }
    cout<<"Sum = "<<sum<<endl;
}
int main(){
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};
    diagonalsum(mat,4,4);
}
*/
//Search in sorted matrix
/*
#include<iostream>
using namespace std;
bool search(int mat[][4],int n,int m,int key){
    int i=0 ; 
    int j=m-1;
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"Key Found in Cell ["<<i<<" "<<j<<"]"<<endl;
            return true;
        }else if(key<mat[i][j]){
            //left
            j--;
        }
        else{
            //down
            i++;
        }
    }
    cout<<"Key Not Found"<<endl;
    return false;
}
int main(){
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};
    search(mat,4,4,11); //2rd row 2nd coloumn
}
*/
//Assignment Question
//Q-1
/*
#include<iostream>
using namespace std;
void find(int arr[][3],int n,int m){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==7){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int arr[2][3]={{4,7,8},
                   {8,8,7}};
    find(arr,2,3);
}
*/
//Q-2
/*
#include<iostream>
using namespace std;
void sum(int arr[][3],int m,int n){
    int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[1][j];
        }
    cout<<sum<<endl;
}
int main(){
    int arr[3][3]={{1,4,9},
                   {11,4,3},
                   {2,2,3}};
    sum(arr,3,3);
}
*/
//Q-3
/*
#include<iostream>
using namespace std;
void transpose(int mat[2][3],int m,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<m ;j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[2][3]={{1,4,9},
                   {11,4,3}};
    transpose(arr,2,3);
}
*/
