/* Chuong trinh xay dung cau truc danh sach lien ket va dinh nghia cac phep toan:
          - Khoi tao danh sach
          - Kiem tra danh sach rong
          - Chen mot phan tu vao vi tri i trong danh sach
*/
#include<iostream>
using namespace std;
// Dinh nghia cau truc danh sach
template <class Item>
struct List{
       Item element;
       List *next;
};
template <class Item>
// Khoi tao danh sach lien ket
void Initial(List<Item> *&head,List<Item> *&tail){
 head=NULL;tail=NULL;
}
template <class Item>
// Kiem tra danh sach rong
bool IsEmpty(List<Item> *head,List<Item> *tail){
     if (head==NULL) return true;
     else return false;
}
// Chen mot phan tu vao danh sach
template <class Item>
void InsertLast(List<Item> *&head,List<Item> *&tail,Item x){

   List<Item> *p;
    p=new List<Item>;
     p->element= x;
     p->next=NULL;

     if (IsEmpty(head,tail)) {head=p;tail=p;}
     else {tail->next=p;tail=p;}
}
// chen mot phan tu vao vi tri i
template <class Item>
void Insert(List<Item> *&head,List<Item> *&tail, int i, Item x){
     List<Item> *p;
     p=new List<Item>;
     p->element=x;
     p->next=NULL;
     if (i==1){
        if (IsEmpty(head,tail)){head=p;tail=p;}
        else {p->next=head;head=p;}
     }
     else {
          List<Item> *q=head;

          int count=1;
          while ((count<i-1)&&(q!=NULL)){
               q=q->next;
               count++;
          }
          if (q!=NULL) {p->next=q->next; q->next=p;}
     }
}
// Hien thi danh sach
template <class Item>
void display(List<Item> *head,List<Item> *tail){
     List<Item> *p;
     p=head;
     while (p!=NULL){
           cout<<p->element<<"  ";
           p=p->next;
     }

}
//--------Chuong trinh chinh---------//
int main(){
    List<int> *head,*tail,*p;
    Initial(head,tail);// Khoi tao danh sach
    //IsEmpty(head,tail);
    // chen cac gia tri tu 1-->10 vao vi tri i trong danh sach
    // gia tri bang 5 duoc chen vao dau danh sach
   for(int i=1;i<=10;i++){
           if (i==5) Insert(head,tail,1,i);
           else Insert(head,tail,i,i);
   }
   // Hien thi danh sach
    display(head,tail);
    return 0;
}
