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
    ListNode* reverseList(ListNode* head) {
        ListNode* prevs=nullptr;
        ListNode* now=head;
        ListNode* tmp=nullptr;
        while(now!=nullptr){
            tmp=now->next;
            now->next=prevs;
            prevs=now;
            now=tmp;

        }
        return prevs;
    }
};
