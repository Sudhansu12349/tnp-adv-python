<<<<<<< HEAD
/*  Maximum Sum Subarray (kadane's algo) */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int>& arr) {

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int x : arr) {
        currSum += x;

        maxSum = max(maxSum, currSum);
        if (currSum < 0)
            currSum = 0;
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int result = maxSubarraySum(arr);

    cout << "Maximum subarray sum = " << result;

    return 0;
}
=======
/*  Maximum Sum Subarray (kadane's algo) */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int>& arr) {

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int x : arr) {
        currSum += x;

        maxSum = max(maxSum, currSum);
        if (currSum < 0)
            currSum = 0;
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int result = maxSubarraySum(arr);

    cout << "Maximum subarray sum = " << result;

    return 0;
}
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
