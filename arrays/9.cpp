<<<<<<< HEAD
/*      Remove Duplicates from Array: Remove duplicates from the array while maintaining order. */

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int j = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[j] != nums[i]) {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int k = removeDuplicates(nums);

    cout << "No. of unique elements:" << k << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
=======
/*      Remove Duplicates from Array: Remove duplicates from the array while maintaining order. */

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int j = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[j] != nums[i]) {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int k = removeDuplicates(nums);

    cout << "No. of unique elements:" << k << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
