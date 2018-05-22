#include <stdio.h>
#include <stdlib.h>

struct Matrix{
    int rows, columns;
    double *elements;
};


struct Matrix *alloc(int rows, int columns){
    struct Matrix *matrix=(struct Matrix *)malloc(sizeof(struct Matrix));
    matrix->rows=rows;
    matrix->columns=columns;
    matrix->elements=(double *)malloc(rows*columns*sizeof(double));
    return matrix;
}

void clear(struct Matrix *matrix){
    free(matrix->elements);
    free(matrix);
}

double get(struct Matrix *matrix, int row, int columns){
    return matrix->elements[row*matrix->columns+columns];
}

void set (struct Matrix *matrix, int row, int columns,double value){
    matrix->elements[row*matrix->columns+columns]=value;
}

void scan(struct Matrix *matrix){
    for(int row=0;row<matrix->rows;++row){
        for(int column=0;column<matrix->columns;++column){
            double element;
            scanf("%lg",&element);
            set(matrix,row,column,element);
        }
    }
}

void print(struct Matrix *matrix){
    for(int row=0;row<matrix->rows;++row){
        for(int column=0;column<matrix->columns;++column){
            printf("%lg ",get(matrix,row,column));
        }
        printf("\n");
    }
}


int main(){
    int max_row=2;
    int max_column=2;
    struct Matrix *matrix=alloc(max_row,max_column);
    scan(matrix);
    print(matrix);
    clear(matrix);



    return 0;
}
