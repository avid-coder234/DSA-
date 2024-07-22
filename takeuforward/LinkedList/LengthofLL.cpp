// Time Complexity - O(n);
int length(Node *head)
{
	int count=0;
    Node* temp = head;
    while(temp!=nullptr)
    {
        count++;
        temp = temp->next;

    }
    return count;
}