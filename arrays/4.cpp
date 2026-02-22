/*  Find the Second Largest Element    */

#include <iostream>
using namespace std;

int main() {
    int nums[] = {10, 50, 20, 8, 25};
    int n = sizeof(nums) / sizeof (nums[0]);

    if (n < 2) {
        return 0;
    }

    int max = INT_MIN;
    int sec_max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (nums[i] > max) {
         sec_max = max;
            max = nums[i];
        }
        else if  (nums[i] > sec_max && nums[i] != max) {
         sec_max = nums[i];
        }
    }

    if  (sec_max == INT_MIN)
        cout << "No second max element is there.";
    else
        cout << "Second max element: " << sec_max;

    return 0;
}

