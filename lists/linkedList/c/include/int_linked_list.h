/*
 * INT_LINKED_LIST.H
 *
 * Author       : Scott Hall
 * Contributors : Scott Hall (Github: smhall316)
 *                (Please add your name if you contribute)
 *
 * Description:
 * Implementation of an integer linked list
 * 
 */

// Variables
struct Node {
    struct Node *next;
    int data;
};

struct Node *HEAD;
struct Node *TAIL;
int LLIST_CNT;

// Function prototypes
int  get_list_length();
struct Node* get_node_at_index(int);
void initialize_linked_list();
int  insert_node(int, int);
int  insert_node_at_end(int);
void print_list();
int  remove_node(int);
int  remove_node_at_end();
int  delete_list();

