#include <stdio.h>
#include <string.h>

int main()
{
    char string[250],max_character;
    int i,length=0,max_number=-1,*ptr;
    ptr=string;
    printf("Enter a string.\n");
    scanf("%[^\n]s",&string);
    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        ptr[string[i]]++;
    }
    for(i=0;i<length;i++)
    {
        if(max_number<ptr[string[i]])
        {
            max_number = ptr[string[i]];
            max_character = string[i];
        }
    }
    printf("The most repeated character is %c , it is repeated %d times.\n",max_character,max_number);
    for(i=0;i<max_number;i++)
    {
        printf("%c",max_character);
    }
      return 0;
}
