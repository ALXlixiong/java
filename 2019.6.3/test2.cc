#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
int GetoneKey(int* key, int len)  //1 3 5 之和//
{
    assert(key != NULL);
    int tmp = *(key + len - 1);
    int tmp1 = *key + *(key + 2) + *(key + 4);
    tmp1 = tmp1 % 2;
    len = len + 1;
    while (len--)
    {
        *(key + len - 1) = *(key + len - 2);
    }
    *key = tmp1;
    printf("tmp1= %d\n", tmp1);
    return tmp;
}
void Display(int* key, int len)
{
    assert(key != NULL);
    int i = 0;
    for (i = 0; i< len; i++)
    {
        printf("%d", *(key + i));
    }
    printf("\n");
}
void jiami(int* p, int len1, int*s, int len2)
{
    if (p == NULL || s == NULL)
    {
        return ;
    }
    for (int i = 0; i< len1; i++)
    {
        int tmp = GetoneKey(s, len2);
        *(p + i) = (*(p + i) + tmp) % 2;
    }

}
int main()
{
    int key[] = { 1, 0, 0, 0, 1, 1 };
    int len = sizeof(key) / sizeof(key[0]);
    int arr[] = { 1, 1, 0, 1, 1 };
    int len1 = sizeof(arr) / sizeof(arr[0]);
    jiami(arr, len1, key, len);
    Display(arr, len1);
    return 0;
}
