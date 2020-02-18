#include "get_next_line.h"

static void		ft_join_free(char **s, char *buf)
{
	char		*temp;

	temp = ft_strjoin(*s, buf);
	free(*s);
	*s = temp;
}

static char		*ft_check(char **s)
{
	char		*temp;
	char		*str;
	int			i;

	i = 0;
	while ((*s)[i] != '\0' && (*s)[i] != '\n')
		i++;
	str = ft_strsub(*s, 0, i);
	if ((ft_strchr(*s, '\n')))
		temp = ft_strdup(*(s) + i + 1);
	else
		temp = ft_strdup(*(s) + i);
	free(*s);
	*s = temp;
	return (str);
}

int				get_next_line(const int fd, char **line)
{
	static char	*s[FD_MAX];
	ssize_t		red;
	char		buf[BUFF_SIZE + 1];

	if (fd < 0 || fd > FD_MAX || !line || BUFF_SIZE < 1)
		return (-1);
	if (s[fd] == NULL)
		s[fd] = ft_strnew(0);
	while ((red = read(fd, buf, BUFF_SIZE)))
	{
		if (red < 0)
			return (-1);
		buf[red] = '\0';
		ft_join_free(&s[fd], buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (red == 0 && (!s[fd] || ft_strlen(s[fd]) == 0))
		return (0);
	*line = ft_check(&s[fd]);
	return (1);
}
