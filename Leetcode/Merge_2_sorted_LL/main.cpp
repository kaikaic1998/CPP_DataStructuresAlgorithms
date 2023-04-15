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
class My_Solution {
public:
    vector<int> LL_to_sorted_vec (ListNode* l1, ListNode* l2){
        vector<int> vec;

        while (l1 || l2) {
            if (l1){
                vec.push_back(l1->val);
                l1 = l1->next;
            }
            if(l2){
                vec.push_back(l2->val);
                l2 = l2->next;
            }
        }
        sort(vec.begin(), vec.end());
        return vec;
    }

    ListNode* make_LL(vector<int> vec){
        ListNode* head = new ListNode();
        ListNode* tail = head;

        int size = vec.size();
        for (int i {0}; i < size; i++){
            ListNode* newNode = new ListNode(vec.at(i));
            tail->next = newNode;
            tail = tail->next;
        }
        return head->next;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // comebine 2 LL to sorted vector
        vector<int> vec = LL_to_sorted_vec(list1, list2);

        // make LL from vector, and return it
        return make_LL(vec);
    }
};


// better solution
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        if(l1->val>=l2->val) l2->next = mergeTwoLists(l1, l2-> next);
        else{
            l1->next = mergeTwoLists(l1->next, l2);
            l2 = l1;
        }return l2;
    }