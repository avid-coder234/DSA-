int findLength(Node* slow,Node* fast)
{
    int count = 1;
    fast = fast->next;
    while(fast != slow)
    {
        count++;
        fast = fast->next;
    }
    return count;
}



int lengthOfLoop(Node *head) {
    Node* fast = head;
    Node* slow = head;
    while(fast != nullptr && slow != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
        {
            return findLength(fast,slow);
        }  
    }
    return 0;
}
