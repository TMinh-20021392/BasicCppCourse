#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

bool isPrime(int a){
    if(a<2) return false;
    for(int i=2;i<a;i++){
        if(a%i==0) return false;
        return true;
    }
}

void p(Node*head,int nd){
    Node* new_N= (Node*)malloc(sizeof(struct Node));
    new_N->data=nd;
    new_N->next=head;
    head=new_N;
}

void deleteN(Node* head,Node* de){
    Node* temp=head;
    if(head==NULL or de==NULL) return;
    if(head==de) head=de->next;
    while(temp->next!=de){
        temp=temp->next;
    }
    temp->next=de->next;
    free(de);
}

void deleteP(Node*head){
    Node*ptr=head;
    Node*next;
    while(ptr!=NULL){
        next=ptr->next;
        if(!isPrime(ptr->data)){
            deleteN(head,ptr);
        }
        ptr=next;
    }
}
void op(Node*head){
    while(head!=NULL){
        cout<<head->data<<' ';
        head=head->next;
    }
}
void rev(Node* head){
    if(head!=NULL) return ;
    else{
        rev(head->next);
        cout<<head->data<<' ';
    }
}
int main(){
    Node*head=NULL;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        p(head,a[i]);
    }
    deleteP(head);
    op(head);
    rev(head);
}
