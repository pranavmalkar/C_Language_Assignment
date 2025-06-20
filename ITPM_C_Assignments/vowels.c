#include<stdio.h>
int main()
{
    char character;
    printf("/n Enter the Char");
    scanf("%c" ,&character);

    if(character=='a' || character=='e' || character=='i' || character=='o' ||character=='u'||character=='A' || character=='E' || character=='I' || character=='O' ||character=='U')
    {
        printf("/n This are vowels");
    }
    else{
        printf("/n This are consonant");
    }
    return 0;
}
