#include <stdio.h>
#include "rules.h"
#include "ideas.h"
#include "character.h"
#include <time.h>
#include <stdlib.h>

int main(int argv, char *argc[]);
static uint8_t Size_Ideas=0U;

int main(int argv, char *argc[])
{
    uint8_t nr;
    time_t time_uint32;
    struct timespec time_us;
    
    time(&time_uint32);


    printf(" time %lu\n",(long)time_uint32);

    srand((unsigned int)time_uint32);
    (void)rand();
    
    printf("%d \n",sizeof(tab_ideas[0]));
    
    for(nr=0U; tab_ideas[nr] != '\0'; nr++)
    {
        printf("%d\n",&tab_ideas[nr]);
        printf("%s\n\n",tab_ideas[nr]);
        Size_Ideas++;
    }
    printf(" Size of ideas array %d\n",Size_Ideas);
    
    character_t hero1;

    create_character(&hero1);
}
