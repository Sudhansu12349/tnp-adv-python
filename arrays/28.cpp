<<<<<<< HEAD
/*  Sort an Array of 0s, 1s, and 2s: Sort an array consisting of only 0s, 1s, and 2s. */

#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
        int red=0;
        int white=0;
        int blue=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) red++;
            else if(nums[i]==1) white++;
            else blue++;
        }
        for(int i=0;i<red;i++){
            nums[i]=0;
        }
        for(int i=red;i<(red+white);i++){
            nums[i]=1;
        }
        for(int i=(red+white);i<(red+white+blue);i++){
            nums[i]=2;
        }

    }
int main(){
    vector<int>nums ={ 2,0,2,1,1,0};
    sortColors(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
=======
/*  Sort an Array of 0s, 1s, and 2s: Sort an array consisting of only 0s, 1s, and 2s. */

#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
        int red=0;
        int white=0;
        int blue=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) red++;
            else if(nums[i]==1) white++;
            else blue++;
        }
        for(int i=0;i<red;i++){
            nums[i]=0;
        }
        for(int i=red;i<(red+white);i++){
            nums[i]=1;
        }
        for(int i=(red+white);i<(red+white+blue);i++){
            nums[i]=2;
        }

    }
int main(){
    vector<int>nums ={ 2,0,2,1,1,0};
    sortColors(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
}