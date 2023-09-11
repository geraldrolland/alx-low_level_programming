#ifndef DOG_H
#define DOG_H
/**
 *struct dog - user defined datatype
 *@name: string member
 *@age: float member
 *@owner: string member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
