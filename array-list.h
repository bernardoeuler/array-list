typedef struct {
    unsigned capacity;
    unsigned size;
    int *pointer;
} ArrayList;

void arraylist_append(ArrayList *array_list, int new_element);
void arraylist_insert(ArrayList *array_list, int new_element, unsigned position);
void arraylist_update(ArrayList *array_list, int new_element, unsigned position);
void arraylist_delete(ArrayList *array_list, int new_element, unsigned position);
void arraylist_print(ArrayList *array_list);
