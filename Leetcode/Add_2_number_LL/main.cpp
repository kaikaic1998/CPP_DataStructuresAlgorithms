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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* tail = head;

        int carry = 0;

        while(l1 || l2 || carry){
            int sum = 0;
            if(l1){
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum = sum + l2->val;
                l2 = l2->next;
            }
            sum = sum + carry;
            carry = sum / 10;
            ListNode* newNode = new ListNode(sum%10);
            tail->next= newNode;
            tail = newNode;
        }
    return head->next;
    }
};