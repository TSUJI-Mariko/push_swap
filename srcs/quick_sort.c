#include "../includes/push_swap.h"

//#define MAX 100000

//int stack[MAX];

int partition(int *stack, int start, int end)
{
	int	end_value;
	int	start_index;
	int	current_index;
	int	tmp;

	end_value = stack[end];
	start_index = start - 1;
	current_index = start;
	while (current_index < end)
	{
		if (stack[current_index] <= end_value)
		{
			start_index++;
			tmp = stack[start_index];
			stack[start_index] = stack[current_index];
			stack[current_index] = tmp;
		}
		current_index++;
	}
	tmp = stack[start_index + 1];
	stack[start_index + 1] = stack[end];
	stack[end] = tmp;
	return (start_index + 1);
}

void	quicksort(int *stack, int start, int end)
{
	int index;
	if (start < end)
	{
		index = partition(stack, start, end);
		quicksort(stack, start, index - 1);
		quicksort(stack, index + 1, end);
	}
}
/*
int main(void)
{
	int	*stack;
	int	i;
	int	n;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &stack[i]);
	printf("\n");
	quicksort(stack, 0, n -1);
	for ( i = 0; i < n; i ++)
	{
		printf("%d ", stack[i]);
	}
	printf("\n");
	return (0);
}
*/
