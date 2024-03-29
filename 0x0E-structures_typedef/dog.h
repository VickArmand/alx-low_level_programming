#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner:dog owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif
