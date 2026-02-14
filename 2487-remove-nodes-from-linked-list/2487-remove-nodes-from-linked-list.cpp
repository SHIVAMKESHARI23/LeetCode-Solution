class Solution {
public:
    
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) {
        
        if(!head) return head;

        head = reverse(head);

        ListNode* curr = head;
        int maxVal = curr->val;

        while(curr && curr->next) {

            if(curr->next->val < maxVal) {
                curr->next = curr->next->next;   
        
            }
            else {
                curr = curr->next;
                maxVal = curr->val;
            }
        }

        return reverse(head);
    }
};
