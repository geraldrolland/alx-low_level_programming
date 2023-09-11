#include <stdlib.h>
#include "dog.h"
int _strlen(char *str);
void _strcpy(char *str1, char *str2);
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
	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";

	ptr->name = malloc(_strlen(name) + 1);
	if (ptr->name == NULL)
		return (NULL);
	_strcpy(ptr->name, name);
	ptr->owner = malloc(_strlen(owner) + 1);
	if (ptr->owner == NULL)
		return (NULL);
	_strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
/**
 *_strlen - return the size of a string
 *@str: pointer to a string
 *Return: size
 */
int _strlen(char *str)
{
	int i, size = 0;

	for (i = 0; str[i] != '\0'; i++)
		size++;
	return (size);
}
/**
 *_strcpy - copies string
 *@str1: first string
 *@str2: second string
 *Return: str1
 */
void _strcpy(char *str1, char *str2)
{
	int i;

	for (i = 0; str2[i] != '\0'; i++)
		str1[i] = str2[i];
	str1[i] = '\0';
}
