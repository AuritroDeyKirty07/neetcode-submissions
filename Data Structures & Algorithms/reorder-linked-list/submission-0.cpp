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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next=NULL;
        ListNode* curr = second;
        ListNode* prev = NULL;
        while(curr!=NULL){
            ListNode* nxt = curr->next;
            curr->next=prev;
            prev= curr;
            curr=nxt;
        }
        second = prev;
        ListNode* temp1= head;
        ListNode* temp2 = second;
        while(temp2!=NULL){
            ListNode* nxt1 = temp1->next;
            ListNode* nxt2 = temp2->next;

            temp1->next=temp2;
            temp2->next=nxt1;
            temp1=nxt1;
            temp2=nxt2;
        }
    }
};
