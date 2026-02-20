/*  25. Find Majority Element: Find the element that appears more than n/2 times.*/

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = 0;
        for(int num:nums){
            if (count==0){
                element=num;
                count = 1;
            }
            else{
                if (num == element){
                count++;}
                else{
                    count--;
                }
            }
        }
        return element;
   }
int main(){
    vector<int> nums={ 2,2,1,1,1,2,2};
    int k = majorityElement(nums);
    cout<<"Majority element is "<<k;
}