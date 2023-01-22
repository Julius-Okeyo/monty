#include "monty.h"

stack_t **global_head;
/**
 * main - controls other opcodes
 * @argc: number of arguments passed to program
 * @argv: arguments vector
 * Return: EXIT_SUCCESS (Success)
 */
int main(int argc, char *argv[])
{
	stack_t *head;
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	head = NULL;
	global_head = &head;
	read_file(argv[1], &head);
	atexit(global_free);
	exit(EXIT_SUCCESS);
}
