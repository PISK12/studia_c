#include <stdio.h>
#include <stdlib.h>


struct Node{
    double value;
    struct Node *lower;
};

struct Stack{
    struct Node *top;
};

struct Stack *alloc(){
    struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack));
    stack->top=NULL;
    return stack;
};

void clear(struct Stack *stack){
    while (stack->top){
        struct Node *node=stack->top;
        stack->top=node->lower;
        free(node);
    }
}

void push(struct Stack *stack,double value){
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->value=value;
    node->lower=stack->top;
    stack->top=node;
}


double pop(struct Stack *stack){
    struct Node *node=stack->top;
    double value=node->value;
    stack->top=node->lower;
    free(node);
    return value;
}


int main(){
    struct Stack *stack=alloc();
    double value;
    while (scanf("%lg",&value)==1){
        push(stack,value);
    }
    clear(stack);
    while (stack->top){
        printf("%lg ",pop(stack));
    }
}
