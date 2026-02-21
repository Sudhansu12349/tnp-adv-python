/*   Find the Leader Elements: An element is a leader if it is greater than all elements to its right */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        int rightMax=arr[n-1];
        ans.push_back(rightMax);
        
        for(int i=n-2;i>=0;i--){
            if(arr[i]>rightMax){
                rightMax=arr[i];
                ans.push_back(rightMax);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
int main(){
    vector<int>arr ={16,17,4,3,5,2};
    vector<int> ans=leaders(arr);
    cout<<"Leader elements in array are: ";
    for(int num:ans){
        cout<<num<<" ";
    }
}
