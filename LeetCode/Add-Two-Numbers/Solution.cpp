1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode* dummy = new ListNode(0);
15        ListNode* curr = dummy;
16        int carry = 0;
17        while (l1 != NULL || l2 != NULL || carry) {
18            int sum = carry;
19            if (l1 != NULL) {
20                sum += l1->val;
21                l1 = l1->next;
22            }
23            if (l2 != NULL) {
24                sum += l2->val;
25                l2 = l2->next;
26            }
27            carry = sum / 10;
28            curr->next = new ListNode(sum % 10);
29            curr = curr->next;
30        }
31        return dummy->next;
32    }
33};