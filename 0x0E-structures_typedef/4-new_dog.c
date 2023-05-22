#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * _strcpy - copies the content of one pointer to another
 * _strlen - prints the length of a string
 * @name: dog's name
 * @age: age of the dog
 * @owner: the name of the owner of the dog
 */

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = _strlen(owner);
	int m = _strlen(name);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (m + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (i + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}

/**
 * _strlen - prints the length of a string
 * @s: pointer to be printed
 * Return: s
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}

/**
 * _strcpy - copies the content of one pointer to another
 * @dest: pointer string to be copied
 * @src: pointer string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j, k = 0;

	while (src[k] != '\0')
	{
		k++;
	}

	for (j = 0; j < k; j++)
	{
		dest[j] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}
