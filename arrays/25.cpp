<<<<<<< HEAD
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
=======
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
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
}