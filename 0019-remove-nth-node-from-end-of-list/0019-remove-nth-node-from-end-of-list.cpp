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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode*dummy=new ListNode(0);
       dummy->next=head;
        ListNode*dummy2=head;
       int size=0;
        while(dummy2!=nullptr){
            dummy2=dummy2->next;
            size++;

        }
        n=size-n;
        int count=0;
        ListNode*curr=dummy;
        while(curr!=nullptr&&count<n){
            curr=curr->next;
            count++;
        }
        ListNode*temp=curr->next;
        curr->next=curr->next->next;
        temp->next=nullptr;
        delete temp;
        ListNode*newhead=dummy->next;
        delete dummy;
        return newhead;
    }
};