
/*  Find Duplicates in an Array */

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto i:mp){
            if(i.second>1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
int main(){
    vector<int> nums={4,3,2,7,8,2,3,1};
    vector<int> ans = findDuplicates(nums);
    cout<<"duplicate elements are: ";
    for(int x:ans){
        cout<<x<<" ";
    }
}

