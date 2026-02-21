/*   Find the Missing Number: Find the missing number in an array of size n containing numbers from 1 to n. */

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualSum = 0;
        int sum = n*(n+1)/2;
        for(int num:nums){
            actualSum += num;
        }
        if(sum==actualSum){
            return 0;
        }
        else{
            return sum-actualSum;
        }
    }
int main(){
    vector<int> nums={0,1,2,4};
    int k = missingNumber(nums);
    cout<<" The missing number in the array is: "<<k;
}