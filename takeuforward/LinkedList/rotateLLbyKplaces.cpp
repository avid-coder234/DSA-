// YE Fucntion banaya hai taki 
// hum vo node kon dekhe jiska next null kon point krega
Node* KthElement(Node* temp,int k)
{
     int count = 1;
     while(temp != NULL)
     {
          if(count == k)return temp;
          count++;
          temp = temp->next;
     }
     return temp;
}
Node *rotate(Node *head, int k) {
     if(head == NULL || k==0)return head;
     Node* tail = head;
     int length = 1;
     while(tail->next != NULL)
     {
          tail = tail->next;
          length+=1;
     }
     if(k%length == 0)return head;
     k = k % length;
     //ATTACH THE TAIL WITH HEAD;
     tail->next = head;
     
     Node* newNode = KthElement(head,length-k);
     head = newNode->next;
     newNode->next = NULL;
     return head;
}