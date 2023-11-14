#ifndef dog_h
#define dog_h
#include <stdio.h>
/**
 *struct dog - define struncture
 *@name: is name
 *@age:is age
 *@owner: owner is dog
 *return: to 0
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
