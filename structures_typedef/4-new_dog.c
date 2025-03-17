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
int nameindex = 0;
int ownindex = 0;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = malloc(sizeof(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(sizeof(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
while (nameindex != '\0')
{
new_dog->name[nameindex] = name[nameindex];
nameindex++;
}
new_dog->name = name;
new_dog->age = age;
while (ownindex != '\0')
{
new_dog->owner[ownindex] = owner[ownindex];
ownindex++;
}
new_dog->owner[ownindex] = '\0';
return (new_dog);
}
