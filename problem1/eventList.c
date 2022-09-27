#include "eventList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

EventList *CreateEventList(void)
{

    EventList *elptr;
    elptr = (EventList *)malloc(sizeof(EventList));
    elptr ->head = NULL;
    elptr ->last = NULL;
    elptr ->isEmpty = 0;
    if(!elptr)
        perror("None memory space reserve");
    return elptr;
}

void DestroyEventList(EventList *this)
{

}

Event *SearchEvent(EventList *this, char *name)
{

}

void AddEvent(EventList *this, Event *event)
{
    event = malloc(sizeof(EventList));
    event = this->last;
    event->next = this->last;
    this->last = event;
}

void RemoveEvent(EventList *this, char *name)
{
}

void ListEvents(EventList *this)
{
    if(this->head = NULL){
        printf("empty\n");
    }
    
    Event *event;
    event = this->head;
    
    while(event != NULL){
        printf("%p - %s", event , event->eventName);
        event = event->next;
    }
}
