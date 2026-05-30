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
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<ListNode*>node;
        while(temp)
        {
            node.push_back(temp);
            temp=temp->next;
        }
        temp = new ListNode(0);
        for (int i=0; i<node.size()/2; i++)
        {
            temp->next = node[i];
            temp->next->next = node[node.size()-1-i];
            temp = temp->next->next;
        }
        if( (node.size()%2) != 0 )
        {
            temp->next = node[node.size()/2];
            temp = temp->next;
        }
        temp->next = nullptr;
    }
};
