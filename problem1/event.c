#include "event.h"
#include <string.h>
#include <stdlib.h>

Event *CreateEvent(char *name)
{
        Event *event=malloc(sizeof(Event));
    strncpy(evento->eventName,name,strlen(name) +1);
    event->next=NULL;
    return evento;
}


void DestroyEvent(Event *this)
{
   free(this);
}
