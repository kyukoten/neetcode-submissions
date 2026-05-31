/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head==nullptr)
            return nullptr;
        Node* newhead = new Node(0);
        Node* temp = newhead;
        vector<Node*> nodes;
        unordered_map<Node*,int> mp;
        Node* start = head;
        int i=0;
        while (start)
        {
            temp->next = new Node(start->val);
            temp=temp->next;
            nodes.push_back(temp);
            mp[start]=i;
            start = start->next;
            i++;
        }
        for (auto &j:mp)
            cout << j.second << "\n";
        temp = newhead;
        start = head;
        for (i=0; i<nodes.size()-1; i++)
        {
            nodes[i]->next = nodes[i+1];   
            if (start->random == nullptr || start==nullptr)
                nodes[i]->random = nullptr;
            else {
                int idx = mp[start->random];
                nodes[i]->random = nodes[idx];
            }
            start=start->next;
        }
        if (start->random == nullptr || start==nullptr)
            nodes[i]->random = nullptr;
        else {
            int idx = mp[start->random];
            nodes[i]->random = nodes[idx];
        }
        newhead = newhead->next;
        return newhead;
    }
};
