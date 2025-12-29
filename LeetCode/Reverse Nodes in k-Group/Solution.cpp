/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* getKthNode(ListNode* temp, int k) {
        while (k > 1 && temp != NULL) {
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next=NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev; // prev is the new head
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while (temp != NULL) {
            ListNode* kthNode = getKthNode(temp, k);
            if (kthNode == NULL) {
                if (prevLast) prevLast->next = temp;
                break;
            }

            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;

            ListNode* newHead = reverse(temp);

            if (temp == head) {
                head = newHead;
            } else {
                prevLast->next = newHead;
            }

            prevLast = temp;
            temp = nextNode;
        }
        return head;
    }
};
