#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure containing the info of a dog
 * @name: pointer containing name of a dog
 * @age: contains the dogs age
 * @owner: contains the name of the dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
