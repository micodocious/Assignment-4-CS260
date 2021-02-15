#include "arbitary_list.h"


//construct a linked list
arbitary_list::arbitary_list() {
    front = nullptr;
}
/* 
Create a new node, go to the (n-1)th node, set the link field of the new node equal to the link field of (n-1)th node. 
Once link is built, break link and set link of newly created node as address of this. 

IF statement is O(2n) = O(n), still linear
FOR statement is O(n) complexity because you go thorugh the string n times
This function has a O(n) complexity overall
*/
void arbitary_list::add(int value, int position) {
    node *new_node = new node();
    new_node->value = value;
    new_node->next = NULL;          //Set data field and link as NULL
    if(position == 1) {             //if position is equal to 1 we set link field of new node as the front 
        new_node->next = front;
        front = new_node;
        return;
    }
    node *new_node_2 = front;
    for(int i = 0; i < position - 2; i++){      //starting at the front, loop until you hit (n-1)th node
        new_node_2 = new_node_2->next;          //run loop position-2 times because you are pointing to the front
    }
    new_node->next = new_node_2->next;
    new_node_2->next = new_node;
}

/*
Fix links so that the node isn't part of the list than free the list

O(n) complexity
*/
void arbitary_list::remove(int position) {
    node *temp_1 = front; 
    if(position==1){
        front = temp_1->next;
        free(temp_1);
        return;
    }

    int i;
    for(i = 0; i < position - 2; i++)
        temp_1 = temp_1->next;

    node *temp_2 = temp_1->next;
    temp_1->next = temp_2->next;
    free(temp_2);

}
/* a temporary pointer to node initally pointing to front, travering through each element. O(n) complexity*/
void arbitary_list::peek() {
    node *temp = front;
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}