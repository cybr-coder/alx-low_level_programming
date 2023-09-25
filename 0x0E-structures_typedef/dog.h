#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about dog
 *
 * @name: Name of dog as a string.
 * @age: Age of dog as a float.
 * @owner: Owner of dog as a string.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
