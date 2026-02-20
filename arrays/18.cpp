/*     Move Zeroes to End: Move all zeroes in an array to the end while maintaining the order of non-zero elements. */

#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
         int j = 0;
         for (int i=0;i<nums.size();i++){
            if (nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }

        }         
    }
int main(){
    vector<int> nums= { 0,0,0,2,6,9,0};
    moveZeroes(nums);
    for(int x:nums){
        cout<<x<<" ";
    }

}