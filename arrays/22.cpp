<<<<<<< HEAD
/*  Find All Subarrays */

#include <iostream>
#include <vector>
using namespace std;

void printAllSubarrays(vector<int>& nums) {

    int n = nums.size();

    for (int start = 0; start < n; start++) {

        for (int end = start; end < n; end++) {
            for (int k = start; k <= end; k++) {
                cout << nums[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    vector<int> nums = {7,8,9,0};

    cout << "All subarrays"<<" ";
    printAllSubarrays(nums);

    return 0;
}
=======
/*  Find All Subarrays */

#include <iostream>
#include <vector>
using namespace std;

void printAllSubarrays(vector<int>& nums) {

    int n = nums.size();

    for (int start = 0; start < n; start++) {

        for (int end = start; end < n; end++) {
            for (int k = start; k <= end; k++) {
                cout << nums[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    vector<int> nums = {7,8,9,0};

    cout << "All subarrays"<<" ";
    printAllSubarrays(nums);

    return 0;
}
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
