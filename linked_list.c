#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}NODE;

void buildLinklist(NODE**, int [], int);
int find_firsthalf_Big(NODE*);
int find_lasthalf_Big(NODE*);
void printList(NODE*);
void freeList(NODE*);
NODE* sortlist(NODE*);
NODE* reverselist(NODE*);
void insertnode(int, int, NODE*);

int main()
{
    int ar[6] = {34,54,23,76,12,89};
    NODE* first;
    buildLinklist(&first, ar, 6);
    first = sortlist(first);
    first = reverselist(first);
    NODE *temp = first;
    insertnode(1, 50, first);
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

}
void buildLinklist(NODE** head, int* arr, int size)
{
    NODE *first;
    for(int i = 0; i < size; i++)
    {
        NODE *temp = (NODE*)malloc(sizeof(NODE));
        temp->data = arr[i];
        temp->next = NULL;
        if(i == 0)
        {
            *head = temp;
            first = *head;
        }
        else
        {
            first->next = temp;
            first = first->next;
        }
    }
}
NODE* sortlist(NODE *head)
{
    NODE *dummy = (NODE*)malloc(sizeof(NODE));
    dummy->data = -1;
    dummy->next = head;
    NODE* temp;
    for(int i = 0; i < 6; i++)
    {
        temp = dummy;
        for(int j = i; j < 5; j++)
        {
            if(temp->next->data > temp->next->next->data)
            {
                NODE *next_node = temp->next->next; // second node;
                temp->next->next = temp->next->next->next; // 1 指向 3
                next_node->next = temp->next;
                temp->next = next_node;
            }
            temp = temp->next;
        }
    }
    return dummy->next;
}
NODE *reverselist(NODE *first)
{
    NODE *temp = first;
    NODE *prev = NULL;
    while(temp)
    {
        NODE* next_node = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next_node;
    }
    return prev;
}
void insertnode(int index, int val, NODE * head)
{
    NODE* temp = head;
    NODE* prev = NULL;
    int pos = index;
    while(pos - 1)
    {
        temp = temp->next;
        pos -= 1;
    }
    NODE* next_node = temp->next;
    NODE* new_node = (NODE*)malloc(sizeof(NODE));
    new_node->data = val;
    new_node->next = next_node;
    temp->next = new_node;
}
