#include "monty.h"
/**
 * f_push - adds a node to the stack
 * @head: the head
 * @counter: the line_number
 * Return: no return
*/

void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = o;
	
	if(bus.arg)
	{	
		if(bus.arg[0] == '-')
			j++;
		for(; bus.arg[j] != '\0'; j++)
		{
			if(bus.arg[j]) > 57 || bus.arg[j] < 48 )
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter)
				flcose(bus.file);
				free(bus.content);
				free_stack(*head);
				exit(EXIT_FAILURE);
		}
	} else {
			fprint(stderr, "L%d: usage: push integer\n", counter);
				flcose(bus.file);
				free(bus.content);	
				free_stack(*head);
				exit(EXIT_FAILURE);
		}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else 
		addqueue(head, n);
}
