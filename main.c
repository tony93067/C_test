// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    int len;
};
void swap(struct node* a, struct node* b)
{
    struct node temp;
    temp.num = a->num;
    temp.len = a->len;
    a->num = b->num;
    a->len = b->len;
    b->num = temp.num;
    b->len = temp.len;
}
void sort(struct node* list, int length)
{
    for(int i = 1; i < length; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(list[j].num < list[j-1].num)
                swap(&list[j], &list[j-1]);
        }
    }
}
void test();
int main() {
    // struct node* list = (struct node*)malloc(sizeof(struct node)*4);

    // list[0].num = 1;
    // list[1].num = 7;
    // list[2].num = 4;
    // list[3].num = 10;
    
    // list[0].len = 5;
    // list[1].len = 5;
    // list[2].len = 6;
    // list[3].len = 8;
    // // delete_num(arr, 4, len);
    // sort(list, 4);
    // for(int i = 0; i < 4; i++)
    // {
    //     printf("%d ", list[i].num);
    //     printf("%d\n", list[i].len);
    // }
    int a;
    printf("%d\n", a);
    a = 6;
    test();
    printf("%d\n", a);
    return 0;
}