#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct test
{
    int num;
    char str[22];
    double d;
};
typedef enum direction Direction;
int is_poweroftwo(int n)
{
    if((n & (-n)) == n)
    {
        return 1;
    }else{
        return 0;
    }
}
/* Enum with prefix. */
enum direction {
    Direction_North,
    Direction_South,
    Direction_East,
    Direction_West
};
int main()
{
    int num[5] = {1, 2, 3, 4, 5};
    int *ptr = num;
    int a = Direction_East;
    printf("power of 2 %d\n", is_poweroftwo(8));
    printf("Direction_East %d\n",a);
    printf("%p %p\n", num, ptr+1);
    printf("%d\n", sizeof(struct test));
    // char temp[5] = "hello";
    // char temp2[] = "hello";
    // char *ptr;
    // ptr = malloc(sizeof(char)*5);
    // if (ptr == NULL) {
	//     printf("建立記憶體區域失敗...\n");
	//     exit(1);
    // }
    // strcpy(ptr, "History repeats itself.");
    // ptr = realloc(ptr, 25);
    // printf("%s\n", ptr);
    // if(ptr == NULL) {
	//     printf("擴充記憶體區域失敗...\n");
	//     exit(1);
    // }
    // printf("temp size %d\n", sizeof(temp));
    // printf("temp2 size %d\n", sizeof(temp2));
    // // for(int i = 0; i < 6; i++)
    // // {
    // //     printf("%c", temp[i]);
    // // }
    // // printf("\n");
    // strcat(ptr, "\n");
    // printf(ptr);
    // free(ptr);
    return 0;
}