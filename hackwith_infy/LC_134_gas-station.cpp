#include<iostream>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0; int totalCost=0;
        for(int i:gas){
            totalGas += i;
        }
        for(int i: cost){
             totalCost += i;
        }
        if(totalGas<totalCost) return -1;
        int idx =0; int currGas=0;
        for(int i=0;i<gas.size();i++){
            currGas += gas[i]-cost[i];
            if(currGas<0){
                idx = i+1; 
                currGas =0;
            }
        }
        return idx;
}
int main(){

}
