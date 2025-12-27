1class Solution {
2public:
3    ListNode* reverseBetween(ListNode* head, int left, int right) {
4        ListNode* dummy = new ListNode(0);
5        dummy->next = head;
6
7        ListNode* leftPre = dummy;
8        ListNode* currNode = head;
9
10        // Move to left position
11        for (int i = 0; i < left - 1; i++) {
12            leftPre = leftPre->next;
13            currNode = currNode->next;
14        }
15
16        ListNode* subListedHead = currNode;
17        ListNode* preNode = NULL;
18        ListNode* nextNode = NULL;
19
20        // 🔥 FIXED LOOP
21        for (int i = 0; i <= right - left; i++) {
22            nextNode = currNode->next;
23            currNode->next = preNode;
24            preNode = currNode;
25            currNode = nextNode;
26        }
27
28        // Reconnect
29        leftPre->next = preNode;
30        subListedHead->next = currNode;
31
32        return dummy->next;
33    }
34};
35