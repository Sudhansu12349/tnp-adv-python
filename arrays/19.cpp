<<<<<<< HEAD
/*    Find Subarray with Given Sum. */

#include <iostream>
#include <vector>
using namespace std;

bool findSubarray(vector<int>& arr, int target, int &start, int &end) {

    int left = 0;
    int currSum = 0;

    for (int right = 0; right < arr.size(); right++) {

        currSum += arr[right];

        while (currSum > target && left <= right) {
            currSum -= arr[left];
            left++;
        }

        if (currSum == target) {
            start = left;
            end = right;
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 4, 20, 3, 10, 5};
    int target = 33;

    int start, end;

    if (findSubarray(arr, target, start, end)) {
        cout << "Subarray found from index "
             << start << " to " << end << endl;

        for (int i = start; i <= end; i++)
            cout << arr[i] << " ";
    }
    else {
        cout << "No subarray found";
    }

    return 0;
}
=======
/*    Find Subarray with Given Sum. */

#include <iostream>
#include <vector>
using namespace std;

bool findSubarray(vector<int>& arr, int target, int &start, int &end) {

    int left = 0;
    int currSum = 0;

    for (int right = 0; right < arr.size(); right++) {

        currSum += arr[right];

        while (currSum > target && left <= right) {
            currSum -= arr[left];
            left++;
        }

        if (currSum == target) {
            start = left;
            end = right;
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 4, 20, 3, 10, 5};
    int target = 33;

    int start, end;

    if (findSubarray(arr, target, start, end)) {
        cout << "Subarray found from index "
             << start << " to " << end << endl;

        for (int i = start; i <= end; i++)
            cout << arr[i] << " ";
    }
    else {
        cout << "No subarray found";
    }

    return 0;
}
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
