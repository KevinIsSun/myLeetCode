//
//  TwoSum.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/16.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "TwoSum.hpp"
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unsigned long int size = nums.size();
        map<int, int> hashmap;
        vector<int> result;
        for (int i=0; i<size; ++i) {
            if(hashmap.find(nums[i]) == hashmap.end())
                hashmap[nums[i]] = i;
            int j, num = target - nums[i];
            if ((hashmap.find(num) != hashmap.end()) && ((j=hashmap[num])<i)) {
                result.push_back(j);
                result.push_back(i);
                return result;
            }
        }
        return result;
    }
};