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
    
    head->get_item_list().list_insert(n_node);    
    
    if(!head->get_item_list().list_head()){
	    cout<<"gg"<<endl;
	}	
	
	cout<<head->get_item_list().list_head()->hash<<endl;
	return 0; 
}
