#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<vector<int>> s;

void getAllCombinations(vector<int> &arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combin)
{
    if (idx == arr.size() || tar < 0)
    {
        return;
    }

    if (tar == 0)
    {
        if (s.find(combin) == s.end())
        {
            ans.push_back(combin);
            s.insert(combin);
        }

        return;
    }

    combin.push_back(arr[idx]);
    // single
    getAllCombinations(arr, idx + 1, tar - arr[idx], ans, combin);
    // multiple
    getAllCombinations(arr, idx, tar - arr[idx], ans, combin);
    combin.pop_back();

    // exclusion
    getAllCombinations(arr, idx + 1, tar, ans, combin);
}

vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    vector<int> combin;

    getAllCombinations(arr, 0, target, ans, combin);

    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(nums, target);
    for (vector<int> vec : result)
    {
        cout << "{";
        for (int val : vec)
        {
            cout << val << " ";
        }
        cout << "}";
    }
    return 0;
}