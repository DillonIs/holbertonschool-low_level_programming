#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: Returns the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int nameindex;
int ownindex;
int i, j;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
for (nameindex = 0; name[nameindex] != '\0'; nameindex++)
;
for (ownindex = 0; owner[ownindex] != '\0'; ownindex++)
;
new_dog->name = malloc(nameindex + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(ownindex + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (i = 0; i < nameindex; i++)
{
new_dog->name[i] = name[i];
}
new_dog->name[nameindex] = '\0';
new_dog->age = age;
for (j = 0; j < ownindex; j++)
{
new_dog->owner[j] = owner[j];
}
new_dog->owner[ownindex] = '\0';
return (new_dog);
}
