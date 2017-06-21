//
//  main.c
//  线性表的链式存储
//
//  Created by 张文勇 on 2017/6/19.
//  Copyright © 2017年 张文勇. All rights reserved.
// 线性表的链式存储 线性表的链式存储 线性表的链式存储。线性表的链式存储 线性表的链式存储。线性表的链式存储。线性表的链式存储 线性表的链式存储

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ZWYLinkList.h"

typedef  struct teacher{
     linkListNode*node;
    int age;
    char name[64];
    
   
    
} Teacher;


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    Teacher t1,t2,t3;
    t1.age = 10;
    t2.age = 20;
    t3.age = 30;
    int len =0,ret =0;
    LinkListZ *list;
    list = linkList_creat();
    if (list ==NULL) {
        return 1 ;
    }
   len = get_LinkList_lenth(list);
    
    printf("----%d-----\n",len);
   ret = LingInsert(list ,(linkListNode*)(&t1),0);
   ret = LingInsert(list ,(linkListNode*)(&t2),1);
   ret = LingInsert(list ,(linkListNode*)(&t3),2);

    for(int i=0;i<get_LinkList_lenth(list);i++)
    {
        
        Teacher *temp = (Teacher *)linkgetNOdel(list, i);
       
        if(temp==NULL)
        {
            return 1;
        }
        printf("%d\n",temp->age);
    }
    
    while (get_LinkList_lenth(list)>0) {
        
        Teacher *temp = (Teacher *)linkDelete(list, 0);
        if(temp==NULL)
        {
            return 1;
        }
        
       /// printf("%d\n",temp->age);
    }
    linkListDestrory(list);
    
   /*
    LinkListZ *linkList_creat();
    

    
    void linkListDestrory();
 
    
    void linkList__clear(LinkListZ *list);
   
    
    int get_LinkList_lenth(LinkListZ *list);
  
    
    
    int LingInsert(LinkListZ *list ,linkListNode*node,int pos);
    

    linkListNode * linkgetNOdel(LinkListZ*list,int pos);

    
    linkListNode * linkDelete(LinkListZ *list,int pos);
    */
    return 0;
}
