#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - Typedef structure
 */
typedef struct dog dog_t;
/**
 * struct dog - Main structure
 * @name: name
 * @age: age
 * @owner: owner
 * Description: Dog structure with name age & owner
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
