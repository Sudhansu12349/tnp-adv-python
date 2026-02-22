/*  Count Frequency of Elements  */

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {10, 5, 10, 5, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (auto it : freq) {
        cout << it.first <<":"<< it.second  << endl;
    }

    return 0;
}

