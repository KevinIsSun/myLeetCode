//
//  findMedianSortedArrays.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/19.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "findMedianSortedArrays.hpp"
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        unsigned long int l1 = nums1.size();
        unsigned long int l2 = nums2.size();
        unsigned long int l3 = l1 + l2;
        vector<int> nums = {};
        for (int i=0, j=0; (i+j)<l3; ) {
            int t1 = (l1 == 0) ? 1000000 : nums1[i];
            int t2 = (l2 == 0) ? 1000000 : nums2[j];
            if (t1 < t2) {
                nums.push_back(t1);
                i++;
                l1--;
            } else {
                nums.push_back(t2);
                j++;
                l2--;
            }
            if (nums.size() == (l3/2+1))
                break;
        }
        if (l3%2 == 1) {
            return nums[l3/2];
        } else {
            double r = nums[l3/2-1]+nums[l3/2];
            return r/2;
        }
        return 0;
    }
};