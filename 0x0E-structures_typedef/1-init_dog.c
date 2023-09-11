#include "dog.h"
/**
 *init_dog - initialize a variable of type struct dog
 *@d: pointer to a structure
 *@name: pointer to a string
 *@age: float variable
 *@owner: pointer to a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
