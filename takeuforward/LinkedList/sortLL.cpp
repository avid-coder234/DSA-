// List jab merge hongi toh unhe sort krne k liye ye function likha hai

Node* sortTwoLists(Node* first, Node* second)
{
    Node* t1 = first;
    Node* t2 = second;

    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(t1 != NULL && t2 != NULL)
    {
        if(t1->data < t2->data){
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else{
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }
    if(t1)
    {
        temp->next = t1;
    }
    else
    {
        temp->next = t2;
    }
    return dummy->next;
}

// Ye mid element ko niklane k liye use kiya 
Node* middleElement(Node* head)
{
	Node* slow = head;
    // ye isliye liye taki even me dikkat na aaye list ko break krne me 
	Node* fast = head->next;

	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
// Yaha pe Merge Sort lagaya hai 
Node *sortLL(Node *head)
{
    if(head == NULL || head->next == NULL)return head;

	Node* middle = middleElement(head);
	Node* right = middle->next;
	middle->next = nullptr;
	Node* left = head;

	left = sortLL(left);
	right = sortLL(right);

	return sortTwoLists(left,right);
}
