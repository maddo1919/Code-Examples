#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fpointer;
	int linecounter = 0; 
	char	*singleline = malloc(1 * sizeof(char));
	fpointer = open("/nfs/homes/mdoughty/mygit/git/Common_Core/getNextLine/test",256);
	while (singleline != NULL)
	{
		free(singleline);
		singleline = get_next_line(fpointer);
		if (linecounter == 3)
		{
		printf("%s", singleline);
		}
		linecounter++;
	}
	return (0);
}
