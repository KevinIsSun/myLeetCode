//
//  zigzagConversion.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/20.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "zigzagConversion.hpp"
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.size();
        if (numRows == 1) {
            return s;
        }
        int k = 0, interval = numRows*2 - 2;
        string res(len, ' ');
        for (int j=0; j<len; j+=interval)
            res[k++] = s[j];
        for (int i=1; i<numRows-1; i++) {
            int inter = (i<<1);
            for (int j=i; j<len; j+=inter) {
                res[k++] = s[j];
                inter = interval - inter;
            }
        }
        for (int j=numRows-1; j<len; j+=interval) {
            res[k++]=s[j];
        }
        return res;
        
    }
};