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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr&&head->next==nullptr){
            return  head;
        }
        ListNode*temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        int n=count/2;
        int c=0;
       //ut<<n<<" ";
            ListNode*curr=head;
            while(curr&&c<n){
                curr=curr->next;
                c++;
            }
            head=curr;
            return head;
    }
};