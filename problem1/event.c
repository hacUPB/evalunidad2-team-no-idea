#include "event.h"
#include <string.h>
#include <stdlib.h>

Event *CreateEvent(char *name)
{  
        
Event *ptr = malloc(sizeof(Event ));
   name[15] = 0;
   strcpy(ptr->eventName, name);
        
   ptr->next = NULL;
        
}


void DestroyEvent(Event *this)
{
   free(this);
}
