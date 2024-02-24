#include<stdio.h>
#include<conio.h>
#include<alloc.h>

Typedef struct CircularLL{
  int data;
  Struct CircularLL * next;
}node;

void createLL(node * head);
void displayLL(node * head);
int Countnode(node * head);
int Search(node * head, int key); //declare fun

void createLL(node * head){

  int n, i;
  node * l;
  L = head;
  printf(“\n\ tHow many node you want to create➔“);
  scanf(“ % d”, & n);
  for(i = 1; i <= n; i++){
    l -> next = (node *) malloc(sizeof(node));
    l = l -> next;
    printf(“\n\ tenter the value => “);
    scanf(“ % d”, & l -> data);
  }
  printf(“\n\ tValue insert Succuessfully...”);
  l -> next = head;
}

void displayLL(node * head){

  node * p;
  P = head;
  if(head -> next == head){
    printf(“\n\ t Lish empty...”);
  }
  else{
    P = head;
    do{
      P = p -> next;
      printf(“\t % d -> “, p -> data);
    }
    while (p -> next != head);
  }
}

int Countnode(node * head){
  int count = 0;
  node * p;
  P = head;
  While(p -> next != head){
    Count++;
    P = p -> next;
  }
  return count;
}
int Search(node * head, int key){
  int flag = 0;
  node * p;
  P = head;
  While(p -> next != head) {
    if(p -> next -> data == key){
      Flag = 1;
      break;
    }
    P = p -> next;
  }
  return flag;
}
node * Insert_first(node * head){
  node * newnode;
  newnode = (node * ) malloc(sizeof(node));
  printf(“\nenter the element you want to insert => “);
  scanf(“ % d”, & newnode -> data);
  if(head -> next == NULL){

    printf(“\n\ t % d insert successfully...”, newnode -> data);
    newnode -> next = head;
    head -> next = newnode;
  }
  else{
    newnode -> next = head -> next;
    head -> next = newnode;
    printf(“\n\ t % d inserted successfully...”, newnode -> data);
  }
  return head;
}
node * Insert_between(node * head){
  int val, flag;
  node * p, * newnode;
  displayLL(head);
  printf(“\n enter value after you want to insert➔“);
  scanf(“ % d”, & val);
  flag = Search(head, val);
  if (flag == 1){
    if(head -> next == NULL){
      head -> next = newnode;
      newnode -> next = head;
    }
    else{
      P = head;
      While(p -> data != val){
        P = p -> next;
      }
      printf(“\t % d“, p -> data);
      newnode = (node * ) malloc(sizeof(node));
      printf(“\n\ tEnter value you want to insert➔”);
      scanf(“ % d”, & newnode -> data);
      newnode -> next = p -> next;
      p -> next = newnode;
      printf(“\n\ t %d insert Succuessfully”, newnode -> data);
    }
  }
  else{
    printf(“\n\ t % d value not found”, val);
  }
  return head;
}

