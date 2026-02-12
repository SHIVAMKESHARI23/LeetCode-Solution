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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        int n=count/2;
        int m=0;
        ListNode*curr=head;
        while(curr&&m<n-1){
            curr=curr->next;
            m++;
        }
        // cout<<curr->val<<" ";
        curr->next=curr->next->next;
        return head;
    }
};