#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200


void like(char* names, char* res)
{
    //n-кількість слів, i-кількість символів
    int n = 1, i = 0;
    //масив, який зберігає координати пробілів
    int arr[15] = { 0 };
    char sym[2] = { 0 };

    for (; names[i] != '\0'; ++i)
    {
        if (names[i] == ' ')
        {
            arr[n] = i;
            ++n;
        }
    }

    if (i == 1)
        strcat(res, "no one likes this");

    else if (n == 1)
    {
        names[i - 1] = ' ';
        strcat(res, names);
        strcat(res, "likes this");
    }

    else
    {
        for (int j = 0; j < arr[1]; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
    }


    if (n == 2)
    {
        strcat(res, " and");
        for (int j = arr[1]; j < i - 1; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
        strcat(res, " ");
    }

    else if (n == 3)
    {
        strcat(res, ",");
        for (int j = arr[1]; j < arr[2]; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
        strcat(res, " and");
        for (int j = arr[2]; j < i - 1; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
        strcat(res, " ");
    }

    else if (n > 3)
    {
        strcat(res, ",");
        for (int j = arr[1]; j < arr[2]; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
        strcat(res, " and ");
        char res1[SIZE] = { 0 };
        sprintf( res1, "% d", n - 2);
        strcat(res, res1);
        strcat(res, " others ");
    }
    if (n > 1)
        strcat(res, "like this");
}
int main()
{
    char names[SIZE];
    char res[SIZE]  = { 0 };
    fgets(names, SIZE, stdin);
    like(names, res);
    puts(res);
    return 0;
}
