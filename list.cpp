#include<bits/stdc++.h>
using namespace std;
struct Sinhvien{
    string name;
    string mssv;
    double GPA;
};
struct Node{
    Sinhvien data;
    Node* next;
};
// Hàm tạo node mới
Node* taoNodemoi(Sinhvien a){
    Node*p= new Node;
    p->data=a;
    p->next=NULL;
    return p;
}
// Hàm đếm chiều dài
int chieudai(Node*head){
    int b=0;
    Node*p=head;
    while(p!=NULL){
        b++;
        p=p->next;
    }
    return b;
}
// Hàm đếm số sinh viên có GPA > 3.2
int GPA3.2(Node*head){
    int c=0;
    Node*p=head;
    while(p!=NULL){
        if(p->data.GPA>3.2){
          c++;
        }
    } return c;
}
// hàm in ds
void inds(Node*head){
    Node*p=head;
    while(p!=NULL){
        cout<<p->data.name<<" "<<p->data.mssv<<" "<<p->data.GPA<<endl;
        p=p->next;
    }
}
// Hàm sắp xếp GPA tăng dần
void sapxepGPA(Node*head){
    for(Node*i=head;i!=NULL;i=i->next){
        for(Node*j=head;j!=NULL;j=j->next){
            if(i->data.GPA<j->data.GPA){
                swap(i->data,j->data);
            }
        }
    }}
// Thêm 1 svien có GPA=2.4
void themsv(Node*&head){
    Sinhvien a;
    a.name="Tran Ha Hung";
    a.mssv="3636363636";
    a.GPA=2.4;
    Node*svienmoi=taoNodemoi(a);
    if(head->data.GPA>2.4){
        svienmoi->next=head;
        head=svienmoi;
    }
    else{
        Node*p=head;
        while(p->next!=NULL && p->next->data.GPA,2.4){
            p=p->next;
        }
    }}