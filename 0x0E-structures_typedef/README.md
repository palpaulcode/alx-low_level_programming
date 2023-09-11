# 0x0E C - Structures, typedef
This directory contains coding challenges from the aforementioned section in the C course in the ALX_SE curriculum.

## File `dog.h`
This file contains type `struct dog` with elements:
* `name`, type = `char *`
* `age`, type = `float`
* `owner`, type = `char *`

## File `1-init_dog.c`
This file contains a function that initializes a variable of type `struct dog`. The prototype to this function is as follows: `void init_dog(struct dog *d, char *name, float age, char *owner);`

## File `2-print_dog.c`
This file contains a function that prints a `struct dog`
* Prototype: `void print_dog(struct dog *d);`
* If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
* If `d` is `NULL` print nothing.

## File `dog.h`
Define a new type `dog_t` as a new name for the type `struct dog`

## File `4-new_dog.c`
This file contains a function that creates a new dog
* Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
* You have to store a copy of `name` and `owner`
* Return `NULL` if the function fails

## File `5-free_dog.c`
This file contains a function that frees dogs (memory used to represent dog)
* Prototype: `void free_dog(dog_t *d);`

