#include<iostream>
#include<vector>
#include<climits>
using namespace std;

        //  Largest Element

int main() {
    int arr[5] = {2,5,8,4,3};
    int n = 5;
    int largest = INT_MIN;
    for(int i=0; i<n; i++) {
            largest = max(arr[i], largest);
        }
    cout << largest << endl;;
    return 0;
}

int largestElement(int arr[], int n) {
    int largest = INT_MIN;
    for(int i=0; i<n; i++) {
        largest = max(arr[i], largest);
    }
    cout << largest << endl;
}
int main() {
    int arr[5] = {2,5,8,4,3};
    int n = 5;
    largestElement(arr, n);
    return 0;
}

int main() {
    vector<int> largestElement = {2,5,8,4,3};
    int largest = INT_MIN;
    for(int val : largestElement) {
       largest = max(val, largest);
    }
    cout << largest;
}


        //  Smallest Element

void smallestElement(vector<int> v) {
    int smallest = INT_MAX;
    for(int val : v) {
        smallest = min(val, smallest);
    }
    cout << smallest;
}
int main() {
    vector<int> v = {2,5,8,4,3};
    smallestElement(v);
    return 0;
}

        // Number of Odd & Even Element

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int oddCount = 0;
    int evenCount = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << evenCount << endl;
    cout << oddCount << endl;
    return 0;
}


int oddEven(vector<int> v) {
    int oddCount = 0;
    int evenCount = 0;
    for(int val : v) {
        if(val % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << evenCount << endl;
    cout << oddCount << endl;
    return 0;
}
int main() {
    vector<int> v = {1,2,3,4,5,6,7};
    oddEven(v);
    return 0;
}

        // Reverse Array

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int revArr[5];
    for(int i=0; i<n; i++) {
        revArr[i] = arr[n-1-i];
    }
    for(int i=0; i<n; i++) {
       cout << revArr[i] << " ";
    }
    return 0;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

int revArr(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    revArr(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

        // check array is sorted or not

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    bool isSorted = true;
    for(int i=0; i<n; i++) {
        if(arr[i] > arr[i+1]) {
            isSorted = false;
            break;
        }
    }
    if(isSorted) cout << "Array is sorted";
    else cout << "Array is not sorted";
    return 0;
}

        // sum of all elements of array


int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int arrSum = 0;
    for(int i=0; i<n; i++) {
        arrSum += arr[i];
    }
    cout << arrSum << endl;
    return 0;
}

        // all possible pairs of array
int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
        cout << endl;
    }
    return 0;
}

