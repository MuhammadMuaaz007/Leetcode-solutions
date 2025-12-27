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
13    ListNode* reverseList(ListNode* head) {
14        ListNode* currNode=head;
15        ListNode* nextNode=NULL;
16        ListNode* preNode=NULL;
17        while(currNode!=NULL){
18            nextNode=currNode->next;
19            currNode->next=preNode;
20            preNode=currNode;
21            currNode=nextNode;
22        }
23        return preNode;
24    }
25};