#include <bits/stdc++.h>
using namespace std;
#define MAX 100
typedef struct {
    string data;
    int x;   // 0: trống, 1: có node
} Node;
Node cây[MAX];
// Khởi tạo cây
void Khoitao() {
    for (int i = 0; i < MAX; i++) {
        cây[i].x = 0;
    }
}
// Kiểm tra rỗng
int Rong() {
    return cây[1].x == 0;
}
// Thêm node
void ThemNode(int index, string value) {
    if (index >= MAX) return;
    cây[index].data = value;
    cây[index].x = 1;
}
// Duyệt trước
void Truoc(int i) {
    if (i >= MAX || cây[i].x == 0) return;
    cout << cây[i].data << " ";
    Truoc(2 * i);
    Truoc(2 * i + 1);
}
// Duyệt giữa
void Giua(int i) {
    if (i >= MAX || cây[i].x == 0) return;
    Giua(2 * i);
    cout << cây[i].data << " ";
    Giua(2 * i + 1);
}
// Duyệt sau
void Sau(int i) {
    if (i >= MAX || cây[i].x == 0) return;
    Sau(2 * i);
    Sau(2 * i + 1);
    cout << cây[i].data << " ";
}
// Nhập cây
int main() {
    Khoitao();
    ThemNode(1, "A");
    ThemNode(2, "A1");
    ThemNode(3, "A2");
    ThemNode(4, "A1.1");
    ThemNode(5, "A1.2");
    ThemNode(6, "A2.1");
    ThemNode(7, "A2.2");
    cout << "Duyệt trước: ";
    Truoc(1);
    cout << "\nDuyệt giữa: ";
    Giua(1);
    cout << "\nDuyệt sau: ";
    Sau(1);
    return 0;
}
