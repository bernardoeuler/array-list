typedef struct {
    unsigned capacity;
    unsigned size;
    int *pointer;
} ArrayList;

ArrayList* arraylist_append(ArrayList *array_list, int new_element);
ArrayList* arraylist_insert(ArrayList *array_list, int new_element, unsigned position);
ArrayList* arraylist_update(ArrayList *array_list, int new_element, unsigned position);
ArrayList* arraylist_delete(ArrayList *array_list, int new_element, unsigned position);
ArrayList* arraylist_print(ArrayList *array_list);
