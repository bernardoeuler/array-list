#include "array-list.h"

#include <stdio.h>
#include <stdlib.h>

ArrayList* arraylist_append(ArrayList *array_list, int new_element) {
    int* aux_pointer = array_list->pointer;

    if (!array_list) {
        return NULL;
    }

    if (array_list->size == array_list->capacity) {
        aux_pointer = realloc(array_list->pointer, sizeof(*array_list->pointer) * 2);
        array_list->capacity *= 2;
    }

    if (!aux_pointer) {
        return NULL;
    }

    array_list->pointer[array_list->size] = new_element;
    array_list->size++;

    return array_list;
}

ArrayList* arraylist_insert(ArrayList *array_list, int new_element, unsigned position) {}
ArrayList* arraylist_update(ArrayList *array_list, int new_element, unsigned position) {}
ArrayList* arraylist_delete(ArrayList *array_list, int new_element, unsigned position) {}
ArrayList* arraylist_print(ArrayList *array_list) {}
