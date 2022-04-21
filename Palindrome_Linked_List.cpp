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
   ListNode* reverseList(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* curr , *prev=NULL;
        while(head!=NULL)
        {
            curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
            return true;
        ListNode* slow=head , *fast = head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* revPtr = slow->next;
        slow->next = NULL;
        revPtr = reverseList(revPtr);
        while(revPtr!=NULL)
        {
            if(head->val != revPtr->val)
                return false;
            head = head->next;
            revPtr = revPtr->next;
        }
        return true;
    }
};
