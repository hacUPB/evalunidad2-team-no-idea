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
    //Usar la función de buscar para que no agregue un event existente
    Event *evenT = SearchEvent(this, event);
    if(strcmp(event->eventName, eventT->eventName) < 0){
    if(this->isEmpty == 0){
        this->head = event;
        this->last = event;
        this->isEmpty = 1;
    }else{
        aux->next = event;
        this->last = event;
        }
    }
}

void RemoveEvent(EventList *this, char *name)
{
/*Se deben ingresar dos logicas la primera va a encargarse de eliminar
El evento que esta en la primera posicion, la segunda logica debe eliminar
Un elemento en alguna posicion n, la posicion puede ser el last*/
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
