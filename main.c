#include <stdio.h>
#include "rules.h"
#include "ideas.h"
int main(int argv, char *argc[]);
static uint8_t Size_Ideas=0U;

int main(int argv, char *argc[])
{
    uint8_t nr;
   
    printf("%d \n",sizeof(tab_ideas[0]));
    
    for(nr=0U; tab_ideas[nr] != '\0'; nr++)
    {
        printf("%d\n",&tab_ideas[nr]);
        printf("%s\n\n",tab_ideas[nr]);
        Size_Ideas++;
    }
    printf(" Size of ideas array %d\n",Size_Ideas);


}
