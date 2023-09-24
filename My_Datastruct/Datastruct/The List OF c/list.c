#include "list.h"

void print(list * head , list * tail,int * siz){
        for(list * ptr = head -> next  ;ptr -> next != NULL;ptr = ptr ->next)
        {
            assert(ptr -> next != NULL);
            printf("%d ",ptr -> a);
            //assert(*siz <=  5);
        }
        printf("\n");
    //printf("%d",*siz);

        return ;
}

void Init(list * HD , list * TL){

    HD -> next = TL ;
    TL -> pre = HD ;

    //维护其他的两个向量指针 ，
     HD -> pre = NULL;
     TL -> next = NULL;

    return ;

}

void push_front(list * head , list * tail,int x,int *siz){

    list * newnode = (list *) malloc(sizeof (struct list));//创建一个新的空间；
    if(!newnode){ perror("fail to creat a newnode\n");return ;}//如果创建失败返回提示信息；

    newnode -> a = x ; // 增添数据集；

    head -> next -> pre = newnode;
    newnode -> next = head -> next;//创建双向边；

    newnode -> pre = head ;
    head -> next = newnode;

    ++(*siz);

    //assert(tail == NULL);
    return ;
}

void push_back(list * head , list * tail , int x,int *siz){

    list * newnode = (list * )malloc(sizeof (struct list));
    if(!newnode){perror("fail\n");return ;}

    newnode -> a = x;

    tail -> pre -> next = newnode ;
    newnode -> pre = tail -> pre;

    tail -> pre = newnode ;
    newnode -> next = tail;

    (*siz) ++;
    return ;
}

void clear(list * head , list * tail , int * siz){
    while(*siz){
        --(*siz);
        head -> next ->next -> pre = head;
        list * tmp = head -> next ;
        free(head -> next);
        head -> next = tmp -> next;
    }
    return ;
}

void clear_case(list * head , list * tail , int * siz,int k){

    list * popnode = head ;
    for(int i = 0 ; i < k ;i++){
         popnode  = popnode -> next;
    }
    list * tmp = popnode ;
    tmp -> pre -> next= tmp -> next;
    tmp -> next -> pre = tmp -> pre;
    free(popnode);
    --(*siz);

}//从头到尾部的第k个元素；
