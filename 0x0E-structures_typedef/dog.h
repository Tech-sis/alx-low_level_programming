#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
