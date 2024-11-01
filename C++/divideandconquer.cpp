//Merge Sort
/*
#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int si,int mid,int ei){
    vector<int> temp;
    int i = si;
    int j = mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    //Copy Vector --> Orignal Array
    for(int idx = si,x=0;idx<=ei;idx++){
        arr[idx]=temp[x++];
    }
}
void mergeSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid = (si+ei)/2;
    mergeSort(arr,si,mid); //Left Half
    mergeSort(arr,mid+1,ei); //Right Half
    merge(arr,si,mid,ei); //Conquer
}
void printArr(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {8,4,6,1,3,2};
    int n = 6;
    mergeSort(arr,0,n-1);
    printArr(arr,n);
}
*/

//Quick Sort
/*
#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int partition(int arr[],int si,int ei){
    int i = si-1;
    int j = si;
    int pivot = arr[ei];
    for(j = si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    //pivotIdx = i
    return i;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int PivotIdx = partition(arr,si,ei);
    quickSort(arr,si,PivotIdx-1); //Left half
    quickSort(arr,PivotIdx+1,ei); //Right Half

}
int main(){
    int arr[6] = {6,3,5,4,8,7};
    int n = 6;
    quickSort(arr,0,n-1);
    printArr(arr,n);
}
*/
//Search in Rotated Sorted Array using Modified Binary Search
/*
#include<iostream>
#include<vector>
using namespace std;
    int search(vector<int>& nums, int si,int ei,int target) {
        if(si>ei){
            return -1;
        }
        int mid = si+((ei-si)/2);
        if(nums[mid]==target){
            return mid;
        }
        if(nums[si]<=nums[mid]){
            if(nums[si]<=target && target<=nums[mid]){
                return search(nums,si,mid-1,target);
            }
            else{
                return search(nums,mid+1,ei,target);
            }
        }
        else{
            if(nums[mid] <= target && target <= nums[ei]){
                return search(nums,mid+1,ei,target);
            }
            else{
                return search(nums,si,mid-1,target);
            }
        }
    }
    int search(vector<int> &nums,int target){
        return search(nums,0,nums.size()-1,target);
    }
int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int ans = search(nums,0);
    cout<<ans;
}
*/