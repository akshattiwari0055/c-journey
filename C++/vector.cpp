/*
#include<iostream>
using namespace std;
// void func(){
//     int arr[100] = {1,2,3,4,5};
//     for(int i = 0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }
int main(){
    //int arr[100] = {1,2,3,4,5}; //Static Allocation
    int size;
    cin>>size;
    int *arr = new int[size]; //Dynamic Allocataion
    int x = 1;
    for(int i = 0;i<size;i++){
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }
    delete[] arr;
    //func();
    //cout<<arr[0]<<endl; //error: 'arr' was not declared in this scope
}
*/
//2D DYNAMIC ARRAY
/*
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter Rows: ";
    cin>>rows;
    cout<<"Enter Coloumns: ";
    cin>>cols;
    int **matrix = new int*[rows];
    for(int i=0;i<rows;i++){
        matrix[i] = new int[cols];
    }
    //Data Store
    int x = 1;
    for(int i = 0; i<rows;i++){
        for(int j = 0;j<cols;j++){
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/
//Vector
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vect1;
vector<int> vect2(5,-1);
for(int i = 0; i<vect2.size();i++){
    cout<<vect2[i]<<" ";
}
cout<<vect1.size()<<"\n";
cout<<vect2.size()<<"\n";
return 0;
}
*/
//LeetCode Q-167 (Two Sum Sorted)
/*
#include<iostream>
#include<vector>
using namespace std;
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0,end = numbers.size()-1;
        int currSum = 0;
        vector<int> ans;
        while(start<end){
            currSum = numbers[start]+numbers[end];
            if(currSum == target){
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }else if(currSum>target){
                end--;
            }else{
                start++;
            }
        }
        return ans;
    }
int main(){
    vector<int> vec = {2,7,11,15};
    int target = 9;
    vector<int>ans = twoSum(vec,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}
*/
//2D Vector
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix.size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/
//LeetCode #645
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int> ans;
    int duplicate;
    for(int i = 0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
            duplicate = nums[i];
            ans.push_back(duplicate);
            break;
        }
    }
    int n = nums.size();
    int sum = n*(n+1)/2;
    int arrSum = 0;
    for(int i = 0;i<nums.size();i++){
        arrSum+=nums[i];
    }
    int missNum = sum - (arrSum-duplicate);
    ans.push_back(missNum);
    return ans;
}
int main(){
    vector<int> vec = {1,1};
    vector<int> ans = findErrorNums(vec);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}
*/
//LeetCode #04
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        int n = merged.size();
        if (n % 2 == 1) {
            return merged[n/2.0];
        } else {
            return (merged[n/2-1]+merged[n/2.0])/2.0;
        }
    }
int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    double median = findMedianSortedArrays(nums1,nums2);
    cout<<median<<endl;
    return 0;
}
*/
