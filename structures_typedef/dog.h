#ifndef "dog_h"
#define "dog_h"
/**
 *@char*: name and owner
 *@float: age
 */
struct dog
{
  char* name;
  float age;
  char* owner;
};
typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
