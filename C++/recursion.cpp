//Factorial
/*
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){ //Base Case (smallest Problem)
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int x = factorial(n);
    cout<<x;
} 
*/
//Number from n to 1
/*
#include<iostream>
using namespace std;
void nums(int n){
    if(n==0){ //Base Case (smallest Problem)
        return;
    }
    cout<<n<<" "; //work
    nums(n-1); //faith,next call
}
int main(){
    int n;
    cin>>n;
    nums(n);
}
*/
//Sum of n natural number
/*
#include<iostream>
using namespace std;
int sum(int n){
    if(n == 1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    int x = sum(n);
    cout<<x;
}
*/

//Print nth fibonacci number
/*
#include<iostream>
using namespace std;
int fibbonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibbonacci(n-1) + fibbonacci(n-2);
}
int main(){
     cout<<fibbonacci(8);
}
*/

//Check if array sorted
/*
#include<iostream>
using namespace std;
bool isSorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,n,i+1);
}
int main(){
    int arr1[5] = {1,2,3,4,5}; //sorted --> 1
    int arr2[5] = {1,3,2,4,5}; //not-sorted --> 0
    cout<<isSorted(arr1,5,0)<<endl;
    cout<<isSorted(arr2,5,0)<<endl;
}
*/

//First occurence and Last Occurence
/*
#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int> arr,int i,int target){
    if(i == arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return firstoccurence(arr,i+1,target);
}
int lastoccurence(vector<int> arr,int i,int target){
    if(i==arr.size()){
        return -1;
    }
    int idxfound=lastoccurence(arr,i+1,target);
    if(idxfound == -1 && arr[i] == target){
        return i;
    }
    return idxfound;
}
int main(){
    vector<int> arr1 = {1,2,3,3,4};
    vector<int> arr2 = {1,2,4,5,6};
cout<<firstoccurence(arr1,0,3)<<endl; //found at index 2
cout<<firstoccurence(arr2,0,3)<<endl; // not found --> -1
cout<<lastoccurence(arr1,0,3)<<endl; //found at index 3
cout<<lastoccurence(arr2,0,3)<<endl; // not found --> -1
}
*/
//Find x to the power n
/*
#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==0){
        return 1;
    }
    int halpow=pow(x,n/2);
    int halfpowsquare=halpow*halpow;
    if(n%2!=0){
        //Odd
        return x * halfpowsquare;
    }
    return halfpowsquare;
}
int main(){
    int a = pow(6,2);
    cout<<a<<endl;
}
*/
//Tiling Problem
/*
#include<iostream>
using namespace std;
int numTilings(int n) {
    if(n==0 || n==1){
        return 1;
    }
    return numTilings(n-1)+numTilings(n-2);
    }
int main(){
    int n = 5;
    int answer = numTilings(n);
    cout<<"Total Possible ways: "<<answer;
}
*/
//Remove Duplicates
/*
#include<iostream>
using namespace std;
    void removeDuplicate(string str,string ans,int i,int map[26]) {
        if(i==str.size()){
            cout<<ans<<endl;
            return;
        }
        char ch = str[i];
        int mapIdx = (int) (ch-'a');
        if(map[mapIdx]==true){
            removeDuplicate(str,ans,i+1,map);
        }
        else{
            map[mapIdx]=true;
            removeDuplicate(str,ans+str[i],i+1,map);
        }
        
    }
int main(){
    string str = "aaksshaatt";
    string ans = "";
    int map[26]={false};
    removeDuplicate(str,ans,0,map);
}
*/
//Friends Pairing Problem
/*
#include<iostream>
using namespace std;
    int countFriendsPairings(int n) 
    { 
        if(n==1 || n==2){
            return n;
        }
        return countFriendsPairings(n-1)+(n-1)*countFriendsPairings(n-2);
    }
int main(){
    int n = 4;
    int ans = countFriendsPairings(n);
    cout<<ans;
}
*/
//Binary String Pronblem
/*
#include<iostream>
using namespace std;
void binString(int n,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(ans[ans.size()-1] != '1'){
        binString(n-1,ans+'0');
        binString(n-1,ans+'1');
    }
    else{
        binString(n-1,ans+'0');
    }
}
int main(){
    string ans = "";
    binString(3,ans);
}
*/
//Tower of hanoi
/*
#include<iostream>
using namespace std;
int steps(int n){
    if(n==1){
        return 1;
    }
    return 2*steps(n-1)+1;
}
int main(){
    int n = steps(3);
    cout<<n<<endl;
}
*/
//Find Occurence
/*
#include<iostream>
using namespace std;
void findkey(int arr[],int key,int n,int i){
    if(n==i){
        return;
    }
    if(arr[i] == key){
        cout<<i<<" ";
    }
    findkey(arr,key,n,i+1);
}
int main() {
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int n = sizeof(arr) / sizeof(int);
    int key = 2;

    cout << "Indices of key " << key << ": ";
    findkey(arr, key, n, 0);

    return 0;
}
*/
