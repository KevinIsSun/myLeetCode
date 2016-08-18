//
//  longestSubstringWithoutRepeat.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/18.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "longestSubstringWithoutRepeat.hpp"
#include <string>
#include <map>
#include <set>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unsigned long int len = s.length();
        unordered_set<char> set;
        int ans=0, i=0, j=0;
        while (i < len && j < len) {
            if (set.find(s[j])==set.end()) {
                set.insert(s[j++]);
                ans = ((j-i)>ans) ? j-i : ans;
            } else {
                set.erase(s[i++]);
            }
        }
        return ans;
    }
};