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
free(this);
}

Event *SearchEvent(EventList *this, char *name)
{
    Event *event = this->head;

    if(this->isEmpty != 0){
        while(event != NULL){
            if(strcmp(name, event->eventName) == 0){
                return event;
            }else{
                event = event->next;
            }
        }
    }else{
        return NULL;
    }
}

void AddEvent(EventList *this, Event *event)
{
    Event *aux = this->last;
    Event *eventT = SearchEvent(this, event->eventName);
    
    do{
        if(this->isEmpty == 0){
            this->head = event;
            this->last = event;
            this->isEmpty = 1;
        }else{
            if(eventT->eventName == event->eventName){
                eventT = NULL;
            }else{
                aux->next = event;
                this->last = event;
                eventT = NULL;
            }
        }
    }
    while(eventT != NULL);
}

void RemoveEvent(EventList *this, char *name)
{
    Event *event = this->head;

    Event *nEvent = this->head;

    if(this->isEmpty != 0){
        while(event != NULL){
            if(strcmp(name, event->eventName) == 0){
                if(event == this->head){
                    this->head = event->next;
                    /*event->eventName = NULL;
                    event->next = NULL;*/
                }else {
                    while(nEvent->next != event->next){
                        if(event == this->last){
                            this->last = nEvent;
                            if(nEvent->next == event){
                                nEvent->next = NULL;
                            }else{
                                nEvent = nEvent->next;
                            }
                        }
                        
                        if(event != this->last){
                            if(nEvent->next == event){
                                nEvent->next = event->next;
                            }else{
                                nEvent = nEvent->next;
                            }
                        }
                    }
                    /*event->eventName = NULL;
                    event->next = NULL;*/
                }
                
            }else{
                event = event->next;
            }
        }
    }else{
        printf("empty\n");
    }
}

void ListEvents(EventList *this)
{
    Event *aux = this->head;

    if(this->isEmpty == 0){
        printf("empty\n");
    }else{
        do{
            printf("%s\n", aux->eventName);
            aux = aux->next;
        }
        while(aux != NULL);
        
    }
}
