#include <stdlib.h>
#include "dog.h"
/**
 *new_dog -  creates a new dog.
 *@name: pointer to a string
 *@age: float variable
 *@owner: pointer to a string
 *Return: ptr on success or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->age = age;
	ptr->name = name;
	ptr->owner = owner;
	if (ptr->name == NULL)
		ptr->name = "(nil)";
	if (ptr->owner == NULL)
		ptr->owner = "(nil)";
	return (ptr);
}
