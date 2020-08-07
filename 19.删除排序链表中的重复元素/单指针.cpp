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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* L = head;
        do
        {
            if(L->next->val != L->val)
                L = L->next;
            else
                L->next = L->next->next;
        }while(L->next != NULL);
        return head;
    }
};