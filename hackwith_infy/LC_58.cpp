#include<iostream>
#include<vector>
using namespace std;

 int lengthOfLastWord(string s) {
        int n = s.size();
        int len =0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '&& len==0) continue;
            if (s[i]!=' '){
                len++;
            }
            else{
                break;
            }
        }
        return len;
 }
int main(){

}
