#include"list.h"

//表示链表当前维护了多少个结点；

void test(){

    int siz = 0;
    list * HD = (list *) malloc(sizeof(struct list));
    list * TL = (list *) malloc(sizeof(struct list));
    Init(HD , TL);
    for(int i = 1 ; i <= 5 ;i++){
        push_back(HD ,TL , i , &siz);
        push_front(HD , TL , i , &siz);
        print(HD,TL,&siz);
    }


    clear(HD,TL,&siz);
    //clear_case(HD,TL,&siz,6);
    print(HD,TL,&siz);

    return ;
}
int main(){

   test();

    return 0 ;
}
