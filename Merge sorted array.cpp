#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::vector<int> mergedArray;
    int i = 0, j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] <= nums2[j]) {
            mergedArray.push_back(nums1[i]);
            i++;
        } else {
            mergedArray.push_back(nums2[j]);
            j++;
        }
    }

    while (i < nums1.size()) {
        mergedArray.push_back(nums1[i]);
        i++;
    }

    while (j < nums2.size()) {
        mergedArray.push_back(nums2[j]);
        j++;
    }

    return mergedArray;
}

int main() {
    std::vector<int> nums1 = {1, 3, 5, 7};
    std::vector<int> nums2 = {2, 4, 6, 8};

    std::vector<int> mergedArray = mergeSortedArrays(nums1, nums2);

    std::cout << "Merged Sorted Array: ";
    for (int num : mergedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

