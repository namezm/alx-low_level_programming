#include "main.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, name2, owner2;
	int name2 = 0;
	int owner2 = 0;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	while (name[name2] != '\0')
	{
		name2++;
	}
	while (owner[owner2] != '\0')
	{
		owner2++;
	}
	p_dog->name = malloc(name2 + 1);
	p_dog->owner = malloc(owner2 + 1);
	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->name);
		free(p_dog->owner);
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < name2; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';
	p_dog->age = age;
	for (i = 0; i < owner2; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);



}

