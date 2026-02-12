class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr)
            return nullptr;
        
        ListNode* temp = head;
        int count = 0;
        
     
        while(temp) {
            temp = temp->next;
            count++;
        }
        
        int middle = count / 2;
        
        ListNode* curr = head;
        

        for(int i = 0; i < middle - 1; i++) {
            curr = curr->next;
        }
        
        
        curr->next = curr->next->next;
        
        return head;
    }
};
