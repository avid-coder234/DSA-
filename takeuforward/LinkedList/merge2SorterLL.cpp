/*
BRUTE Force - We can store the elements of both the LL 
in the array and then we can sort the array and then create a 
new LL and return the LL 

TC - n1+n2+nlogn+n
SC - n + n
*/

/*
In this approach Hum 2 pointer dono LL k liye 
aur fir jab tak koi ek LL katam nahi ho jata tab 
tak traverse krenge 
aur Is traverse me check krenge ki konsa LL k element 
chota hai aur uska Link temp pointer node se krdenge 

AT the end Jo bhi Node bachta hai usko hum temp->next se connect kr denge 
*/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* t1 = first;
    Node<int>* t2 = second;

    Node<int>* dummy = new Node<int>(-1);
    Node<int>* temp = dummy;

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