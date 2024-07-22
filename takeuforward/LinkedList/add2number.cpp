Node *addTwoNumbers(Node *num1, Node *num2)
{
    /* Phele ek naya node bnao sum save krne k liye aur usme 
       aur uski value ko -1 rakho aur ek naya node curr banao
       jo traverse krne k liye use hoga*/
    Node* dummyNode = new Node(-1);
    Node* curr = dummyNode;
    /*temp1 aur temp2 given two LL ko traverse krne k liye hai*/
    Node* temp1 = num1;
    Node* temp2 = num2;
    int carry = 0;

    while(temp1 != nullptr || temp2 != nullptr)
    {
        /*sum me dono LL ki value save krna  aur fir 
          ye check krna ki carry generate hoga ki nahi*/
        int sum = carry;
        if(temp1) sum += temp1->data;
        if(temp2) sum += temp2->data;
        /*Ans node me value stored hai aur ans node ko value store krne 
        k liye rkhnege and curr ko pointer k tarah use krenge*/

        Node* ans = new Node(sum % 10);
        carry = sum / 10;

        curr->next = ans;
        curr = curr->next;
        //Ye dono LL ko traverse k liye hai 

        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;

    }
    // Agr carry final me bachta hai toh use node me link krdo
    if(carry)
    {

        Node* carr = new Node(carry);
        curr->next = carr;
    }
    return dummyNode->next;
}
