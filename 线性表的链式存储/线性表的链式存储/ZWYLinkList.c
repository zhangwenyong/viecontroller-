//
//  ZWYLinkList.c
//  线性表的链式存储
//
//  Created by 张文勇 on 2017/6/19.
//  Copyright © 2017年 张文勇. All rights reserved.
//

#include "ZWYLinkList.h"


typedef struct _tagLinkList
{
    linkListNode header;
    int len;
    
}TlinkList;



LinkListZ *linkList_creat()
{
    
    TlinkList *ret = NULL;
    
    ret =  (TlinkList *)malloc(sizeof(TlinkList));
    memset(ret,0,sizeof(sizeof(TlinkList)));
    
    ret->len = 0;
    
    ret->header.nest = NULL;
    
    return ret;
    
}  

/*销毁链表*/

void linkListDestrory(LinkListZ *list)

{
    if(list ==NULL)
    {
        free(list);
        list = NULL;
    }
    
    return;
    
    
}
/* 清空链表*/

void linkList__clear(LinkListZ *list){
    
    TlinkList *tlist = NULL;
    
    if(list == NULL)
    {
        return;
    }
    
    
    tlist = (TlinkList *)list;
    
    tlist->len = 0;
    tlist->header.nest = NULL;
    
    
    
    
    
}
/*得到链表的长度*/

int get_LinkList_lenth(LinkListZ *list)
{
    
    TlinkList *tlist = NULL;
    
    if(list == NULL)
    {
         printf("错误状况");
        return 0;
    }
    
    tlist = (TlinkList *)list;
    
    return tlist->len;


}
/*插入链 表*/


int LingInsert(LinkListZ *list ,linkListNode*node,int pos){
   
    TlinkList *tlist = NULL;
    
    
    if(list ==NULL||node ==NULL||pos<0)
    {
         printf("错误状况");
        return  -1;
      
        
    }
    
    tlist = (TlinkList *)list;
    
    linkListNode *cureet = NULL;
    
    cureet =&(tlist->header);
    
    for(int i =0;i<pos;i++)
    {
        cureet = cureet->nest;
    }
    node->nest = cureet->nest;
    
    cureet->nest = node;
    tlist->len++;
    
    return  0;
    
}
/*得到链表的某一个节点*/
linkListNode * linkgetNOdel(LinkListZ*list,int pos){
    TlinkList *tlist = NULL;
    linkListNode *curent  = NULL;
    if(list ==NULL||pos <0)
    {
         printf("错误状况");
        return NULL;
        
    }
    tlist = (TlinkList *)list;
    curent = &(tlist->header);
    
    for(int i=0;i<pos;i++)
    {
        curent = curent->nest;
    }
     return curent->nest;
    
}
/* 删除链表的某一个节点*/

linkListNode * linkDelete(LinkListZ *list,int pos){
    
    
    if(list ==NULL||pos<0)
    {
         printf("错误状况");
        return NULL;
       
    }
    
    
    TlinkList *tlist = NULL;
    tlist = (TlinkList *)list;
    
    linkListNode *curent = NULL;
    
    curent = &(tlist->header);
    
    for(int i =0;i<pos;i++)
    {
        curent = curent->nest;
    }
    
    curent->nest = curent->nest->nest;
    tlist->len++;
    
     return curent->nest;
}
