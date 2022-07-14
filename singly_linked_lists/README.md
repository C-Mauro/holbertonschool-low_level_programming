C- singly linked list.

--LEARNING OBJETIVES--

                General
-When and why using linked lists vs arrays
-How to build and use linked lists


---DATA STRUCTURE--
******************************************************************

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

*******************************************************************
