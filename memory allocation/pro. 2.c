/*The use of  functions free() and realloc()*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char *msg;
    msg = (char *) malloc(30 * sizeof(char));
    strcopy (msg, "Able Was I");
    printf("The message now is %s \n",msg) ;
    msg = (char*) realloc (msg, 50);
    strcopy (msg, "I am Adarsh Ku...");
    printf("\n The message is now %s", msg);
    free(msg);

}
