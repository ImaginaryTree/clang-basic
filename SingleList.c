#include <stdio.h>
#include <stdlib.h>
//cSpell:disable
//Deklarasi pointer dengan tine data struct node
typedef struct node *address;
// Isi Dari Struct

struct node {
    int isi;
    address next;
};

//inisialisasi header prosedur
address createNode (int nilai) ;
address insertfirst (address head, int nilai);
address insertlast (address head, int nilai);
address insertafter (address head, int nilai, int prev_nilai);
address insertbefore (address head, int nilai, int next_nilai);
address deletefirst (address head) ;
address deletelast (address head) ;
address deleteafter (address head, int nilai);
void tampilnilai (address head) ;
address count (address head) ;
address dispose (address head) ;

main (){
    int pilih, val, vall;
    address head = NULL;
    while (1) {
        system("cls");
        tampilnilai (head);
        printf("\n===============LINKED LIST===============\n");
        printf(" 1. Insert First\n");
        printf(" 2. Insert Last\n") ;
        printf(" 3. Insert After\n");
        printf(" 4. Insert Before\n");
        printf(" 5. Delete First\n");
        printf(" 6. Delete Last\n");
        printf(" 7. Delete After\n");
        printf(" 8. Hitung Jumlah Node \n");
        printf(" 9. Hapus Keseluruhan Node\n");
        printf(" 10. Keluar\n");
        printf("Pilihan Anda = ");
        scanf("%d",&pilih);

        switch (pilih){
            case 1 :
            {
                printf ("Masukkan nilai :");
                scanf("%d", &val);
                head = insertfirst (head,val);
                system ("cls");
                break;
            }
            case 2:
            {
                printf ("Masukkan nilai");
                scanf("%d", &val);
                head = insertlast (head,val);
                system ("cls");
                break;
            }
            case 3:
            {
                printf ("Masukkan nilai");scanf("%d", &val);
                printf("ingin memasukan nilai tersebut sebelum = ");
                scanf("%d", &vall);
                head = insertafter (head,val,vall);
                system ("cls");
                break;
            }
            case 4:
            {
                printf ("Masukkan nilai");scanf("%d", &val);
                printf("ingin memasukan nilai tersebut sebelum = ");
                scanf("%d", &vall);
                head = insertbefore (head,val,vall);
                system("cls");
                break;
            }
            case 5:
            {
                head = deletefirst (head);
                system("cls");
                break;
            }
            case 6:
            {
                head = deletelast(head);
                system ("cls");
                break;
            }
            case 7:
            {
                printf("masukan nilai yang ingin dihapus = ");
                scanf("%d",&val);
                head = deleteafter (head,val);
                system ("cls");
                break;
            }
            case 8:
            {
                head = count(head);
                system("pause");
                break;
            }
            case 9:
            {
                head = dispose(head);
                system ("pause");
                break;
            }
            case 10:
            {
                exit(1);
            }
            default :
            {
                printf("pilihan tersebut belum tersedia");
                break;
            }
        }
    }
    return 0;
}

//fungsi. untuk membuat simpul haru
address createNode (int nilai) {
    address p;
    // alokasi node
    p = (address)malloc (sizeof (struct node));
    p->isi = nilai;
    p->next = NULL;
    return (p);
}

//fungsi. untuk menambahkan simpul di paling njung kiri. (paling awal)
address insertfirst (address head, int nilai) {
    address new_node = createNode(nilai);
    new_node->next = head;
    head = new_node;
    return (head);
}

//fungsi untuk menambahkan simpul di paling ujung kanan (paling akhir)
address insertlast (address head, int nilai){
//iterasi mencari node terakhir
    address tail = head;
    while (tail-> next != NULL) {
        tail = tail->next;
    }

    //kesimpulan baru
    address new_node = createNode (nilai);
    tail -> next = new_node;
    return(head);
}

//fungsi, menambahkan simpul setelah simpul tertentu
address insertafter(address head, int nilai, int prev_nilai) {
    //mencari simpul sebelumnya,mulai dari simpul pertama
    address cursor = head;
    while (cursor->isi != prev_nilai)
    {
        cursor = cursor->next;
    }
    address new_node = createNode(nilai);
    new_node -> next = cursor->next;
    cursor->next = new_node;
    return(head);
}

//fungsi, menambahkan simpul sebelum simpul tertentu
address insertbefore (address head, int nilai, int next_nilai){

    if (head->isi == next_nilai){
        head = insertfirst (head, nilai);
    }else {
        address cursor, prevcursor;
        cursor = head;
        do{
            prevcursor = cursor;
            cursor = cursor->next;
        }while (cursor->isi != next_nilai);
        address new_node = createNode (nilai);
        new_node->next = cursor;
        prevcursor->next = new_node;
    }return(head);
}

//mengharus simpul paling kiri
address deletefirst (address head) {
    if (head==NULL) {
        return;
    }
    address first = head;
    head = head->next;
    first->next = NULL;
    free(first);
    return(head);
}

//megharus simpul paling kanan
address deletelast (address head){
    if (head == NULL){
        return;
    }
    address tail = head;
    address prevtail = NULL;
    while (tail->next != NULL){
        prevtail = tail;
        tail = tail->next;
    }
    prevtail->next = NULL;
    free(tail);
    return(head);
}

//menghanus node diantara dua node
address deleteafter(address head, int nilai){
address cursor = head;
while (cursor != NULL){
    if (cursor->next->isi = nilai){
        break; //keluar dari ikerasi
    } cursor = cursor->next;
}
    if (cursor != NULL){
        address tmp = cursor->next;
        cursor->next = tmp->next;
        tmp->next = NULL;
        free(tmp);
}return(head);
}

void tampilnilai (address head){
    address n = head;
    printf ("Daftar Nilai linked list :\n");
    while (n != NULL){
        printf ("[%d]",n->isi);
        n = n->next;
    };
    printf ("\n");
}

//menghitung jumlah node
address count(address head){
	int count = 0;
	struct node *p;
	p = head;
    while (p !=NULL)
    {
        p = p->next;
        count++;
    }
    printf("jumlah node : %d\n",count);
    return(head);
}

//menghapus Kessluruhan Node Pada List
address dispose(address head){
    if(head == NULL){
        return;
    }
    while(head !=NULL)
    {
        address tmp = head;
        head = head->next;
        tmp->next = NULL;
        free(tmp);
    }
    printf("semua node telah dihapus\n");
    return(head);
}