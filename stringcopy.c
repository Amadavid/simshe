#include "main.h"

/**
 * string_copy - Copy the contents of the source string to the destination
 * and ensure that the destination is null-terminated.
 *
 * @param destination: The destination string where the contents will be copied.
 * @param source: The source string from which contents will be copied.
 *
 * Return: A pointer to the destination string.
 **/
char *string_copy(char *destination, char *source)
{
    int source_index = 0; // Initialize an index for the source string.

    // Copy characters from the source to the destination until a null terminator is encountered.
    while (source[source_index] != '\0')
    {
        destination[source_index] = source[source_index]; // Copy a character.
        source_index++; // Move to the next character in the source string.
    }

    destination[source_index] = '\0'; // Null-terminate the destination string.
    
    return (destination); // Return a pointer to the destination string.
}
