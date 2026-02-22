<<<<<<< HEAD
/*  Check if Two Arrays Are Equal: if two arrays contain the same elements */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool areEqual(vector<int> nums1,vector<int> nums2){
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    return nums1==nums2;
}

int main(){
    vector<int> nums1={ 7,5,3,1};
    vector<int> nums2 ={1,7,5,3};
    
    if(areEqual(nums1,nums2)){
        cout<<" arrays are equal";
    }
    else{
        cout<<" not equal";
    }
=======
/*  Check if Two Arrays Are Equal: if two arrays contain the same elements */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool areEqual(vector<int> nums1,vector<int> nums2){
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    return nums1==nums2;
}

int main(){
    vector<int> nums1={ 7,5,3,1};
    vector<int> nums2 ={1,7,5,3};
    
    if(areEqual(nums1,nums2)){
        cout<<" arrays are equal";
    }
    else{
        cout<<" not equal";
    }
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
}