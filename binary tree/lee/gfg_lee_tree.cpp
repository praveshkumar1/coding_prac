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
void printCorner(node *root)
{

queue<node*> q;
q.push(root);
vector<int>ans;
while(!q.empty()){
    int sz= q.size();
    //cout<<sz<<" ";
    for( int i= 0;i<sz;i++){
        node* elem = q.front();
         if(i==0){
            ans.push_back(elem->data);
        }
        if(i==sz-1){
            ans.push_back(elem->data);
        }
        q.pop();
        if(elem->left){
            q.push(elem->left);
        }
        if(elem->right){
            q.push(elem->right);
        }
    }
    
    
}
for(auto it : ans){
    cout<<it<<" ";
}
}
int main(){
    node* root= buildtree(NULL);
    traversal(root);
    printCorner(root);
}
