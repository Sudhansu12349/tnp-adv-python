/*  Find the Longest Consecutive Sequence: Find the length of the longest consecutive sequence of integers. */

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(),nums.end());
        int longer= 0;

        for(int num:numset){
            if(numset.find(num-1)==numset.end()){
            int curr =num;
            int count=1;
            while(numset.find(curr+1)!=numset.end()){
                curr++;
                count++;
            }
            longer = max(count,longer);
            }
        }
        return longer;
        
    }
 int main(){
    vector<int> nums ={ 0,3,7,2,5,8,4,6,0,1};
    int k = longestConsecutive(nums);
    cout<<" length of longest consecutive sequence is "<<k;
 }   