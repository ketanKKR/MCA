#include<stdio.h>
#include<conio.h>
#include<math.h>

int bucket[10][100];

void radixSort(int a[]	,int n){
	int max,count=0,cnt,i,j,x,k;
	max=a[0];

	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Max value: %d",max);
	while(max!=0){
		max=max/10;
		count++;
	}

	printf("Number of digits %d\n",count);

	for(cnt=1;cnt<=count;cnt++){
		for(i=0;i<10;i++){
			for(j=0;j<n;j++){
				bucket[i][j]=0;
			}
		}
		for(i=0;i<n;i++){
			x=a[i] % (int)pow(10,cnt);
			if(cnt!=1){
				x=x/pow(10,cnt-1);
			}
		bucket[x][i]=a[i];
		}
		k=0;

		for(i=0;i<10;i++){
			for(j=0;j<n;j++){
				if(bucket[i][j]!=0){
					a[k]=bucket[i][j];
					k++;
				}
			}
		}

	}

}

void main(){
	int a[50],n,i;
	clrscr();

	printf("Enter the length for array: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
	       printf("Enter the elements: ");
	       scanf("%d",&a[i]);
	}

	radixSort(a,n);

	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}

	getch();
}