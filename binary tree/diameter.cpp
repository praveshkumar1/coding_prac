#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }    
};
int arr[13]={1,2,-1,-1,3,4,5,-1,-1,-1,6,-1,-1};
int arr2[11]={-10,9,-1,-1,20,15,-1,-1,7,-1,-1};
int i=-1;
node* buildtree(node* root){
    i++;
    int data=arr2[i];
    if(data==-1) return NULL;
    node* newnode=new node(data);
    newnode->left=buildtree(newnode->left);
    newnode->right=buildtree(newnode->right);
    
    return newnode;

}
void traversal(node* root){

    if(root==NULL){
        return ;
    }

    traversal(root->left);
    cout<<root->data << " ";
    traversal(root->right);
}
int findheight(node* root){
    if(root==NULL) return 0;
    int left=findheight(root->left);
    int right=findheight(root->right);
    return 1+max(left,right);
}


int max_sum_l=0;
int max_sum_r=0;
int x=0;
int max_path(node* root){
    if(root==NULL){
        return 0;
    }
    max_path(root->left);
     x=x+root->data;
     cout<<x<<endl;
    max_path(root->right);
    return x;
}
vector<int>diam;
int dia(node* root){
    if(root==NULL){
        return 0;
    }
    int left = dia(root->left);
    int right=dia(root->right);
    diam.push_back(left+right);
    return 1+max(left,right);
}
//something effecient
int maxi=0;
int diameter(node* root,int maxi){
    if(root==NULL){
        return 0;
    }
    int left =diameter(root->left,maxi);
    int right=diameter(root->right,maxi);
    maxi=max(maxi,left+right);
    return 1+max(left,right);
}
//here maximum is the answer not which come from the function 
vector<int>maxsum;

int max_sum(node* root){
    if(root==NULL){
        return 0;
    }
    int left= max_sum(root->left);
    int right=max_sum(root->right);
   
maxsum.push_back(root->data+left+right);
    return (root->data+left+right);
}
int main(){
node* x=NULL;
node* p=buildtree(x);
traversal(p);
cout<<endl;
//cout<<findheight(p);
//cout<<endl;

//dia(p);
//cout<<endl;
//cout<<*max_element(diam.begin(),diam.end());
//cout<<"done";

max_sum(p);

cout<<*max_element(maxsum.begin(),maxsum.end());
cout<<endl;
}