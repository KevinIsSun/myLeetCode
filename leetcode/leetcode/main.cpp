//
//  main.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/16.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include <iostream>
#include "findMedianSortedArrays.cpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s = Solution();
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    int r = s.findMedianSortedArrays(nums1, nums2);
    printf("%d", r);
    return 0;
}

