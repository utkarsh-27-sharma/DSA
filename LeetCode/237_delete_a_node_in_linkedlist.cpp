class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* nodeNext = node->next;
        int savedNextData = node->next->val;
        nodeNext->val = node->val;
        node->val = savedNextData;
        node->next = nodeNext->next;
        delete nodeNext;
    }
};
// https://leetcode.com/problems/delete-node-in-a-linked-list/
