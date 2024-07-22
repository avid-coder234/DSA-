Node* oddEvenList(Node* head)
{
	Node* odd = head;
    Node* even = head->next;
    Node* evenHead = head->next;

    while(even != nullptr && even->next != nullptr)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}