#include <iostream>
#include <stdlib.h>
#include "basic_int_stack.h"

using namespace std;
int basic_int_stack::next_max() {
    int_node *ptr2 = top_ptr;
    int max = ptr2->data;
    int next_max = ptr2->data;
    while (ptr2 != NULL) {
        if (ptr2->data > max) {
            max = ptr2->data;
            next_max = ptr2->data;
        }
        if ((ptr2->data > next_max) && (ptr2->data != max))
            next_max = ptr2->data;
        ptr2 = ptr2->next;
    }
    return next_max;
}

int main() {
    cout << "Hello, World!" << endl;
    int a = list1.max();
    cout << a << endl;
    a = list1.next_max(a);
    cout << a << endl;
    a = list1.next_max(a);
    cout << a <<endl;
    a = list1.next_max(a);
    cout << a <<endl;
    a = list1.next_max(a);
    cout << a <<endl;
    return 0;
}

int basic_int_stack::max(){
    if (current_size == 0) return 0;
    int_node * ptr = top_ptr;
    int temp = ptr -> data;
    while (ptr != NULL){
        if (temp < ptr -> data)
            temp = ptr -> data;
        ptr = ptr -> next;
    }
    return temp;
}

int_node::int_node(int new_data, int_node * new_node){
    data = new_data;
    next = new_node;
}

basic_int_stack::basic_int_stack(){
    current_size = 0;
    top_ptr = NULL;
}

void basic_int_stack::push(int value){
    current_size++;
    top_ptr = new int_node(value, top_ptr);
}