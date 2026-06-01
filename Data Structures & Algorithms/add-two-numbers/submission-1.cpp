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
    ListNode* head = new ListNode(0);
    ListNode* temp = head;
    void add(ListNode* a, ListNode* b,int carry) {
        if (a && b)
        {
            temp->next = new ListNode((a->val + b->val + carry)%10);
            carry = (a->val+b->val+carry)/10;
            temp=temp->next;
            add(a->next,b->next,carry);
        }
        else if (a)
        {
            temp->next = new ListNode((a->val + carry)%10);
            carry = (a->val+carry)/10;
            temp=temp->next;
            add(a->next,nullptr,carry);
        }
        else if (b)
        {
            temp->next = new ListNode((b->val + carry)%10);
            carry = (b->val+carry)/10;
            temp=temp->next;
            add(nullptr,b->next,carry);
        }
        else if (carry)
            temp->next = new ListNode(carry);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        add (l1,l2,0);
        return head->next;
    }
};
