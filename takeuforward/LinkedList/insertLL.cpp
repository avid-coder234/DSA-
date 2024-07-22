Node* insertHead(Node* head,int val)
{
    Node* temp = new Node(val,head);
    return temp;
}

class Solution {
  public:
    Node* insertAtEnd(Node* head, int x) {

        /* PHELE CASE AGR head me element nahi hai toh 
           fir hum direct new Node use krke naya node banayegnge*/
        if (head == NULL) {
            return new Node(x);
        }s

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        Node* newNode = new Node(x);
        temp->next = newNode;
        return head;
    }
};

Node* insertPosition(Node* head,int el,int k)
{
    // Yaha pe Koi element nahi hai 
    if(head == NULL)
    {
        if(k == 1)
        {
            return new Node(el);
        }
        else 
        {
            return head;
        }
    }
    // agr hum insertion sabse pehele pe kr rhe hai
    if(k == 1)
    {
        return new Node(el,head);
    }
    // Insertion at any Kth position
    int count = 0;
    Node* temp = head;
    while(temp ! = NULL)
    {
        count++;
        /*Hum isme k-1 pe jake jo newNode hai uska next to temp k next pe point krenge
        aur fir temp ka next ko newNode pe point krvayenge

        2 ----- 4
         \     /
          \   /  
           \ /
            3   
        */
        if(count == k-1)
        {
            Node* newNode = new Node(el,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}


insertBeforeValue(Node* head,int el,int val)
{
    if(head == NULL)
    return NULL;
    if(head->data == el)
    return new Node(val,head);

    Node* temp = head;
    while(temp->next != NULL)
    {
        if(temp->next->data == el)
        {
            Node* newNode = new Node(val,temp->next);
            temp->next  = newNode;
            break;
        }
    }
    return head;
}