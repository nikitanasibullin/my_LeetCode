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
        int cnt=0;
        ListNode* tmp=head;
        while(tmp!=nullptr){
            tmp=tmp->next;
            ++cnt;
        }
        cnt=cnt/2;
        int i=0;
        tmp=head;
        while(i!=cnt){
            ++i;
            tmp=tmp->next;
        }
        return tmp;
    }
    
};
