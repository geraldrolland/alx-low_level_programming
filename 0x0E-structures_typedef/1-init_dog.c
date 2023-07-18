/**
*init_dog - initialise structure
*@d: input value
*@name: input value
*@age: input value
*@owner: input value
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
