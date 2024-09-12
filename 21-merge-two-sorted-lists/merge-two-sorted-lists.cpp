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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     ListNode* res;
     if (!list1) return list2;  // If list1 is NULL, return list2
        if (!list2) return list1;  // If list2 is NULL, return list1
if(list1->val < list2->val)
{
    res=list1;
      res->next=mergeTwoLists(list1->next,list2);
   
}
else {
      res=list2;
      res->next=mergeTwoLists(list2->next,list1);
    
}
return res;
    }
};