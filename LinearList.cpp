/* Chuong trinh xay dung cau truc cua danh sach tuyen tinh duoc cai dat boi mang va dinh nghia cac phep toan:
          - Khoi tao danh sach
          - Kiem tra danh sach rong
          - Kiem tra danh sach day
          - Chen mot phan tu vao sau vi tri p trong danh sach
          - Chen mot phan tu vao truoc vi tri p trong danh sach
          - Loai bo danh sach
          - Lay so luong phan tu cua danh sach
          - Tham danh sach
*/
#include<iostream>
using namespace std;
const int Max=30;
template <class Item>
struct    List {
    Item element[::Max];
    int count;
};

// Khoi tao danh sach

template <class Item>
void Initial(List<Item> &L) {

    L.count=0;

}
// Kiem tra danh sach rong
template <class Item>
bool IsEmpty(List<Item> L) {

    if (L.count==0)
        return true;
    else
        return false;

}
// Kiem tra danh sach day
template <class Item>
bool IsFull(List<Item> L) {

    if (L.count==::Max)
        return true;
    else
        return false;

}
// Chen mot phan tu vao sau vi tri p trong danh sach
template <class Item>
void insertAfter(List<Item> &L,Item x,int p,bool &q) {

    if(IsEmpty(L)) {
        L.count++;
        L.element[L.count]=x;

    } else if (IsFull(L)||(p<=0)||(p>L.count))
        q=false;
    else {
        L.count++;
        q=true;

        for (int i=L.count; i>p+1; i--)
            L.element[i]=L.element[i-1];
        L.element[p+1]=x;

    }

}
// Chen mot phan tu vao truoc vi tri p trong danh sach
template <class Item>
void InsertBefore(List<Item> &L, int p,Item x, bool &q) {
    int i;
    if(IsEmpty(L)) {
        L.count++;
        L.element[L.count]=x;

    } else {

        if (IsFull(L)||(p<=0)||(p>L.count))
            q=false;
        else {
            q =true;
            i = L.count+1;
            while(i>=p) {
                L.element[i] = L.element[i-1];
                i--;
            }
            L.element[p] = x;
            L.count = L.count +1;
        }
    }
}

// Lay do dai cua danh sach

    template <class Item>
    int GetLength(List<Item> L) {
        return L.count;
    }
// Loai bo phan tu o vi tri p
    template <class Item>
    void Deleted(List<Item> &L, int p, bool &q) {

        if ((p<=0)||(p>L.count))
            q=false;
        else {

            for(int i=p+1; i<=L.count; i++)
                L.element[i]=L.element[i-1];
            L.count--;

        }
    }

//
// Duyet danh sach tuyen tinh
    template <class Item>

    void  Travel(List<Item> L) {
        if (IsEmpty(L))
            cout << "Danh sach rong" <<endl;
        else
            for (int i=1; i<=L.count; i++)
                cout<<L.element[i]<<"  ";
    }

// Chuong trinh chinh
    int main() {
        List<int> L;

        bool q;
        Initial(L);
        insertAfter(L,5,1,q);

        insertAfter(L,6,1,q);
       
        Travel(L);
        return 0;
    }
