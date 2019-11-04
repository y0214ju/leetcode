/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *newList = nullptr;
        if (l1 == nullptr && l2 != nullptr) {return l2;}
        if (l2 == nullptr && l1 != nullptr) {return l1;}
        if (l1 == nullptr && l2 == nullptr) {return nullptr;}
        
        
        if (l1-> val > l2-> val) {
            newList= l2;
            l2 = l2 -> next;
        }
        else {
            newList = l1;
            l1 = l1 -> next;
        }   
        
        ListNode *head = newList;
        while(l1 != nullptr && l2 != nullptr){
            if (l1-> val > l2->val){
                newList -> next = l2;
                l2 = l2 -> next;
            }
            else {
                newList -> next = l1;
                l1 = l1 -> next;
            }
            newList = newList -> next;
        }
        
        ListNode *left = nullptr;
        if (l1 == nullptr) {
            left = l2;
        }
        
        else {
            left = l1;
        }
        
        while (left != nullptr) {
            newList -> next = left;
            left = left -> next;
            newList = newList -> next;
        }
        
 return head;   
}
};
