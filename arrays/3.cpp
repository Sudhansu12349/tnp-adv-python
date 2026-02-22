/*       Find the Sum of Elements      */

#include <iostream>
using namespace std;

int main() {
    int nums[] = {20, 5, 30, 18, 25};
    int n = sizeof(nums) / sizeof (nums[0]);

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += nums[i];
    }

    cout << "Sum of elements: " << sum << endl;

    return 0;
}

