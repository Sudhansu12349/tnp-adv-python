/*    ind Intersection of Two Arrays: Find the common elements between two arrays. */

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int num:nums1){
            mp[num]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(mp.find(nums2[i])!= mp.end()){
                ans.push_back(nums2[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int i=0;
        if(ans.size()==0) return {};
        for(int j=1;j<ans.size();j++){
            if(ans[i] != ans[j]){
                i++;
                ans[i] = ans[j];
            }

        }
        ans.resize(i+1); 
        return ans; 
    }
int main(){
    vector<int> nums1={4,9,5};
    vector<int> nums2={4,9,8,4,9};

    vector<int> ans = intersection(nums1,nums2);
    for(int num:ans){
        cout<<num<<" ";
    }
}
