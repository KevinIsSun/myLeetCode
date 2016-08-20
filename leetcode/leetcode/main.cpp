//
//  main.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/16.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include <iostream>
#include "longestPalindromicSubstring.cpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s = Solution();
    string a = "abcbe";
    string b = s.longestPalindrome(a);
    cout << b;
    return 0;
}

