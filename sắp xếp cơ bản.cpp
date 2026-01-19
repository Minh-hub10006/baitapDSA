#include <bits/stdc++.h>
using namespace std;
// Selected sort
void Selectedsort(int a[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }
        swap(a[i],a[min]);}}
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
// Bumble sort 
void Bumblesort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
// Insertion sort
void Insertionsort(int a[],int n){
   for(int i=1;i<n;i++){
    int key=a[i],pos=i-1;
    while(pos>=0 && key<a[pos]){
         a[pos+1]=a[pos];
         pos--;}   
    a[pos+1]=key;}
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }}
// Merge sort
void merge(int a[],int l,int m,int r){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0,j=0;
    while(i<x.size() && j<y.size()){
        if(x[i]<=y[j]){
            a[l]=x[i];i++;l++;
        }
        else {
            a[l]=y[j];j++;l++;
        }
    }
    while(i<x.size()){
        a[l]=x[i];i++;l++;
    }
    while(j<y.size()){
        a[l]=y[j];j++;l++;
    }
}
void mergesort(int a[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
// Selectedsort(a,n);
//Bumblesort(a,n);
//Insertionsort(a,n);
// mergesort(a,0,n-1);
for(int i=0;i<n;i++){
    cout << a[i] << " ";}
    return 0;
}
