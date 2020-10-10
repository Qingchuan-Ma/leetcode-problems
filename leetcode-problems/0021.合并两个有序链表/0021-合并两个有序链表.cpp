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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode l3(0);
        ListNode* p = &l3;
        while(l1||l2){
            if(!l2)
            {
                p->next = l1;
                break;
            }
            if(!l1)
            {
                p->next = l2;
                break;
            }
            if(l1->val<=l2->val)
            {
                p->next = l1;
                p = p->next;
                l1 = l1->next;
            }
            else if(l1->val>l2->val)
            {
                p->next = l2;
                p = p->next;
                l2 = l2->next;
            }
        }
        return l3.next;
    }
};