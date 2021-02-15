/*
Assignment 4
Mico Santiago
CS 260 Data Structures

This assignment is to get you to think about the trade-offs that we may have to weigh before using one structure over another

*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "arbitary_list.cpp"

using std::cout;
using std::cin;
using std::endl;


int main(int argc, char **argv) {
    arbitary_list *my_list = new arbitary_list();

    //adding (element, position)
    my_list->add(22,1);      
    my_list->peek();
    my_list->add(3,2);
    my_list->peek();
    my_list->add(410,1);
    my_list->peek();
    my_list->add(100001,2);
    my_list->peek();

    //removing (position)
    my_list->remove(1);
    my_list->peek();
    my_list->remove(2);
    my_list->peek();
    my_list->remove(2);
    my_list->peek();
    my_list->remove(2);
    my_list->peek();

    return 0;
}