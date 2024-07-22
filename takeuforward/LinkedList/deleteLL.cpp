Node* removeHead(Node* head)
{
    if(head == nullptr)return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head)
{
    if(head == NULL || head->next == NULL)return NULL;
    Node* temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr
}

Node* removeK(Node* head,int k)
{
    if(head == NULL)return NULL;
    if(k == 1)
    {
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    int count = 0;
    while(temp != NULL)
    {
        if(count == k)
        {
            prev->next = prev->next->next;
            free temp;
            break
        }
        prev = temp;
        temp = temp->next;

    }
}

Node* deleteEl(Node* head,int ele)
{
    if(head == nullptr)return nullptr;
    if(head->data == ele)
    {
        Node* temp= head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL)
    {
        if(temp->data == ele)
        {
            temp->next = temp->next->next;
            free temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

}