#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    char letter;
    Node* left;
    Node* right;
    
    Node(int a,char c,Node* left,Node* right){
        this->data=a;
        this->letter=c;
        this->left=left;
        this->right=right;
    }
};
class comp{
    public:
        bool operator()(const Node* l,const Node* r)
        {
            return l->data > r->data;
        }
};
bool isleaf(Node* root){
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    else{
        return false;
    }
}
void encodecode(Node* root,string s,unordered_map<char,string>&huffmancode){
    if(root==NULL){
        return ;
    }
    if(isleaf(root)){
        huffmancode[root->letter]=(s !=" ") ? s : "1";
    }
    encodecode(root->left,s+'0',huffmancode);
    encodecode(root->right,s+'1',huffmancode);
}
void huffmantree(string text){
    if(text==" "){
        return ;
    }
    priority_queue<Node* ,vector<Node*>,comp>pq;
    unordered_map<char,int>freq;
    for(auto word : text){
        freq[word]++;
    }
    for(auto it: freq){
        Node* newnode=new Node(it.second,it.first,NULL,NULL);
        pq.push(newnode);
    }
    while(pq.size()!=1){
        Node* first = pq.top();
        pq.pop();
        Node* second=pq.top();
        pq.pop();
        Node* addednode=new Node(first->data+second->data,'$',first,second);
        pq.push(addednode);
    }
    unordered_map<char,string>huffmancode;
    string str="";
    Node* root=pq.top();
    encodecode(root,str,huffmancode);
    for(auto it : huffmancode){
        cout<<it.first<<" coded as :"<<it.second<<endl;
    }
    cout<<"The text is : "<<text <<endl;
    string encodedstring=" ";
    for(auto it: text){
        encodedstring+=huffmancode[it];
    }
    cout<<"Enocoded text is :"<<encodedstring<<endl;
}
int main(){
    string text="aabbbbsddddnjjjjjjjiiuuttttppoooos";
    huffmantree(text);
}