/*
Brute Force 
store the value of LL in a stack data structure and then 
again traverse the LL and put the data in LL

*/


Node* reverseLinkedList(Node *head)
{
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL)
    {
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}