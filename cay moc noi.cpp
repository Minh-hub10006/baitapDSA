#include <bits/stdc++.h>
using namespace std;
typedef struct Node {
    string data;
    Node* l;
    Node* r;
} Node;
// Khởi tạo node
Node* Khoitao(string value) {
    Node* p = new Node;
    p->data = value;
    p->l = NULL;
    p->r = NULL;
    return p;
}
// Kiểm tra cây rỗng
int Rong(Node* T) {
    return T == NULL;
}
// Thêm con trái
void ThemConTrai(Node* cha, string value) {
    if (cha == NULL) return;
    cha->l = Khoitao(value);
}
// Thêm con phải
void ThemConPhai(Node* cha, string value) {
    if (cha == NULL) return;
    cha->r = Khoitao(value);
}
// Duyệt trước
void Truoc(Node* T) {
    if (T == NULL) return;
    cout << T->data << " ";
    Truoc(T->l);
    Truoc(T->r);
}
// Duyệt giữa
void Giua(Node* T) {
    if (T == NULL) return;
    Giua(T->l);
    cout << T->data << " ";
    Giua(T->r);
}
// Duyệt sau
void Sau(Node* T) {
    if (T == NULL) return;
    Sau(T->l);
    Sau(T->r);
    cout << T->data << " ";
}
// Nhập cây theo hình
int main() {
    Node* T = NULL;
    T = Khoitao("A");
    ThemConTrai(T, "A1");
    ThemConPhai(T, "A2");
    ThemConTrai(T->l, "A1.1");
    ThemConPhai(T->l, "A1.2");
    ThemConTrai(T->r, "A2.1");
    ThemConPhai(T->r, "A2.2");
    cout << "Duyệt trước: ";
    Truoc(T);
    cout << "\nDuyệt giữa: ";
    Giua(T);
    cout << "\nDuyệt sau: ";
    Sau(T);
    return 0;
}
