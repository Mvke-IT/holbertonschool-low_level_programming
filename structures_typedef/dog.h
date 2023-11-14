#ifndef "dog_h"
#define "dog_h"
/**
 *struct dog
 *@name: is name 
 *@age:is age
 *@owner: owner is dog
 *return: to 0
 */
struct dog
{
  char *name;
  float age;
  char *owner;
};
typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
