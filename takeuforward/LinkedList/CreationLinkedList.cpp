class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1;i<arr.size();i++)
        {
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }
};


// Traversal in Linked List
// TC = O(n)

Node* head = new Node(arr[0]);
Node* temp = head;
while(temp!=NULL)
{
    cout << temp->data;
    temp = temp->next;
}
