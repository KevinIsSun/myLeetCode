//
//  stringToInteger.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/21.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "stringToInteger.hpp"
#include <climits>
#include <string>
#include <math.h>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        const char *p = str.data();
        long long result = 0;
        bool neg = false;
        int count = 0;
        bool whitespace = false;
        long int length = str.length();
        for (int i = 0; i < length; i++, p++) {
            if (*p == ' ') {
                if (whitespace)
                    break;
            } else if (*p == '-') {
                neg = true;
                count++;
                whitespace = true;
            } else if (*p == '+') {
                count++;
                whitespace = true;
            } else if (*p >= '0' && *p <= '9'){
                result = result*10 + (*p - '0');
                if (result > INT_MAX) {
                    if (neg) {
                        return INT_MIN;
                    } else {
                        return INT_MAX;
                    }
                }
                whitespace = true;
            } else {
                break;
            }
        }
        
        
        if (fabs(count)>1) {
            return 0;
        }
        if (neg) {
            return -result;
        }
        return result;
    }
};