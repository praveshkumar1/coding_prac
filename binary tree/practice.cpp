#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data ;
    node* right;
    node* left;
    node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};
int arr[13]={1,2,-1,-1,3,4,5,-1,-1,-1,6,-1,-1};
int arr1[]={1,2,-1,-1,3,-1,-1};
int arr2[]={1,2,-1,-1,-1,3,-1,-1};
int ix=-1;
node* buildtree(node* root){
    ix++;
    int data=arr[ix];
    if(data==-1) return NULL;
    node* newnode=new node(data);
    
    newnode->left=buildtree(newnode->left);
    newnode->right=buildtree(newnode->right);
    
    return newnode;

}
 
 bool checkarr(int lev,vector<int>level){
        if(lev%2==0){
            for(int i=0;i<level.size()-1;i++){
                if(!((level[i]<level[i+1])&& level[i]%2!=0)){
                    return false;
                }
            }
            return true;
        }else{
            for(int i=0;i<level.size();i++){
                if(!((level[i]>level[i+1]) && level[i]%2==0)){
                    return false;
                }
            }
            return true;
        }
    }
    bool bfs(node* root,int &lev){
        queue<node*>q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
             lev++;
            for(int i=0;i<size;i++){
                node* node=q.front();
                q.pop();
                if(node->left!=NULL){
                    q.push(node->left);
                    level.push_back(node->left->data);
                }if(node->right!=NULL){
                    q.push(node->right);
                    level.push_back(node->right->data);
                }
            }
           
           cout<<"level:"<<lev<<endl;
           for(auto it: level){
            cout<<it<<" ";
           }
           cout<<endl;
            // if(!checkarr(lev,level)){
            //     return false;
            // }
        }
        return true;
    }
int main(){
  node* x=NULL;
  node* root=buildtree(root);
  int level=0;
  bfs(root,level);
  
}