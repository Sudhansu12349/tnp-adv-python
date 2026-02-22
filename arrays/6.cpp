<<<<<<< HEAD
/*   Check if Array is Sorted */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 10, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool isSorted = true;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }

    if(isSorted)
        cout << "Array is sorted ";
    else
        cout << "Array is not sorted";

    return 0;
}
=======
/*   Check if Array is Sorted */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 10, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool isSorted = true;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }

    if(isSorted)
        cout << "Array is sorted ";
    else
        cout << "Array is not sorted";

    return 0;
}
>>>>>>> 11845d4c0139f6327aa404e31515031e4a110363
