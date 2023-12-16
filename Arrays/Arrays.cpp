#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, const std::vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        }
        else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    
    std::vector<int> nums1_1 = { 1, 2, 3, 0, 0, 0 };
    int m1 = 3;
    std::vector<int> nums2_1 = { 2, 5, 6 };
    int n1 = 3;
    merge(nums1_1, m1, nums2_1, n1);
    for (const auto& num : nums1_1) {
        std::cout << num << " ";
    }
    

    return 0;
}
