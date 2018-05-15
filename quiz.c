#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Question{
    int a,b;
};

struct Question draw(){
        struct Question q;
        q.a = 1 + rand() % 10;
        q.b = 1 + rand() % 10;
        return q;
}

int solution(const struct Question *q){
    return q->a * q->b;
}

int equal(const struct Question *q1, const struct Question *q2){
    return q1->a==q2->a && q1->b==q2->b || q1->a==q2->b && q1->b==q2->a;
}

void print(const struct Question *q){
    printf("%i %i ", q->a, q->b);
}

void fill(struct Question qs[],int n){
    for (int i = 0; i < n; ++i) {
        int h;
        do{
            h=0;
            qs[i]=draw();
            int s=0;
            for(int w = 0; w < i; ++w){
                if(equal(&qs[i],&qs[w])){
                    h=1;
                }
            }
        }while(h);
    }
}

void sort(struct Question qs[],int n){
    int u=n;
    while(u){
        u=0;
        for(int i=0;i+1<n;++i){
            if(solution(&qs[i+1]<solution(&qs[i]))){
                struct Question q=qs[i];
                qs[i]=qs[i+1];
                qs[i+1]=q;
                u=1;
            }
        }
    }
}

void ask(struct Question qs[],int n){
    for (int i = 0; i < n; ++i) {
        int r;
        do {
            print(&qs[i]);
            scanf("%i", &r);
        }while (r != solution(&qs[i]));
    }
}

int main() {
    srand(time(NULL));
    int lenght=10;
    struct Question qs[lenght];
    fill(qs,lenght);
    sort(gs,lenght);
    ask(qs,lenght);
    return 0;
}
