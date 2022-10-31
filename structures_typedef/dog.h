#ifndef DOG_T_H
#define DOG_T_H

/**
 * struct dog_t - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Define a simple struct named dog
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
