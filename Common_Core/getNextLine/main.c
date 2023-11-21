#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fpointer;
	char	*singleline = malloc(1 * sizeof(char));
	fpointer = open("/home/matthew/getNextLine/test",256);
	while (singleline != NULL)
	{
		free(singleline);
		singleline = get_next_line(fpointer);
		printf("%s", singleline);
	}
	return (0);
}
