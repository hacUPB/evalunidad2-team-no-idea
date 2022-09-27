#include "event.h"
#include <string.h>
#include <stdlib.h>

Event *CreateEvent(char *name)
{  
        /*
        Event *eptr = malloc(sizeof(Event));
        name[15] = 0;
        strncpy(eptr->eventName,name,strlen(name) + 1);
        eptr ->next = NULL;
        return eptr; 
        */
        Event *event;
        char nameE;
        name = &nameE;
        event = malloc(sizeof(Event));
        event ->eventName[0] = nameE;
        return event;
}


void DestroyEvent(Event *this)
{
   free(this);
}
