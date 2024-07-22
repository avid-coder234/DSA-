Node* deleteMiddle(Node* head){
    if(head == NULL || head->next == NULL)return NULL;
    Node* slow = head;
    Node* fast = head;
    fast = fast->next->next;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
    }
    slow ->next = slow->next->next;
    return head;
}



class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) return NULL; // Check edge cases

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL; // To keep track of the node before the middle

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node
        prev->next = slow->next;

        return head;
    }
};
