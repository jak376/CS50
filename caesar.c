#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc==2)
    for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[i]))    
            printf("Success\n");
        }   
    else
    {
        printf("Usage ./caesar key\n");
    }
}
