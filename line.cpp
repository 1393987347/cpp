#include <iostream>
using namespace std;

struct listnode
{
    char data[50];
    listnode * next;
};

void createList(listnode * pHead)
{
    pHead = new listnode;
    pHead -> data[0];
    pHead -> next = NULL;
    listnode *p = pHead;
    for(int i = 0 ; i < 50; i++)
    {
        listnode *pNewnode = new listnode;
        pNewnode -> data[i] = i;
        pNewnode -> next = NULL;
        p -> next = pNewnode;
        p = pNewnode;
    }
}

void showList(listnode *pHead)
{
    if(pHead != NULL)
    {
        listnode *pNext = pHead -> next;
        while(pNext != NULL)
        {
            delete pHead;
            pHead = pNext;
            pNext = pHead -> next;
        }
    }
    delete pHead;
    pHead = NULL;
    return;
}

int main(void)
{
    listnode * head = NULL;
    createList(head);

    showList(head);
}

