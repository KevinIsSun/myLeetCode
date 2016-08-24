//
//  integerToRoman.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/24.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "integerToRoman.hpp"
#include <string>

using namespace std;



class Solution {
public:
    string intToRoman(int num) {
        int Num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string Roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string ans = "";
        int i = 0, times;
        while (num) {
            times = num / Num[i];
            num %= Num[i];
            while (times--) ans += Roman[i];
            i++;
        }
        return ans;
    }
};