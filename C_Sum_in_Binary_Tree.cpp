#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};


node* buildFromLevelOrder(node* &root, int n) {
    queue<node*> q;
    // cout<<"enter the value of root: "<<endl;
    int data = 1;
    root = new node(data++);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        // cout<<"enter left data of root: "<<temp->data<<endl;

        if(data <= n) {
            temp->left= new node(data++);
            q.push(temp->left);
        }

        // cout<<"enter right data of root: "<<temp->data<<endl;

        if(data <= n) {
            temp->right= new node(data++);
            q.push(temp->right);
        }

    }
}

bool findSum(node* root, int sum, int n) {
    if(root->data == n) {
        return true;
    }

    if(root == nullptr) return false;

    if()
}

int main(){
    int n;
    cin>>n;
    node* root = NULL;
    root = buildFromLevelOrder(root,n);
    
    return 0;   
}
