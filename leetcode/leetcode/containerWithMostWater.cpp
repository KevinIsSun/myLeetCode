//
//  containerWithMostWater.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/23.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "containerWithMostWater.hpp"
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0, area;
        int start=0, end=height.size()-1;
        while (start<end) {
            if (height[start]>height[end]) {
                area = height[end]*(end-start);
                end--;
            } else {
                area = height[start]*(end-start);
                start++;
            }
            if(area > max) max = area;
        }
        return max;
    }
};
