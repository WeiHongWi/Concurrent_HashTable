#include <iostream>
// Implementation of the entry of the hash table
// The member of the data type are :
// (1) Pointer of next entry
// (2) Pointer of element
// (3) Index number for calculate the hash function in the entry linked list

typedef enum {
  HT_STATUS_CLEAR = 0; HT_STATUS_WRITE; HT_STATUS_READ; HT_STATUS_GROW;
  HT_STATUS_IDLE;
  HT_STATUS_READ;
}ht_status_t;

class hash_t {
 private:
  size_t size;
  size_t max_size;
  hash_item_list **it;
  hash_iterator_list *head;
  ht_status_t status;

 public:
};
