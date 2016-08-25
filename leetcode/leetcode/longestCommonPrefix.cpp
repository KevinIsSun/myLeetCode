//
//  longestCommonPrefix.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/24.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "longestCommonPrefix.hpp"
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) return "";
        if (strs.size()==1) return strs[0];
        string str = longestPreOfTwo(strs[0], strs[1]);
        if (str == "") return str;
        for (int i=2; i<strs.size(); ++i) {
            str = longestPreOfTwo(str, strs[i]);
            if (str == "") return str;
        }
        return str;
    }
    
    string longestPreOfTwo(string s1, string s2) {
        string str = "";
        for (int i=0; i<s1.length()&&i<s2.length(); ++i) {
            if (s1[i]!=s2[i]) break;
            str += s1[i];
        }
        return str;
    }
};
