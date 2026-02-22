/*    Rotate Array by k Positions: Rotate the array to the right by k positions. */

#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;

    Reverse(nums, 0, n - 1);
    Reverse(nums, 0, k - 1);
    Reverse(nums, k, n - 1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    rotate(nums, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    return 0;
}

