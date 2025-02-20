#include "array-list.h"

#include <stdio.h>
#include <stdlib.h>

ArrayList* arraylist_init(unsigned capacity) {
    ArrayList* array_list = malloc(sizeof(ArrayList));

    array_list->capacity = capacity;
    array_list->size = 0;
    array_list->pointer = calloc(capacity, sizeof(*array_list->pointer));

    return array_list;
}

ArrayList* arraylist_append(ArrayList *array_list, int new_element) {
    int* aux_pointer = array_list->pointer;

    if (!array_list) {
        return NULL;
    }

    if (array_list->size == array_list->capacity) {
        aux_pointer = realloc(array_list->pointer, array_list->capacity * sizeof(*array_list->pointer) * 2);
        array_list->capacity *= 2;
    }

    if (!aux_pointer) {
        return NULL;
    }

    array_list->pointer = aux_pointer;
    array_list->pointer[array_list->size] = new_element;
    array_list->size++;

    return array_list;
}

ArrayList* arraylist_insert(ArrayList *array_list, int new_element, unsigned position) {
    int* aux_pointer = array_list->pointer;
    unsigned last_index = array_list->size - 1;

    if (array_list->size == 0 || array_list->size == position) {
        return arraylist_append(array_list, new_element);
    }

    if (array_list->size == array_list->capacity) {
        aux_pointer = realloc(array_list->pointer, array_list->capacity * sizeof(*array_list->pointer) * 2);
        array_list->capacity *= 2;
    }

    if (!aux_pointer) {
        return NULL;
    }

    for (unsigned i = 0; i < array_list->size - position; i++) {
        array_list->pointer[last_index - i + 1] = array_list->pointer[last_index - i];
    }

    array_list->pointer[position] = new_element;

    return array_list;
}

ArrayList* arraylist_update(ArrayList *array_list, int new_element, unsigned position) {
    array_list->pointer[position] = new_element;
    return array_list;
}

ArrayList* arraylist_delete(ArrayList *array_list, int new_element, unsigned position) {}
ArrayList* arraylist_print(ArrayList *array_list) {}
