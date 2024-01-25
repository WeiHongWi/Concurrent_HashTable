#include "list.h"

using namespace std;

template<class T>
void list<T>::list_insert(T* n_node){
    if(!this->head){
    	this->head = n_node;
        return;
    }

    else{
        T* curr = this->head;
        T* tmp = NULL;
        while(curr->next){
            curr = curr->next;
        }
       curr->next = n_node;
   }
}


int main(){
    ht_item_list *head = new ht_item_list();

	ht_item *n_node = new ht_item(4,5);
	list<ht_item> item_list = head->get_item_list();
    item_list.list_insert(n_node);
    
    head->get_item_list() = item_list;	
    
    if(!head->get_item_list().list_head())
		cout << "ff" <<endl;
    return 0; 
}
