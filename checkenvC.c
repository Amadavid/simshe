#include "sheell.h"

/**
 * checkenvironCommand - Check if the provided command is d env command and display
 * the environment variables if it matches
 *
 * @command: The command entered by d user
 *
 * Return: EXIT_SUCCESS if @command is the "env" command; or, EXIT_FAILURE.
 * 
*/
int displayEnv() {
    // Implementation of displaying environment variables goes here
    return (EXIT_SUCCESS);
}
int checkenvironCommand(char *command)
{
	
    char envCommand[] = "env";
	int index = 0;

	if (command == NULL)
	{
		return (EXIT_FAILURE);
	}
	while (env[index] != '\0')
	{
		if (command[index] != env[index])
		{
			return (EXIT_FAILURE);
		}
		index++;
	}
	if (command[index] != '\0')
	{
		return (EXIT_FAILURE);
	}
	displayEnv();
	signal_received = EXIT_SUCCESS;
	return (EXIT_SUCCESS);
}