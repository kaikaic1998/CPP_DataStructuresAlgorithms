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
class My_Solution { // Time O(n) Space O(n)
public:
    vector<int> list;

    void add_LL_element(ListNode* head){
        while(head){
            list.push_back(head->val);
            head=head->next;
        }
    }

    bool isPalindrome(ListNode* head) {
        add_LL_element(head);

        int j = list.size()-1;
        int half_size = list.size()/2;
        for(int i {0}; i < half_size; i++){
            if(list.at(i)!=list.at(j)){
                return false;
            }
            j--;
        }
        return true;
    }
};

class Better_Solution { // Time O(n) Space O(1)
public:
    ListNode* findMid(ListNode* head){
        ListNode* slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast) fast=fast->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL,*curr=head,*temp=NULL;
        while(curr != NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool compareList(ListNode* head1, ListNode* head2){
        while(head1!=NULL && head2!=NULL){
            if(head1->val != head2->val) return false;
            head1=head1->next;
            head2=head2->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* h=head;
        ListNode* mid = findMid(h);
        ListNode* h2=reverseList(mid);
        return compareList(head,h2);
    }
};