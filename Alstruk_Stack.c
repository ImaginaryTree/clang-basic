//cSpell:disable
#include<stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
    int top;
    int data[MAX];
}stack;

void createEmpty(stack *s);
void push(stack *s, int x);
void pop(stack *s);
int IsEmpty(stack s);
int IsFull(stack s);
int peek(stack s);


int main(){
    stack s;
    int input;
    int pilih;
    createEmpty(&s);
    pilih = 0;
    while(pilih != 5){
        if(IsEmpty(s) == 1){
            puts("\nStack is empty\n");
        }else if((IsEmpty(s) == 0)&&(IsFull(s) == 0)){
            printf("               TOP\n");
            printf("Stack Values = ");
            for(int i = s.top; i>=0; i--){
                printf("[%d]", s.data[i]);
            }
            printf("\n\n");
        }else{
            puts("\nStack is Full\n");
        }
        puts("--------------------");
        puts("|    MENU UTAMA    |");
        puts("--------------------");
        puts("1. add data");
        puts("2. pop data");
        puts("3. show top data");
        puts("4. empty data");
        puts("5. quit");
        printf("Your Choice = ");
        scanf("%d", &pilih);

        switch(pilih){
            case 1:
                if(IsFull(s) == 1){
                    puts("\nFull Stack");
                }else{
                    printf("\nInsert data :");
                    scanf("%d", &input);
                    push(&s, input);
                }
                system("cls");
                break;
            case 2:
                printf("\nTop data is: %d \n\n", s.data[s.top]);
                pop(&s);
                system("pause");
                system("cls");
                break;
            case 3:
                if(IsEmpty(s)){
                    puts("\nStack Empty");
                }else{
                    printf("\n Top value: %d\n\n", peek(s));
                    printf("Real Top value: %d\n\n", s.data[4]);
                }
                system("pause");
                system("cls");;
                break;
            case 4:
                while(IsEmpty(s)==0){
                    printf("\npop : %d \n\n",peek(s));
                    pop(&s);
                }
                puts("\n Stack Sudah kosong\n");
                system("pause");
                system("cls");
                break;
            case 5:
                puts("\n        Trims       \n");
                exit(0);
                break;
        }
    }
    return 0;
}

void createEmpty(stack *s){
    s->top = -1;
}
void push(stack *s, int x){
    s->top = s->top + 1;
    s->data[s->top] = x;
}
void pop(stack *s){
    s->top = s->top - 1;
}
int peek(stack s){
    return s.data[s.top];
}
int IsEmpty(stack s){
    if(s.top == -1){
        return 1;
    }else{
        return 0;
    }
}
int IsFull(stack s){
    if(s.top == MAX){
        return 1;
    }else{
        return 0;
    }
}
