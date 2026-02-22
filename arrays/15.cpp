
/* Find Union of Two Arrays */

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

vector<int> unionFind(vector<int> &nums1,vector<int> &nums2){
    unordered_set<int> set;
    vector<int> ans;
    for(int x:nums1){
        set.insert(x);
    }
    for(int y:nums2){
        set.insert(y);
    }
    for(int ele:set){
        ans.push_back(ele);
    }
    return ans;
    
}
int main(){
    vector<int> nums1={1,2,3,3,4,5};
    vector<int> nums2 ={4,4,5,6,6};

    vector<int> ans = unionFind(nums1,nums2);
    cout<<"Union of both arrays is: ";
    for(int k: ans){
        cout<<k<<" ";
    }
}

