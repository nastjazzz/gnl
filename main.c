#include <fcntl.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int fd = 0;
	int i = 0;
	char *line;

	if (argc > 1)
	{
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			while (get_next_line(fd, &line) > 0)
			{
				ft_putendl(line);
				free(line);
				line = NULL;
			}
			close(fd);
		}
	}
	return (0);
}
