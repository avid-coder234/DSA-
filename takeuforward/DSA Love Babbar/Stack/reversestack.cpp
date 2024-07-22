void solve(stack<int>& myStack, int x)
{
        if(myStack.empty()){

        myStack.push(x);
        return;
    }
    int num=myStack.top();
    myStack.pop();
     
    solve(myStack,x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;

}

void reverseStack(stack<int> &stack) {
    //BASE CASE
    if(stack.empty()){
        return ;
    }
    // Storing the top element 
    // ans inserting it at the bottom
    int num=stack.top();
    stack.pop();
    reverseStack(stack);
    pushAtBottom(stack,num);

}