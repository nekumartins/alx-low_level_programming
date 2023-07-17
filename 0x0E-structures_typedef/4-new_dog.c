#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 */
void _strcpy(char *dest, char *src)
{
	int i, length = 0;

	while (src[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nameLength = 0, ownerLength = 0;

	while (name[nameLength] != '\0')
		nameLength++;
	while (owner[ownerLength] != '\0')
		ownerLength++;
	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !name || !owner)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (nameLength + 1));
	new_dog->owner = malloc(sizeof(char) * (ownerLength + 1));
	if (!new_dog->owner || !new_dog->name)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
