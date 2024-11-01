/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        }
        int max=arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}
*/
//Linear Search
/*
#include<iostream>
using namespace std;
int LinearSearch(int arr[] , int n, int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,5,6,10,7};
    int n = sizeof(arr)/sizeof(int);
    cout<<LinearSearch(arr,n,10)<<endl;
}
*/
//Array Reverse With Extra Space
/*
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int CopyArr[n];
    for(int i=0;i<n;i++){
        int j = n - i - 1;
        CopyArr[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i]=CopyArr[i];
    }
    for(int i=0;i<n;i++){
        cout<<CopyArr[i]<<" ";
    }
}
*/
//Array Reverse Without Extra Space
/*
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int  start = 0;
    int end = n-1;
    while (start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/
//Binary Search
/*
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int  start = 0;
    int end = n-1;
    while (start<=end){
        int mid = (start + end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<binarysearch(arr,n,4);
}
*/
//Subarray
/*
#include<iostream>
using namespace std;
void subarray(int arr[], int n) {
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout<<", ";
        }
        cout << endl;
    }
}
int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    subarray(arr, n);
    return 0;
}
*/

//Max Subarray sum (BruteForce approach) (O n^3---> Time Complexity)
/*
#include<iostream>
#include <climits>
using namespace std;
void maxsubarraysum(int *arr,int n){
    int maxsum=INT_MIN;
    for(int start = 0;start<n;start++){
        for(int end=start;end<n;end++){
            int sum=0;
            for(int i=start;i<=end;i++){
                sum=sum+arr[i];
                maxsum=max(maxsum,sum);
            }
        }
    }
    cout<<maxsum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraysum(arr,n);
}
*/
//Max Subarray sum (Optimized BruteForce approach) (O n^2---> Time Complexity)
/*
#include<iostream>
#include <climits>
using namespace std;
void maxsubarraysum(int *arr,int n){
    int maxsum=INT_MIN;
    for(int start = 0;start<n;start++){
        int sum=0;
        for(int end=start;end<n;end++){
            sum=sum+arr[end];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraysum(arr,n);
}
*/
//Max Subarray sum (Kadane's Algorithm) (O n---> Time Complexity)---> Best Way
/*
#include<iostream>
#include<climits>
using namespace std;

void maxsubarraysum(int arr[], int n) {
    int maxsum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        maxsum = max(maxsum, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    cout << maxsum;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxsubarraysum(arr, n);
}
*/
//Buy And Sell Stocks
/*
#include<iostream>
#include<climits>
using namespace std;
void maxprofit(int price[],int n){
    int bestbuy[100000];//max value of n according to leetcode question
    bestbuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
        //cout<<bestbuy[i]<<" ";
    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int currentProfit = price[i]-bestbuy[i];
        maxprofit=max(maxprofit,currentProfit);
    }
    cout<<"Max profit = "<<maxprofit;
}
int main(){
    int price[]={7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(int);
    maxprofit(price,n);
}
*/
//Trapping Rainwater (Leetcode)
/*
#include<iostream>
#include<climits>
using namespace std;
void trap(int height[],int n){
    int leftmax[20000];//max value of n according to leetcode question
    int rightmax[20000];//max value of n according to leetcode question
    leftmax[0]=height[0];
    rightmax[n-1]=height[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
        //cout<<leftmax[i]<<" ";
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
        //cout<<rightmax[i]<<" ";
    }
    int watertrap=0;
    for(int i=0;i<n;i++){
        int currwater = min(leftmax[i],rightmax[i])-height[i];
        if(currwater>0){
            watertrap=watertrap+currwater;
        }
    }
    cout<<"Water Trapped = "<<watertrap;
}
int main(){
    int height[]={4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    trap(height,n);
}
*/
//Duplicate array Checker (Leetcode --> Q-217)
/*
#include<iostream>
using namespace std;
bool duplicate(int nums[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(int);
    if(duplicate(nums, n)) {
        cout << "True" << endl;
    } 
    else {
        cout << "False" << endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int isfound(int nums[],int n,int target){
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int nums[]={4,5,6,7,0,1,2};
    int n=sizeof(nums)/sizeof(int);
    int target=0;
    cout<<isfound(nums,n,target);
}
*/
//Bubble Sort
/*
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool isswap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
            if(!isswap){
                //Array already Sorted
                break;
        }
    }
    print(arr,n);
}
int main(){
    int arr[]={2,4,6,3,1,5};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
}
*/
//selection sort
/*
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    print(arr,n);
}
int main(){
    int arr[]={2,4,6,3,1,5};
    int n=sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
}
*/
//insertion sorting
/*
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
}
int main(){
    int arr[]={2,4,6,3,1,5};
    int n=sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
}
*/
//Count Sort
/*
#include<iostream>
#include<climits>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void countsort(int arr[],int n){
    int freq[100000]={0}; //Range
    int minvalue=INT_MAX;
    int maxvalue=INT_MIN;
    for(int i=0;i<n;i++){
        minvalue=min(minvalue,arr[i]);
        maxvalue=max(maxvalue,arr[i]);
    }
    //Step 1 O(n)
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    //Step 2 - O(range) = max-min
    for(int i=minvalue,j=0;i<=maxvalue;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print (arr,n);
}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    countsort(arr,n);
}
*/

//built in Function (sort) //Ascending
/*
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    sort(arr,arr+8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
*/
//built in Function (sort) //Descending
/*
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    sort(arr,arr+8,greater<int>());
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
*/
//Alphabets rearrange (a-z)
/*
#include<iostream>
using namespace std;
void print(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionsort(char arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
}
int main(){
    char arr[]={'f','b','a','e','c','d'};
    int n=sizeof(arr)/sizeof(char);
    insertionsort(arr,n);
}
*/