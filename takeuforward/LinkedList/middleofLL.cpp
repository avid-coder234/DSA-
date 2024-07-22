/*
Brute force 
traverse the whole LL and calculate the length of the LL
and store the mid val in another variable 
then traverse the LL from head to the mid and then return 
temp 
*/

/*
The down approach is Tortaise and Hare Algorithm
here we will have 2 pointers slow and fast and move 
the slow to slow->next and fast to fast->next->next
and while loop 
odd length - fast will point to null
even lenght - fast->next will point to null


*/


Node *findMiddle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}