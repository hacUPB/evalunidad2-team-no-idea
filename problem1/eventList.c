#include "eventList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

EventList *CreateEventList(void)
{
    EventList *evento;
    evento = (EventList *)malloc(sizeof(EventList));
    evento ->head = NULL;
    evento ->last = NULL;
    evento ->isEmpty = 0;
    if(!evento)
        perror("None memory space reserve");
    return evento;
}

void DestroyEventList(EventList *this)
{

}

Event *SearchEvent(EventList *this, char *name)
{

}

void AddEvent(EventList *this, Event *event)
{

}

void RemoveEvent(EventList *this, char *name)
{
}

void ListEvents(EventList *this)
{

}
