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
20        for (int i = 0; i <= right - left; i++) {
21            nextNode = currNode->next;
22            currNode->next = preNode;
23            preNode = currNode;
24            currNode = nextNode;
25        }
26
27        // Reconnect
28        leftPre->next = preNode;
29        subListedHead->next = currNode;
30        
31        return dummy->next;
32    }
33};
34
35
36
37/*We split the list into 3 parts:
38
39[Part A] → [Part B] → [Part C]
40
41
42Part A: nodes before left
43
44Part B: nodes from left to right (this part will be reversed)
45
46Part C: nodes after right
47
48Then:
49
50Reverse Part B
51
52Connect:
53
54end of Part A → new head of Part B
55
56end of Part B → Part C*/
57