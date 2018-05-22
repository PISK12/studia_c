#include <stdio.h>
#include <stdlib.h>

struct Node{
    double value;
    struct Node *lower;
};

struct Node *top=NULL;

void push(double value){
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->value=value;
    node->lower=top;
    top=node;
}


double pop(){
    double value=top->value;
    struct Node *lower=top->lower;
    free(top);
    top=lower;
    return value;
}


int main(){
    push(5);
    push(4);
    printf("%lg ",pop());
    printf("%lg ",pop());
}
