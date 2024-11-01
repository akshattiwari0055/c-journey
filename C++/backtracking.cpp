//BackTracking on Array
/*
#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void changeArr(int arr[],int n,int i){
    if(i == n){
        printArr(arr,n);
        return;
    }
    arr[i] = i+1;
    changeArr(arr,n,i+1);
    arr[i]-=2; //Backtracking
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    changeArr(arr,n,0);
    printArr(arr,n);
}
*/
//Finding Subsets (string)
/*
#include<iostream>
using namespace std;
void printSubsets(string str , string subset){
    if(str.size()==0){
        cout<<"{"<<"\""<<subset<<"\""<<"}"<<" ";
        return;
    }
    char ch = str[0];
    //Yes choice
    printSubsets(str.substr(1,str.size()-1),subset+ch);
    //No choice
    printSubsets(str.substr(1,str.size()-1),subset);
}
int main(){
    string str = "abc";
    string subset = "";
    printSubsets(str,subset);
}
*/
//Permutation
/*
#include<iostream>
using namespace std;
void permutation(string str,string ans){
    int n = str.size();
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0;i<n;i++){
        char ch = str[i];
        string nextStr = str.substr(0,i)+str.substr(i+1,n-i-1);
        permutation(nextStr,ans+ch); //ith char choice to add in permutation
    }
}
int main(){
    string str = "abc";
    string ans = "";
    permutation(str,ans);
}
*/
//Nth of queens ----> Time complexity = O(n!);
/*
#include<iostream>
#include<vector>
using namespace std;
void printBoard(vector<vector<char>> board){
    int n = board.size();
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n-------\n";
}
bool isSafe(vector<vector<char>> board,int row,int col){
    int n = board.size();
    //Horizontal
    for(int j = 0;j<n;j++){
       if(board[row][j] == 'Q'){
        return false;
        }
    }
    //vertical
    for(int i = 0;i<row;i++){
       if(board[i][col] == 'Q'){
        return false;
        }
    }
    //diagonal left
    for(int i = row,j = col;i>=0 && j>=0;i--,j--){ 
       if(board[i][j] == 'Q'){
        return false;
        }
    }
    //diagonal right
    for(int i = row,j = col;i>=0 && j<n;i--,j++){ 
       if(board[i][j] == 'Q'){
        return false;
        }
    }
    return true;
}
void nQueens(vector<vector<char>> board,int row){
    int n = board.size();
    if(row==n){
        printBoard(board);
        return;
    }
    for(int j= 0;j<n;j++){
        if(isSafe(board,row,j)){
            board[row][j] = 'Q';
            nQueens(board,row+1);
            board[row][j] = '.';        
        }
    }
}
int main(){
    vector<vector<char>> board;
    int n = 5; 
    for(int i = 0;i<n;i++){
        vector<char> newrow;
        for(int j = 0;j<n;j++){
            newrow.push_back('.');
        }
        board.push_back(newrow);
    }
    nQueens(board,0);
}
*/
//Grid Ways --> Time complexity = O(2^(n+m))
/*
#include<iostream>
using namespace std;
int ways(int row,int col,int n,int m){
    if(row == n-1 && col == m-1){
        //Base case
        return 1;
    }
    if(row>=n  || col>=m){
        return 0;
    }
    int v1 = ways(row,col+1,n,m); //right
    int v2 = ways(row+1,col,n,m); //down
    return v1+v2;
}
int main(){
    int n = 3;
    int m = 3;
    cout<<ways(0,0,n,m);

}
*/
//Optimized Grid ways
/*
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i = x;i>0;i--){
        f=f*i;
    }
    return f;
}
int main(){
    int n=3,m=2; //4x4 grid
    int x = n-1;
    int y = m-1;
    int numerator = fact((n-1) + (m-1));
    int denominator = fact(n-1) * fact(m-1);
    int ways = (numerator)/denominator;
    cout<<ways;
}
*/