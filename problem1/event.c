#include "event.h"
#include <string.h>
#include <stdlib.h>

Event *CreateEvent(char *name)
{  
        
Event *ptr = malloc(sizeof(Event ));
        
   strcpy(ptr->eventName, name);
   ptr->next = NULL;
        
}


void DestroyEvent(Event *this)
{
   free(this);
}
