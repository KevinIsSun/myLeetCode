//
//  longestPalindromicSubstring.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/20.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "longestPalindromicSubstring.hpp"
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int len = s.length();
        int result = 0;
        for (int i=0; i<len; ++i) {
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i+1);
            int len3 = (len1>len2) ? len1 : len2;
            if (len3 > result) {
                start = i - (len3 - 1) / 2;
                result = len3;
            }
        }
        return s.substr(start, result);

    }

    int expandAroundCenter(string s, int left, int right) {
        int l = left, r = right;
        while (l > -1 && r < s.length() && s[l] == s[r]) {
            l--;
            r++;
        }
        return r-l-1;
    }
};