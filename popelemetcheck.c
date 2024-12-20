// Write a function to return the top element of the stack without popping it.
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // Return an appropriate value or handle the error as needed
    }
    return stack->array[stack->top];
}
