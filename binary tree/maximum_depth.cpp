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
int i=-1;
node* buildtree(node* root){
    i++;
    int data=arr[i];
    if(data==-1){
        return NULL;
    }
    root=new node(data);
    root->left=buildtree(root->left);
    root->right=buildtree(root->right);
    return root;
}
        int leveli=0;
void leveltraversal(node* root){
    queue<node*>q;
     q.push(root);
    vector<vector<int>>v;
   
    while(!q.empty()){
              vector<int>level;
      
        int size=q.size();
  
        for(int i=0;i<size;i++){
            node* t=q.front();
            level.push_back(t->data);
            q.pop();
            if(t->left!=NULL)
                q.push(t->left);
               
            if(t->right !=NULL)
                q.push(t->right);
            
           
        
        }
         leveli++;
        v.push_back(level);
     

    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<endl;
}
int height(node* root){
    if(root==NULL)
        return 0;
    int leftheight =height(root->left);
    int rightheight=height(root->right);
    return 1+max(leftheight,rightheight);

}
int maxheight(node* root){
    if(root==NULL){
        return 0;
    }
    int left= maxheight(root->left);
    int right=maxheight(root->right);
    return 1+max(left,right);
}
int find_height(node* root){
    if(root==NULL){
        return 0;
    }
    int left=find_height(root->left);
    int right=find_height(root->right);
    if(left==-1 || right == -1) return -1;//by adding this we will get the height of balanced binary tree only .
    if(abs(left-right)>1) return -1;
    return 1+max(left,right);

}
bool balanced_bt(node* root){
    int height_rht=find_height(root->right);
    int height_lft=find_height(root->left);
    if(abs(height_rht-height_lft)>1){
        return false;
    }
    bool left=balanced_bt(root->left);
    bool right=balanced_bt(root->right);
    if(!left || !right ) return false;
    return true;
}

int main(){
node* root=NULL;
node* newroot=buildtree(root);

leveltraversal(newroot);
cout<<leveli<<endl;
cout<<maxheight(newroot)<<endl;
}