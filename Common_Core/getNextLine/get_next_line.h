#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H


#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
#endif

#ifndef MAX_FD
#define MAX_FD 256
#endif

char	*get_next_line(int fd);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strchr(const char *str, int n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_substr(const char *str, unsigned int start, size_t len);
#endif
