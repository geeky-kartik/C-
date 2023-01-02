#include <stdio.h>
#include <stdlib.h>
//array or linked list;
int n = 15,i=0;
char c[16]={'A','b','C','\0','d','i','j','\0','\0','k','\0','L','\0','\0','M'};
struct tree{
 char data;
 struct tree *right;
 struct tree *left;
}*newnode,*root=NULL,*temp;
struct tree* ConvertToBT(int i,struct tree* root){
 if(i<n){
 newnode = (struct tree*)malloc(sizeof(struct tree));
 newnode->data =c[i];
 root = newnode;
 
 root->left = ConvertToBT(2*i+1,root->left);
 root->right = ConvertToBT(2*i+2,root->right);
 }
 return root;
 
}
void infix(struct tree* root){
 if (root==NULL){
 return;
 }
 infix(root->left);
 printf("%c",root->data);
 infix(root->right);
}
void post(struct tree* root){
 if(root==NULL){
 return;
 }
 post(root->left);
 post(root->right);
 printf("%c",root->data);
}
void pre(struct tree* root){
 if (root==NULL){
 return;
 }
 printf("%c",root->data);
 pre(root->left);
 pre(root->right);
}
void level(struct tree* root){
 for(int i =0;i<16;i++){
 if(c[i]!='\0'){
 printf("%c",c[i]);
 }
 }
}
int main()
{
 root = ConvertToBT(0,root);
 printf("In order: ");
 infix(root);
 printf("\n");
 printf("Pre order: ");
 pre(root);
 printf("\n");
 printf("Post order: ");
 post(root);
 printf("\n");
 printf("Level order: ");
 level(root);
 return 0;
}