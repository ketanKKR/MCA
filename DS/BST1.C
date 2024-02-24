#include<stdio.h>
#include<conio.h>
#include<alloc.h>

typedef struct BST{
	int key;
	struct BST *left, *right;
}node;

node *newNode(int item){
	node*temp = (node*)malloc(sizeof(node));
	temp->key=item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);      //left
		printf("%d ",root->key);  //root
		inorder(root->right);	//right
	}
}

void preorder(node* root){
	if(root!=NULL){
		printf("%d ",root->key);  //root
		preorder(root->left);      //left
		preorder(root->right);	//right
	}
}

void postorder(node* root){
	if(root!=NULL){
		postorder(root->left);      //left
		postorder(root->right);	//right
		printf("%d ",root->key);  //root
	}
}

node* insert(node* root, int key){
	if(root == NULL){
		root= newNode(key);
		return root;
	}
	else if(key<root->key){
		root->left = insert(root->left, key);
	}
	else if(key>root->key){
		root->right = insert(root->right, key);
	}
	return root;
}

void main(){
	int i,n;
	node* root = NULL;
	clrscr();
	
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	postorder(root);
	getch();
}