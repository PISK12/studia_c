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
    double value;
    while (scanf("%lg",&value)==1){
        push(value);
    }
    while (top!=NULL){
        printf("%lg ",pop());
    }
}
