#include <stdio.h>
#include <stdlib.h>
//#include <alloc.h>

typedef struct SLL{
    int data;
    struct SLL* next;
}node;

node *insert(node *head,int val){
    node *newNode,*ptr;
    if(head==NULL){
        head=(node*)malloc(sizeof(node));
        head->data=val;
        head->next=NULL;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        newNode=(node*)malloc(sizeof(node));
        ptr->next=newNode;
        newNode->data=val;
        newNode->next=NULL;
    }

    return head;
}

node *insertBetween(node *head,int index){
    int val;
    node *newNode,*ptr;
    if(head==NULL){
        printf("\nList is Empty!");
        return head;
    }
    else{
        ptr=head;
        while(ptr->data!=index){
            if(ptr->next==NULL){
                printf("\nValue %d is not in the list",index);
                return head;
            }
            ptr=ptr->next;
        }
        newNode=(node*)malloc(sizeof(node));
        printf("\nEnter Value: ");
        scanf("%d",&val);
        newNode->data=val;
        newNode->next=ptr->next;
        ptr->next=newNode;
    }

    return head;
}

node *insertAtBeg(node *head,int val){
    node *newNode;
    if(head==NULL){
        head=(node*)malloc(sizeof(node));
        head->data=val;
        head->next=NULL;
    }
    else{
        newNode=(node*)malloc(sizeof(node));
        newNode->data=val;
        newNode->next=head;
        head=newNode;
    }

    return head;
}

void display(node *head){
    node *ptr;
    ptr=head;
    printf("\n");
    if(head==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
        while(ptr!=NULL){
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("NULL");
}

void sort(node *head){
    node *i,*j;
	int temp;

	printf("Linked list has been sorted\n");
	for(i=head;i->next!=NULL;i=i->next){
		for(j=head;j->next!=NULL;j=j->next){
			if(j->data>j->data++){
				temp=j->data;
				j->data=j->data;
				j->data=temp;
			}
		}
	}
}

void menu(){
    printf("\n\n1...Insert At Last");
    printf("\n2...Display");
    printf("\n3...Insert At Beginning");
    printf("\n4...Insert Between");
    printf("\n0...Exit");
}

int main(){
    node *head=NULL;
    int ch,val;
    //clrscr();
    do{
        menu();
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("\nEnter Value: ");
                scanf("%d",&val);
                head=insert(head,val);
                display(head);
            break;
            
            case 2:
                display(head);
            break;

            case 3:
                printf("\nEnter Value: ");
                scanf("%d",&val);
                head=insertAtBeg(head,val);
                display(head);
            break;

            case 4:
                printf("\nEnter Value you want to insert after: ");
                scanf("%d",&val);
                head=insertBetween(head,val);
                display(head);
            break;

            case 5:
                sort(head);
            break;

            case 0:
                exit(0);
            break;

            default:
                printf("\nNot Valid");
            break;
        }
    }while(ch!=0);
    return 0;
}