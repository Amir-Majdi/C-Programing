#include <stdio.h>
#include <ctype.h>

    void birthday(char bday, int x, char name[])
    {
    printf("\nHappy Birthday to you");
    printf("\nHappy Birthday to you");
    printf("\nHappy Birthday dear %s", name);
    printf("\nHappy Birthday to you");
    printf("\nYou are now %d years old\n", x);
    }

int main()
{
    char bday;
    int x;
    char name[30];
   
    printf("what is your name\n");
    scanf("%s", name);

    printf("is it your birthday type Yes or No: ");
    scanf(" %c", &bday);

    bday = toupper(bday);

    if (bday == 'Y')
    {
    printf("\nhow old are you turning\n");
    scanf("%d", &x);
    birthday(bday, x, name);
    }
    else
    {
        printf("ok have a good day %s\n", name);
    }
    
    
}

