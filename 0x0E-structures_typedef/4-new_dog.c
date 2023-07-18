#include <stdlib.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	dog_t dog;
	dog.name=name;
	dog.age=age;
	dog.owner=owner;
	ptr=&dog;
	return ptr;
}
