/*  Find Equilibrium Index: Find an index such that sum of elements on left = sum on right. */

#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int sum=0;
        int leftSum =0;
        int rightSum =0;
        int idx =0;
        for(int x:nums){
            sum += x;
        }
        for(int i=0;i<nums.size();i++){
            rightSum = sum-leftSum-nums[i];
            if(leftSum==rightSum){
               return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
int main(){
    vector<int> nums ={1,7,3,6,5,6};
    int index =  pivotIndex(nums);
    cout<<" Equilibrium index is found at index "<<index;

}