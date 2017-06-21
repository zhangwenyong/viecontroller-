//
//  ZWYLinkList.h
//  线性表的链式存储
//
//  Created by 张文勇 on 2017/6/19.
//  Copyright © 2017年 张文勇. All rights reserved.
//

#ifndef ZWYLinkList_h
#define ZWYLinkList_h

#include <stdio.h>
#include <stdlib.h>
#endif /* ZWYLinkList_h */

typedef void  LinkListZ;
typedef struct tag_linkListNode{
   
    struct tag_linkListNode *nest;
    
}linkListNode;

/*生成链表*/

LinkListZ *linkList_creat();

/*销毁链表*/

void linkListDestrory(LinkListZ *list);
/* 清空链表*/

void linkList__clear(LinkListZ *list);
/*得到链表的长度*/

int get_LinkList_lenth(LinkListZ *list);
/*插入链表*/


int LingInsert(LinkListZ *list ,linkListNode*node,int pos);

/*得到链表的某一个节点*/

linkListNode * linkgetNOdel(LinkListZ*list,int pos);
/* 删除链表的某一个节点*/

linkListNode * linkDelete(LinkListZ *list,int pos);
