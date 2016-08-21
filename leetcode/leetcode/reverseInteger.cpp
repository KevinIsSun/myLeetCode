//
//  reverseInteger.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/20.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "reverseInteger.hpp"
#include <string>
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool isPositive = true;
        if(x < 0){isPositive = false; x *= -1;}
        long long res = 0;//为了防止溢出，用long long
        while(x)
        {
            res = res*10 + x%10;
            x /= 10;
        }
        if(res > INT_MAX || res < INT_MIN)return 0;
        if(!isPositive)return (int)res*-1;
        else return (int)res;
    }
};