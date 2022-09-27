#include "eventList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

EventList *CreateEventList(void)
{
    EventList *event;
    event = (EventList *)malloc(sizeof(EventList));
    event ->head = NULL;
    event ->last = NULL;
    event ->isEmpty = 0;
    if(!event)
        perror("None memory space reserve");
    return event;
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
