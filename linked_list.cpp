#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node*next;
};
Node* khoitao(int x){
    Node*p=new Node();
    p->data=x;p->next=NULL;
    return p;
}
void insertFirst(Node*&a,int x){
    Node*tmp=khoitao(x);
    tmp->next=a;
    a=tmp;
}
void insertLast(Node*&a,int x){
    Node*tmp=khoitao(x);
    if(a==NULL){
        a=tmp;
        return;}
    Node*p=a;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=tmp;
}
void insertMiddle(Node*&a,int x,int pos){
    if(pos==0){
        insertFirst(a,x);
        return;
    }
    Node*tmp=khoitao(x);
    Node*p=a;
    for(int i=1;i<pos-1 && p!=NULL;i++){
        p=p->next;
    }
    tmp->next=p->next;
    p->next=tmp;
}
int size(Node*a){
    int cnt=0;
    Node*p=a;
    while(p!=NULL){
        cnt++;
        p=p->next;
    }
    return cnt;
}
void deleteFirst(Node*&a){
    if(a==NULL) return;
    Node*p=a;
    a=a->next;
    delete p;
}
void deleteLast(Node*&a){
    if(a==NULL) return;
    if(a->next==NULL){
        delete a;
        a=NULL;
        return;
    }
    Node*p=a;
    while(p->next->next!=NULL){
        p=p->next;
    }
    p->next=NULL;
    delete p->next;
}
void deleteMiddle(Node*&a,int pos){
    if(a==NULL) return;
    if(pos==0){
        deleteFirst(a);
        return;
    }
    Node*p=a;
    for(int i=1;i<pos-1 && p->next!=NULL;i++){
        p=p->next;
    }
    Node*tmp=p->next;
    p->next=tmp->next;
    delete tmp;
}
void indanhsach(Node*a){
    Node*p=a;
    while(p!=NULL){
        cout << p->data << " ";
        p=p->next;
    }
    cout << endl;
}
int main(){
    Node*a=NULL;
    insertFirst(a,10);
    insertLast(a,20);
    indanhsach(a);
    cout<<endl;
    insertMiddle(a,15,1);
    indanhsach(a);
    cout<<endl;
    deleteMiddle(a,1);
    indanhsach(a);
    cout<<endl;
    deleteFirst(a);
    indanhsach(a);
    cout<<endl;
    deleteLast(a);
    indanhsach(a);
    return 0;
}