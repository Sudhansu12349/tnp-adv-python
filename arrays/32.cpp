
/* Find Maximum Product Pair: Find two elements whose product is maximum. */

#include<iostream>
#include<vector>
using namespace std;

pair<int,int> maxProductPair(vector<int> &nums){
    int max=INT_MIN;
    int sec_max=INT_MIN;
    int min = INT_MAX;
    int sec_min = INT_MAX;
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            sec_max=max;
            max=nums[i];
        }
        else if(nums[i]>sec_max){
            sec_max=nums[i];
        }
        if(nums[i]<min){
            sec_min=min;
            min=nums[i];
        }
        else if(nums[i]<sec_min){
            sec_min=nums[i];
        }
    }
    if(max*sec_max > min*sec_min) return {max,sec_max};
    else return {min,sec_min};
}
int main(){
    vector<int> nums={-10,-25,3,2,20,10,-8,7};
    pair<int,int> k= maxProductPair(nums);
    cout<<k.first<<" "<<k.second;

}

