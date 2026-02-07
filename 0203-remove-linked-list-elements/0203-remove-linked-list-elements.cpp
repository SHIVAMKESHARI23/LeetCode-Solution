class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
   
        while(head != nullptr && head->val == val){
            ListNode* del = head;
            head = head->next;
            delete del;
        }
        
        ListNode* temp = head;
        ListNode* prev = nullptr;
        
        while(temp != nullptr){
            if(temp->val == val){
                ListNode* curr = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete curr;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        
        return head;   // return head, not temp
    }
};
