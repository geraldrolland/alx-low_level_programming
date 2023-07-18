#ifndef DOG_H
#define DOG_H
/**
*struct dog - initialise structure
*@name : structure member
*@age: structure member
*@owner: structure member
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
