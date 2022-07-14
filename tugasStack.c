//cSpell:disable
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

struct ktp{
    char nama[50];
    int usia;
};

typedef struct{
    int top;
    struct ktp data[MAX];
}stack;

void createEmpty(stack *s);
void push(stack *s, int usia, char nama[50]);
void pop(stack *s);
int IsEmpty(stack s);
int IsFull(stack s);
void peek(stack s);


int main(){
    stack s;
    int usia;
    char nama[50];
    int pilih;
    createEmpty(&s);
    pilih = 0;
    while(pilih != 5){
        if(IsEmpty(s) == 1){
            puts("\nStack is empty\n");
        }else if((IsEmpty(s) == 0)&&(IsFull(s) == 0)){
            printf("               TOP\n");
            printf("Stack data = \n");
            for(int i = s.top; i>=0; i--){
                printf("[%s ", s.data[i].nama);
                printf(",%d]\n", s.data[i].usia);
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
                    printf("\nNama :");
                    scanf(" \n%s", &nama);
                    printf("Usia :");
                    scanf("%d", &usia);
                    push(&s, usia,nama);
                }
                system("cls");
                break;
            case 2:
                printf("\nTop data is: %s, %d \n\n", s.data[s.top].nama,s.data[s.top].usia);
                pop(&s);
                system("pause");
                system("cls");
                break;
            case 3:
                if(IsEmpty(s)){
                    puts("\nStack Empty");
                }else{
                    peek(s);
                    printf("\n");
                }
                system("pause");
                system("cls");;
                break;
            case 4:
                while(IsEmpty(s)==0){
                    peek(s);
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
void push(stack *s, int usia, char nama[50]){
    s->top = s->top + 1;
    s->data[s->top].usia = usia;
    strcpy(s->data[s->top].nama, nama);
}
void pop(stack *s){
    s->top = s->top - 1;
}
void peek(stack s){
    printf("    Top Data\n");
    printf("%s ", s.data[s.top].nama);
    printf("%d", s.data[s.top].usia);
}
int IsEmpty(stack s){
    if(s.top == -1){
        return 1;
    }else{
        return 0;
    }
}
int IsFull(stack s){
    if(s.top == MAX -1){
        return 1;
    }else{
        return 0;
    }
}
