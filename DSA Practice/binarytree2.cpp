#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
int arr[21]={1,2,4,-1,-1,5,8,-1,-1,-1,3,6,-1,-1,7,9,-1,-1,10,-1,-1};
int indx=-1;
node* buildtree(node* root){
    indx++;
    node* newroot=new node(arr[indx]);
//  cout<<"Enter data "<<" ";
//  int d;
//  cin>>d;
//   node* newroot=new node(d);
 
 if(arr[indx]==-1){
    return NULL;
 }

 newroot->left=buildtree(newroot->left);
newroot->right=buildtree(newroot->right);
return newroot;
}
void pre_traversal(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data;

    pre_traversal(root->left);
    pre_traversal(root->right);

}
void in_traversal(node* root){
    if(root==NULL){
        return ;
    }
    in_traversal(root->left);
    cout<<root->data;
    in_traversal(root->right);   
}
void post_traversal(node* root){
    if(root==NULL)
        return ;
    post_traversal(root->left);
    post_traversal(root->right);
    cout<<root->data;
}
void level_order_short_easy(node* root){
    queue<node*>q;
    cout<<root->data<<" ";
    q.push(root->left);
    q.push(root->right);
    while(!q.empty()){
        if(q.front()->left){
            q.push(q.front()->left);
        }
        if(q.front()->right){
            q.push(q.front()->right);
        }
        
        cout<<q.front()->data<<" ";
        q.pop();
      
    }

}
void level_order_tra(node* root){
    queue<node*>q;
    q.push(root);
    vector<vector<int>>v;
    while(!q.empty()){
        vector<int>level;
        int size=q.size();
        
        
     
        for(int i=0;i<size;i++){
            node* x=q.front();
            level.push_back(x->data);
               q.pop();
            if(x->left !=NULL) 
                q.push(x->left);

            if(x->right!=NULL)
                q.push(x->right);
        }
        v.push_back(level);

    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
    }
}
void pre_or_iter_traver(node* root){
    stack<node*>s;
    s.push(root);
    vector<int>v;
    while(!s.empty()){
        node* x=s.top();
        v.push_back(x->data);
        s.pop();
        if(x->right != NULL){
            s.push(x->right);
        }
        if(x->left !=NULL){
                s.push(x->left);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void iter_in_order_trav(node* root){
    stack<node*>s;
 
    vector<int>ans;
    node* x=root;
    while(true){
         if(x!=NULL){
            s.push(x);
            x=x->left;
         }
         else{
            if(s.size()==0)
                break;
            node* t=s.top();
            s.pop();
            ans.push_back(t->data);
            x=t->right;
         }
     }
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
     }
}
int main(){
    node* root=NULL; 
    node* newroot=buildtree(root);
    pre_traversal(newroot);
    cout<<endl;
   //in_traversal(newroot);
   //cout<<endl;
   // post_traversal(newroot);
  //  cout<<endl;
    //level_order_tra(newroot);
   // cout<<endl;
    pre_or_iter_traver(newroot);
    cout<<endl;
    //iter_in_order_trav(newroot);
}