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
        ListNode* third;
        ListNode* last;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if((list1->val)>(list2->val))
           {
            third=list2;
            list2=list2->next;
           }
           else
           {
            third=list1;
            list1=list1->next;
           }
         last=third;  
        while(list1!=nullptr && list2!=nullptr)
        {
           if((list1->val)>(list2->val))
           {
            last->next=list2;
            list2=list2->next;
           }
           else
           {
            last->next=list1;
            list1=list1->next;
           }
           last=last->next;
        }
        if(list2!=nullptr)
           last->next=list2;
        else if(list1!=nullptr)
           last->next=list1;   
        return third;
    }
};

        