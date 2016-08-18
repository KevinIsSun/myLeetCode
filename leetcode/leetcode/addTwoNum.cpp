//
//  addTwoNum.cpp
//  leetcode
//
//  Created by 孙振东 on 16/8/17.
//  Copyright © 2016年 kevin. All rights reserved.
//

#include "addTwoNum.hpp"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummyHead = new ListNode(0);
        ListNode *t1 = l1, *t2 = l2, *curr = dummyHead;
        int carry = 0;
        while (t1!=NULL || t2!=NULL) {
            int x = (t1!=NULL) ? t1->val : 0;
            int y = (t2!=NULL) ? t2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            if (t1!=NULL) t1 = t1->next;
            if (t2!=NULL) t2 = t2->next;
        }
        if (carry > 0) {
            curr->next = new ListNode(carry);
        }
        return dummyHead->next;
    }
};
