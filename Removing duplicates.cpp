#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int index = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[index]) {
            nums[++index] = nums[i];
        }
    }
    return index + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 4, 5};
    
    int newSize = removeDuplicates(nums);
    
    cout << "New array size: " << newSize << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}

