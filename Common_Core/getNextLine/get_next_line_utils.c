#include "get_next_line.h"

char *ft_strchr(const char *str, int c) {
    char *temp = (char *)str;
    while (*temp != (char)c) {
        if (*temp == '\0') {
            return NULL;
        }
        temp++;
    }
    return temp;
}

size_t ft_strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char *ft_strdup(const char *str) {
    size_t len = ft_strlen(str) + 1;
    char *s = (char *)malloc(sizeof(char) * len);
    if (s == NULL) {
        return NULL;
    }
    for (size_t i = 0; i < len; i++) {
        s[i] = str[i];
    }
    return s;
}

char *ft_substr(const char *s, unsigned int start, size_t len) {
    if (!s || start > ft_strlen(s)) {
        return NULL;
    }
    size_t srclen = ft_strlen(s + start);
    if (len > srclen) {
        len = srclen;
    }
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str) {
        return NULL;
    }
    for (size_t i = 0; i < len; i++) {
        str[i] = s[start + i];
    }
    str[len] = '\0';
    return str;
}

char *ft_strjoin(const char *s1, const char *s2) {
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (!str) {
        return NULL;
    }
    for (size_t i = 0; i < len1; i++) {
        str[i] = s1[i];
    }
    for (size_t j = 0; j < len2; j++) {
        str[len1 + j] = s2[j];
    }
    str[len1 + len2] = '\0';
    return str;
}

