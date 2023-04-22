/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // unordered_set<ListNode*> ptr;
        // while (head != NULL){
        //     if(ptr.count(head)){
        //         return true;
        //     }
        //     ptr.insert(head);
        //     head = head->next;
        // }
        // return false;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && slow && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
                return true;
        }
        return false;
    }
};