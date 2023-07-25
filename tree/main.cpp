#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        list<Node*> children;

        void ChildrenSetter(Node *n){
            children.push_back(n);
        }
};

Node* newNode(int newdata){
    Node* temp= new Node;
    temp->data=newdata;
    return temp;
}

Node* insertc(Node* node, int k)
{
    if (node == NULL) return node;

    Node* temp = newNode(k);
    node->ChildrenSetter(temp);
    return temp;
}

int main()
{
    Node *root = NULL;
    int n,m,a,b;
    cin>>n>>m;

    cin>>a>>b;
    if(i==0) root=newNode(a);
    Node* kid=insertc(root, b);

    for(int i=0;i<m-1;i++){
        cin>>a>>b;

    }


return 0;
}
