class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* head = list1;
        ListNode* head2 = list2;
        ListNode* tail = NULL;
        ListNode* originalhead = NULL;

        if(head == NULL) return head2;
        if(head2 == NULL) return head;

        while(head != NULL && head2 != NULL) {

            if(head->val < head2->val) {

                if(originalhead == NULL) {
                    originalhead = head;
                    tail = head;
                } else {
                    tail->next = head;
                    tail = head;
                }

                head = head->next;   

            } else {

                if(originalhead == NULL) {
                    originalhead = head2;
                    tail = head2;
                } else {
                    tail->next = head2;
                    tail = head2;
                }

                head2 = head2->next; 
            }
        }

        
        if(head != NULL) {
            tail->next = head;
        } else {
            tail->next = head2;
        }

        return originalhead;
    }
};
