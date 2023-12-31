#ifndef dog_h
#define dog_h
/**
 *struct dog - define structure
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

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
