#include<stdio.h>
#include<conio.h>

int Ins(int a[], int n, int pos, int val){
	int i;
	for(i=n-1;i>=pos;i--){
			a[i+1]=a[i];
	}
	a[pos]=val;
	printf("\n %d inserted at pos %d\n",val,pos);
	return val;
}

void Del(int a[], int n, int pos){
	int i;
	for(i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
}

void main(){
	int a[100],n,i,val,pos;
	clrscr();
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\nEnter element value: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElements of arrays are: \n");
	for(i=0;i<n;i++){
		printf("\nElements = %d",a[i]);
	}

	printf("\nEnter the value you want to insert: ");
	scanf("%d",&val);

	printf("\nEnter the value where to insert: ");
	scanf("%d",&pos);

	Ins(a,n,pos,val);
	printf("\n After insertion: ");
	for(i=0;i<n;i++){
		printf("\n a[%d]",a[i]);
	}

	printf("\nEnter the value you want to delete: ");
	scanf("%d",&pos);

	Del(a,n,pos);
	n--;
	printf("\nElements are deletion: ");
	for(i=0;i<n;i++){
		printf("\n%d - %d",i,a[i]);
	}

	getch();
}