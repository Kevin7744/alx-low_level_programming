#include "monty.h"
/**
  *f_nop- does nothing
  *@head: the stack head
  *@counter: line_number
  *Return: no return
 */
void f_nop(stack_t **head, unsigned int counter)
{
        (void) counter;
        (void) head;
}


nano sub.c

#include "monty.h"
/**
  *f_sub- substracts the top two elements of the stack
  *@head: the stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
        stack_t *aux;
        int sus, nodes;

        aux = *head;
        for (nodes = 0; aux != NULL; nodes++)
                aux = aux->next;
        if (nodes < 2)
        {
                fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        aux = *head;
        sus = aux->next->n - aux->n;
        aux->next->n = sus;
        *head = aux->next;
        free(aux);
}
