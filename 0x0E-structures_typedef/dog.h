#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - information of a dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Description: struct dog save some information like name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 *dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
