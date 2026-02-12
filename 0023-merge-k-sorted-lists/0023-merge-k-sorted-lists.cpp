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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())return nullptr;
        vector<int>arr;
        for(ListNode*head:lists){
            ListNode*temp=head;
            while(temp){
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(arr.begin(),arr.end());
        ListNode*head=nullptr;
        ListNode*tail=nullptr;
        for(int i=0;i<arr.size();i++){
            ListNode*newnode=new ListNode(arr[i]);
            if(head==nullptr){
                head=newnode;
                tail=newnode;
            }else{
                tail->next=newnode;
                tail=newnode;
            }
            
        }
        return head;
    }
};