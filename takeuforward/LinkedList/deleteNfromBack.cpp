
    /* 
    Isme phele fast pointer ko hum k steps aage leke jaenge
    aur fir hum slow pointer aur start se chalayenge
    toh hoga yeh ki slow pointer us node k pehele wale node pe aayega fir use rmove kr dena
    */


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        // If fast reached the end, we need to remove the head
        if (fast == nullptr)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Move both fast and slow until fast reaches the end
        while (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node from end
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp; // Use delete instead of free

        return head;
    }
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode(0, head);
        ListNode* dummy = res;

        for (int i = 0; i < n; i++) {
            head = head->next;
        }

        while (head != nullptr) {
            head = head->next;
            dummy = dummy->next;
        }

        dummy->next = dummy->next->next;

        return res->next;        
    }
};