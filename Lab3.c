#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200


void like(char* names, char* res)
{
    int number_of_words = 1, number_of_symbols = 0;
    int arr[15] = { 0 };
    char sym[2] = { 0 };

    for (; names[number_of_symbols] != '\0'; ++number_of_symbols)
    {
        if (names[number_of_symbols] == ' ')
        {
            arr[number_of_words] = number_of_symbols;
            ++number_of_words;
        }
    }

    if (number_of_symbols == 1)
        strcat(res, "no one likes this");

    else if (number_of_words == 1)
    {
        names[number_of_symbols - 1] = ' ';
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


    if (number_of_words == 2)
    {
        strcat(res, " and");
        for (int j = arr[1]; j < number_of_symbols - 1; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
        strcat(res, " ");
    }

    else if (number_of_words == 3)
    {
        strcat(res, ",");
        for (int j = arr[1]; j < arr[2]; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
        strcat(res, " and");
        for (int j = arr[2]; j < number_of_symbols - 1; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
        strcat(res, " ");
    }

    else if (number_of_words > 3)
    {
        strcat(res, ",");
        for (int j = arr[1]; j < arr[2]; ++j)
        {
            sym[0] = names[j];
            strcat(res, sym);
        }
        strcat(res, " and ");
        char res1[SIZE] = { 0 };
        sprintf(res1, "% d", number_of_words - 2);
        strcat(res, res1);
        strcat(res, " others ");
    }
    if (number_of_words > 1)
        strcat(res, "like this");
}
int main()
{
    char names[SIZE];
    char res[SIZE] = { 0 };
    fgets(names, SIZE, stdin);
    like(names, res);
    puts(res);
    return 0;
}