node * Insert_last(node * head){
  node * p = head -> next;
  node * newnode;
  newnode = (node * ) malloc(sizeof(node));
  printf(“\n\ tEnter value➔”);
  scanf(“ % d”, & newnode -> data);
  newnode -> next = head;
  if(head -> next == NULL) {
    printf(“\n\ t % d insert successfully...”, newnode -> data);
    newnode -> next = head;
    return newnode;
  }
  else{
    While(p -> next != head) {
      // printf(“\t %d-> “,p->data);
      P = p -> next;
    }
    if(p -> next == head) {
      p -> next = newnode;
    }
    printf(“\n\ t % d inserted Successfully...”, newnode -> data);
  }

  return head;
}
node * delete_first(node * head) {
  node * temp;
  if(head -> next == head) {
    printf(“\n\ t Lined List Empty...”);
  }
  else{
    Temp = head -> next;
    head -> next = temp -> next;
    printf(“\n\ t % d Delete Successfully..”, temp -> data);
    Free(temp);
  }
  return head;
}
node * delete_between(node * head) {
  node * tmp, * p;
  int val, flag;
  printf(“\n\ t enter value you want to delete➔”);
  scanf(“ % d”, & val);
  Flag = Search(head, val);
  if(flag == 1) {

    P = head;
    While(p -> next -> data != val) {
      P = p -> next;
    }
    Tmp = p -> next;
    p -> next = tmp -> next;
    printf(“ % d, Deleted Successfully...”, tmp -> data);
    free(tmp);
  }
  else{
    printf(“\n\ t Value not Found...”);
  }
  return head;
}
node * delete_last(node * head) {
  node * tmp, * p;
  P = head;
  While(p -> next -> next != NULL) {
    P = p -> next;
  }
  Tmp = p -> next;
  p -> next = NULL;
  printf(“\n Deleted Successfully”);
  free(tmp);
  return head;

}
node * bubble(node * head) {
  node * i, * j;
  int tmp;
  for(i = head;
    (i -> next) != NULL; i = i -> next) {
    for(j = head;
      (j -> next) != NULL; j = j -> next) {
      if((j -> data) > (j -> next -> data)) {
        Tmp = j -> data;
        j -> data = j -> next -> data;
        j -> next -> data = tmp;
      }
    }
  }
  return head;
}
void Imenu() {
  printf(“\n1..First”);
  printf(“\n2..between”);
  printf(“\n3..last”);
  printf(“\n0..exit”);
}
void dmenu() {
  printf(“\n1..Delete from First”);

  printf(“\n2..delete from between”);
  printf(“\n3..delete from last”);
  printf(“\n0..exit”);
}
int menu() {
  int choice;
  printf(“\n\ t 1..create..”);
  printf(“\n\ t 2..display..”);
  printf(“\n\ t 3..Count..”);
  printf(“\n\ t 4..Search..”);
  printf(“\n\ t 5..Insert..”);
  printf(“\n\ t 6..Delete..”);
  printf(“\n\ t 7..Sort list..”);
  printf(“\n\ t 0..exit..”);
  printf(“\n\ tEnter your choice => ”);
  scanf(“ % d”, & choice);
  return choice;
}
void main() {
  int choice, count, key, flag, ich, dch;
  node * head = NULL;
  Clrscr();
  head = (node * ) malloc(sizeof(node)); //alocate memory for head mode
  do {
    choice = menu();
    switch(choice)

    {
      case 1:
        createLL(head);
      break;
      case 2:
        displayLL(head);
      break;
      case 3:
        count = Countnode(head);
      printf(“\n\ tTotal no of node => % d\ n”, count);
      break;
      case 4:
        printf(“\n\ tEnter value you want to search➔“);
      scanf(“ % d”, & key);
      flag = Search(head, key);
      if (flag) {
        printf(“\n\ t % d Found..\n”, key);
      }
      else{
        printf(“\n\ t % d not found..\n”, key);
      }
      break;
      case 5:
        do {
          Imenu();
          printf(“\nEnter Your Choice: “);

          scanf(“ % d”, & ich);
          switch(ich) {
            case 1:
              head = Insert_first(head);
            break;
            case 2:
              head = Insert_between(head);
            displayLL(head);
            break;
            case 3:
              Insert_last(head);
            displayLL(head);
            break;
            case 0:
              break;
          }
        }
      while (ich != 0);
      break;
      case 6:
        do {
          Dmenu();
          printf(“\nEnter Your Choice: “);
          scanf(“ % d”, & dch);
          switch(dch) {

            case 1:
              head = delete_first(head);
            break;
            case 2:
              head = delete_between(head);
            displayLL(head);
            break;
            case 3:
              head = delete_last(head);
            displayLL(head);
            break;
            case 0:
              break;
            default:
            printf(“\n\ tEnter proper choice..”);
            break;
          }
        }
      while (dch != 0);
      break;
      case 7:
        head = bubble(head);
      printf(“\n\ t After Sorting...”);
      displayLL(head);
      break;
      case 0:
        exit(0);
      default:
      printf(“\n\ tEnter proper choice..”);
      break;

    }
  }
  while (choice != 0);
  getch();
}