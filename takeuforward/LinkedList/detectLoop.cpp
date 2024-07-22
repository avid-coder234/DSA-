/*
Brute force me Map data structure use krenege 
aur usme Node and int ko store krnege fir traverse krenge 
pure LL me aur check bhi krenge ki vapas koi node aa to nahi rha hai
*/

/*
Tortoise and Hare Algorithm
ye wala algo mid of LL nikalne me kaam aaya tha 
isme ye hoga ki agr loop rha toh fast aur slow same 
node pe aa jayenge 
*/


bool detectCycle(Node *head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)return true;
    }
    return false;
}