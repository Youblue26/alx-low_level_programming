#include <stdlib.h>
#include "main.h"
/**
 * Allocates memory using malloc and checks if the allocation was successful.
 *
 * @param size The number of bytes to allocate.
 * @return A pointer to the allocated memory.
 * @throws If the allocation fails, the function terminates the program.
 */
void *malloc_checked(size_t size) {
// Function implementation
}
void *malloc_checked(unsigned int b)

{

	void *ptr;


	ptr = malloc(b);


	if (ptr == NULL)

		exit(98);


	return (ptr);
}
