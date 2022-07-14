#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX 5
//cSpell:disable

struct ktp{
    char nama[50];
    int usia;
};

typedef struct{
    struct ktp data[MAX];
    int head;
    int tail;
}Queue;

Queue q;

void CreateQueue(){
    q.head=q.tail=-1;
}

int isEmpty(){
    if(q.tail == -1)
        return 1;
    else
        return 0;
}

int isFull(){
    if(q.tail == MAX-1)
        return 1;
    else
        return 0;
}

void Enqueue(int usia, char nama[50]){
    if(isEmpty() == 1){
        q.head = q.tail = 0;
        q.data[q.tail].usia = usia;
        strcpy(q.data[q.tail].nama, nama);
    }else if(isFull() == 0){
        q.tail++;
        q.data[q.tail].usia = usia;
        strcpy(q.data[q.tail].nama, nama);
    }
}

void Dequeue(){

    for(int i = q.head; i <= q.tail - 1; i++){
        q.data[i].usia = q.data[i + 1].usia;
        strcpy(q.data[i].nama, q.data[i + 1].nama);
    }
    q.tail--;

    if(isEmpty()){
        q.head = q.tail = -1;
    }
}

void Clear(){
    q.head = q.tail = -1;
    printf("CLEAR");
}

void Tampil(){
    printf("Data Dalam Queue: \n");

    if(!isEmpty()){
        for(int i = q.head; i <= q.tail; i++){
            printf("[%s, %d] ", q.data[i].nama, q.data[i].usia);
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
    int usia;
    char nama[50];

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
            printf("Masukkan Data:\nMasukan Nama : ");scanf("%s", &nama);
            printf("\nMasukan Usia : ");scanf("\n%i", &usia);
            Enqueue(usia,nama);
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