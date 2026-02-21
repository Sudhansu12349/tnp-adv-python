/* Rearrange Array Alternately: Rearrange an array such that elements alternate between the largest and smallest*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rearrange(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int n = nums.size();
         int max_idx = n - 1;
         int min_idx = 0;
         int max_elem = nums[n - 1] + 1;

       for(int i = 0; i < n; i++) {
          if(i % 2 == 0)
              nums[i] += (nums[max_idx--] % max_elem) * max_elem;
           else
              nums[i] += (nums[min_idx++] % max_elem) * max_elem;
        }

        for(int i = 0; i < n; i++)
           nums[i] /= max_elem;
}
int main(){
    vector<int> nums={1,2,3,6,5,4};
    rearrange(nums);
    for(int num:nums){
        cout<<num<<" ";
    }
}