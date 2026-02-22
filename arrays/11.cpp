<<<<<<< HEAD
/*  Remove given Element from Array */

#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                swap(nums[i],nums[k]);
                k++;
            }
        }
        return k ;
    }

int main(){
    vector<int> nums={ 2,4,6,8,3,10};
    int val = 3;
    int k = removeElement(nums,val);
    for(int i=0;i<k;i++){
        cout<<nums[i]<< " ";
    }
=======
/*  Remove given Element from Array */

#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                swap(nums[i],nums[k]);
                k++;
            }
        }
        return k ;
    }

int main(){
    vector<int> nums={ 2,4,6,8,3,10};
    int val = 3;
    int k = removeElement(nums,val);
    for(int i=0;i<k;i++){
        cout<<nums[i]<< " ";
    }
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
}