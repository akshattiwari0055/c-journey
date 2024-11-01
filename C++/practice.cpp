//Question 26
/*
#include<iostream>
#include<vector>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
int main(){
    vector<int> nums{0,1,1,1,2,2,3};
    int newLength = removeDuplicates(nums);
    cout<<newLength;
}
*/
//Question 88
/*
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int x = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[x] = nums1[i];
                x--;
                i--;
            }
            else{
                nums1[x] = nums2[j];
                x--;j--;
            }
        }
        while(j>=0){
            nums1[x] = nums2[j];
            x--;j--;
        }
    }
int main(){
    vector<int> nums1{1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2{2,5,6};
    int n = 3;
    merge(nums1,m,nums2,n);
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
}
*/
//Question 118
/*
#include<iostream>
#include<vector>
using namespace std;
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i = 0;i<numRows ; i++){
            ans[i].resize(i + 1);
            ans[i][0] = 1;
            ans[i][i] = 1;
            for(int j = 1;j<i ; j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
int main(){
    int numRows = 5;
    vector<vector<int>> result = generate(numRows);
    for (int i = 0;i<result.size();i++){
        for(int j = 0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
    int missingNumber(vector<int>& nums) {
        int n_xor = nums.size();
        for(int i = 0;i<nums.size();i++){
            n_xor = n_xor ^ i ^ nums[i];
        }
        return n_xor;
    }
int main(){
    vector<int> nums{3,0,2,4};
    cout<<missingNumber(nums);
}
*/