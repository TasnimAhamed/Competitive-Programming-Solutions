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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head1 = l1, *head2 = l2;
        ListNode *newHead = NULL, *temp;

        int carry = 0, newVal, val;

        while(head1 && head2){

            newVal = head1 -> val + head2 -> val;
            
            val = (newVal + carry) % 10;
            carry = (newVal + carry) / 10;

            ListNode *newNode = new ListNode(val);

            if( newHead == NULL){
                newHead = newNode;
                temp = newHead;
            }
            else{
                temp -> next = newNode;
                temp = temp -> next;
            }

            head1 = head1 -> next;
            head2 = head2 -> next;


        }

        while(head1){

            newVal = head1 -> val;
            
            val = (newVal + carry) % 10;
            carry = (newVal + carry) / 10;

            ListNode *newNode = new ListNode(val);

            if( newHead == NULL){
                newHead = newNode;
                temp = newHead;
            }
            else{
                temp -> next = newNode;
                temp = temp -> next;
            }

            head1 = head1 -> next;

        }

        while(head2){

            newVal = head2 -> val;
            
            val = (newVal + carry) % 10;
            carry = (newVal + carry) / 10;

            ListNode *newNode = new ListNode(val);

            if( newHead == NULL){
                newHead = newNode;
                temp = newHead;
            }
            else{
                temp -> next = newNode;
                temp = temp -> next;
            }

            head2 = head2 -> next;

        }

        if( carry != 0){
            ListNode *newNode = new ListNode(carry);

            if( newHead == NULL){
                newHead = newNode;
                temp = newHead;
            }
            else{
                temp -> next = newNode;
                temp = temp -> next;
            }
        }

        return newHead;

    }
};

/*

    Another Apporace

    class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode *newHead = new ListNode();
            ListNode *temp = newHead;

            int carry = 0;

            while(l1 || l2 || carry){

                int digit1 = (l1 != NULL) ? l1->val : 0;
                int digit2 = (l2 != NULL) ? l2->val : 0;

                int total = digit1 + digit2 + carry;
                int val = total % 10;
                carry = total / 10;

                ListNode *newNode = new ListNode(val);

                temp -> next = newNode;
                temp = temp -> next;

                l1 = (l1 != NULL) ? l1->next : l1;
                l2 = (l2 != NULL) ? l2->next : l2;

            }
            
            return newHead->next;

        }
    };

*/