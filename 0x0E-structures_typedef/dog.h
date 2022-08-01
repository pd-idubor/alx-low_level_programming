#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines essentials of a dog
 * @name: dog name
 * @age: age
 * @owner: name of ownet
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
