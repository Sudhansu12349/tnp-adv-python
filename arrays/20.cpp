/*  Rotate Array to the Left by k Positions */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Reverse(vector<int> &arr,int start,int end){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        d =d%n;
        Reverse(arr,0,n-1);
        Reverse(arr,0,n-d-1);
        Reverse(arr,n-d,n-1);
    }
int main(){
    vector<int> arr={1,2,3,4,5};
    int d=2;
    rotateArr(arr,d);
    cout<<"Rotated Array is ";
    for(int num:arr){
        cout<<num<<" ";
    }
}