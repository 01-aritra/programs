// stack practice
// link inversiton using stack

#include<stdio.h>
#include<stdlib.h>

struct Treenode
{
    int data;
    struct Treenode * left;
    struct Treenode * right;

};

struct Stacknode
{
    struct Stacknode * treenode;
    struct Stacknode * next;
};



