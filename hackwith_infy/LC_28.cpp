#include<iostream>
#include<vector>
using namespace std;

int strStr(string haystack, string needle) {
        int n1=haystack.size();
        int n2= needle.size();
        int j=0;
        for(int i=0;i<n1;i++){
            if(haystack[i]==needle[j]){
                j++;
            }
            else{
                i=i-j;
                j=0;
            }
            if(j==n2){
                return i-j+1;
            }
        }
        return -1;
}
int main(){

}
