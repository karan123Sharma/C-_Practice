#include <iostream>
#include<vector>
using namespace std;

void solve(int arr[], vector<int>& output, int index, vector<vector<int> >& ans, int size) {
    if (index >= size) {
        ans.push_back(output);
        return;
    }
    // Exclude the current element
    solve(arr, output, index + 1, ans, size);

    // Include the current element
    output.push_back(arr[index]);
    solve(arr, output, index + 1, ans, size);

    // Backtrack to remove the included element
    output.pop_back();
}

int main() {
    vector<vector<int> > ans;
    vector<int> output;
    int nums[4] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int index = 0;
    solve(nums, output, index, ans, size);

    // Printing the result
    for (auto i : ans) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
