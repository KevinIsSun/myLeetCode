//
//  palindromeNumber.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/21.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "palindromeNumber.hpp"
#include <math.h>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) {
            return false;
        }
        vector<int> arr = {};
        while (x>9) {
            arr.push_back(x%10);
            x=x/10;
        }
        arr.push_back(x);
        unsigned long int len = arr.size();
        int left = (len%2==1) ? len/2 : len/2-1;
        int right = (len%2==1) ? len/2 : len/2;
        int i = 0;
        while (i <= left) {
            if (arr[i]!=arr[len-1-i])
                return false;
            ++i;
        }
        return true;
    }
};