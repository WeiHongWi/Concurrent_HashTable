#include <iostream>

class ht_item{
	public:
    	unsigned int hash;
		int dlen;
		ht_item *next;

		ht_item(int hash,int dlen){
		    this->next = NULL;
			this->hash = hash;
			this->dlen = dlen;
		}
};

template<class T>
class list{
	T* head;
	public:
	list(){
	    this->head = NULL;
	}
	list(T* node){
	    this->head = node;
	}

    T* list_head(){
		return this->head;
	}
    
	bool list_empty(){
	    return this->head == NULL;
	}
    void list_insert(T* n_node);
	T* list_concat(T& head1 , T& head2);

	T* list_remove(T* d_node);
    
//	list operator=(list l1);
};

class ht_item_list{
	private:
    	size_t index;
		list<ht_item> head;
		ht_item_list *next;
    public:
		ht_item_list(){
		    this->head = NULL;
			this->next = NULL;
			index = 0;
		}

		list<ht_item>& get_item_list(){
		    return this->head;
		}

		size_t& get_index(){
		    return this->index;
		}

 };

class ht_iterator_list{
    public:
		list<ht_item_list> head;
};

