#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3}; //3
    cout << vec[0] << endl;
    return 0;
}


int main() {
    vector<int> vec (5, 0);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;
    return 0;
}


int main() {
    // vector<int> vec(5,0);
    vector<char> vec = {'a', 'b', 'c', 'd'};
    cout << "size = " << vec.size() << endl;
    for(char val : vec) {
        cout << val << endl;
    }
    return 0;
}


int main() {
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);  // add new element at the last
    cout << "after push back size = " << vec.size() << endl;    

    vec.pop_back();    // delete last element
    cout << "front = " << vec.front() << endl; 
    cout << "back = " << vec.back() << endl; 
    cout << "single element at any index = " << vec.at(1) << endl;

    for(int val : vec) {
        cout << val << endl;
    }
    return 0;
}



// finding capacity and size
int main() {
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
}

// linear search
int main() {
    vector<int> linearSearch = {2,3,6};
    int target = 4;
    for(int val : linearSearch) {
        if(val == target) {
            cout << "Found";
            return 0;
        }
    }
    cout << "Not found";
    return 0;
}

int linearSearch(vector<int> v, int target) {
    for(int val : v) {
        if(val == target) {
            cout << "found" << endl;
            return 1;
        }
    }
    cout << "Not found";
    return 0;
}
int main() {
    vector<int> v = {1,2,3,4,5};
    int target = 4;
    linearSearch(v, target);
    return 0;
}


// reverse array
int main() {
    vector <int> revArr = {1,2,3,4,5};
    int n = revArr.size();
    for(int i=1; i<n; i++){
        swap(revArr[i], revArr[n-1-i]);
    }
    for(int val : revArr) {
        cout << val << " ";
    }
}

int revArr(vector<int> &v) {
    int n = v.size();
    for(int i=1; i<n; i++) {
        swap(v[i], v[n-1-i]);
    }
    return 0;
}
int main() {
    vector<int> v = {1,2,3,4,5};
    revArr(v);
    for(int val : v) {
        cout << val << " ";
    }
    return 0;
}

