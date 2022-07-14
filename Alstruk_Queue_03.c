#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

struct array
{
    char *name;
    int age;
};


typedef struct{
    struct array data[MAX];
    int head;
    int tail;
}Queue;

Queue q;

void CreateQueue(){
    q.head = q.tail = -1;
}

int isEmpty(){
    if(q.tail == -1)
        return 1;
    else
        return 0;
}

int isFull(){
    if(q.tail == MAX - 1)
        return 1;
    else
        return 0;
}

Enqueue(char *name, int age){
    if(isEmpty() == 1){
        q.head = q.tail = 0;
        q.data[q.tail].name = name;
        q.data[q.tail].age = age;
    }else if(isFull() == 0){
        q.tail++;
        q.data[q.tail].name = name;
        q.data[q.tail].age = age;
    }
}

int Dequeue(){
    int e = q.data[q.head].name = q.data[q.head].age;

    for(int i = q.head; i <= q.tail - 1; i++){
        q.data[i].name = q.data[i + 1].name;
        q.data[i].age = q.data[i + 1].age;
    }
    q.tail--;

    if(isEmpty()){
        q.head = q.tail = -1;
    }

    return e;
}

void Clear(){
    q.head = q.tail = -1;
    printf("CLEAR");
}

void Tampil(){
    printf("Data Dalam Queue: \n");

    if(!isEmpty()){
        for(int i = q.head; i <= q.tail; i++){
            printf("[%s, %d] ", q.data[i].name, q.data[i].age);
        }
    }else{
        printf("[ ]");
    }

    printf("\nHead: %d", q.head);
    printf("\nTail: %d", q.tail);
}

int main()
{
    int pil;
    char name[20];
    int age;

    bool stop = false;
    CreateQueue();

    while(!stop){
        system("cls");
        Tampil();
        printf("\n\n");
        printf("==============================\n");
        printf("=        PROGRAM QUEUE       =\n");
        printf("==============================\n");
        printf("=   1. ENQUEUE               =\n");
        printf("=   2. DEQUEUE               =\n");
        printf("=   3. CLEAR                 =\n");
        printf("=   4. EXIT                  =\n");
        printf("==============================\n");
        printf("Masukkan Pilihan: ");scanf("%i", &pil);
        if(pil == 1){
            printf("Enter Data\n");
            printf("Name: "); scanf(" %s", &name);
            printf("Age: "); scanf("%d", &age);
            Enqueue(name, age);
        }else if(pil == 2){
            Dequeue();
        }else if(pil == 3){
            Clear();
        }else{
            stop = true;
        }
    }

    return 0;
}