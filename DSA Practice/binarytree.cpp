#include<bits/stdc++.h>
using namespace std;
class node{
    public:
int data;
node* right;
node* left;
public:
node(int d){
    this->data=d;
    this->right=NULL;
    this->left=NULL;
}
};
static int ind=-1;
int arr[15]={1,7,-1,6,-1,-1,4,-1,2,6,3,-1,-1,-1,-1};
node* buildTree(node* root){
    ind++;
cout<<"the entered data is"<<arr[ind]<<endl;
int data=arr[ind];

node* newnode= new node(data);
if(data==-1){
    return NULL;
}
newnode->left=buildTree(newnode->left);
newnode->right=buildTree(newnode->right);
return newnode;
}
void preorderprint(node* root){
if(root==NULL){
    cout<<"the value is null so returning "<<endl;
    return ;
}
cout<<root->data<<endl;
preorderprint(root->left);
preorderprint(root->right);
}
int main(){
node* root=NULL;


preorderprint(buildTree(root));
}