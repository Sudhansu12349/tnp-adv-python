/* Find the Kth Smallest Element */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthSmallest(vector<int>& arr, int k) {

    sort(arr.begin(), arr.end());

    return arr[k-1];   
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 5;

    int result = kthSmallest(arr, k);

    cout << k << "th smallest element is: " << result;

    return 0;
}
