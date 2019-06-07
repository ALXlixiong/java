#include <iostream>
#include <string.h>
using namespace std;
#define NUM 1000//定义最大值
int main()
{
    int key[4][4];
    int word1[NUM];
    char word2[NUM];
    int num;
    char voa[26] = { 'A','B','C','D','E','F','G','H','I',
        'J','K','L','M','N','O','P','Q','R','S',
        'T','U','V','W','X','Y','Z' };
    cout << "请输入需要加(解)密的密钥矩阵：(范围:0~25)" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> key[i][j];
        }
    }
    char *word = "MynameischenyiIamagirl";
    num = strlen(word);
    for (int p = 0; p<num; p++)          //将字母转换为数字
    {
        for (int j = 0; j < 26; j++)
        {
            if ((word[p] == voa[j]) || (word[p] == (voa[j] + 32)))
            {
                word1[p] = j;
            }
        }
    }
    for (int i1 = 0; i1<num; i1 += 2)     //加解密算法
    {
        word2[i1] = (key[0][0] * word1[i1] + key[0][1] * word1[i1 + 1]) % 26;
        word2[i1 + 1] = (key[1][0] * word1[i1] + key[1][1] * word1[i1 + 1]) % 26;
    }
    for (int j = 0; j<num; j++)
    {
        for (int k = 0; k < 26; k++)
        {
            if (word2[j] == k)word2[j] = voa[k];
        }
    }
    cout << "经过加（解）密变换后的值为：" << endl;
    for (int k = 0; k < num; k++)
    {
        cout << word2[k];
    }
    cout << endl;
    return 0;
}
