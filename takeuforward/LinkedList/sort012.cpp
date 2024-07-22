/*
Brute Force Approach In the first pass count the number of 0,1,2 
Then in the next Pass if add the 0,1,2 in the temp 

*/



Node* sortList(Node *head){

    // 3 dummy pointer banaya hai aur fir link ko rearrange kiya hai 
    if(head == nullptr || head->next == nullptr)
    return head;
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;

    Node* temp = head;

    while(temp != nullptr)
    {
        if(temp->data == 0)
        {
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1)
        {
            one->next = temp;
            one = temp;
        }
        else
        {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    zero->next = (oneHead->next) ? (oneHead->next) : (twoHead->next);
    one->next = twoHead->next;
    two->next = nullptr;

    Node* newHead = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return newHead; 
}