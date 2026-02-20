/*   Find Pair with Given Sum: Find a pair of elements that adds up to a target sum. */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findPair(vector<int> &nums, int target) {

    sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {nums[left], nums[right]}; 
        }
        else if (sum < target)
            left++;
        else
            right--;
    }

    return {};  
}

int main() {
    vector<int> nums = {8, 7, 2, 5, 3, 1};
    int target = 10;

    vector<int> ans = findPair(nums, target);

    if (!ans.empty())
        cout << "Pair found: " << ans[0] << " and " << ans[1];
    else
        cout << "Not found";

    return 0;
}


