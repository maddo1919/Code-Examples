#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static int count_words(char const *s, char c)
{
    unsigned int words = 0;
    unsigned int i = 0;
    unsigned int j = 0;

    while (s[j] != '\0')
    {
        if (s[i] == c)
        {
            while (s[i] == c)
                i++;
        }
        if (s[i] != c)
        {
            while (s[i] != c && s[i] != '\0')
                i++;
            words++;
        }
        j++;
    }
    return words;
}

static int modded_strlen(char const *s, char c)
{
    int i = 0;
    while (s[i] && s[i] != c)
        i++;
    return i;
}

static char *populate_res(char const *s, char c)
{
    int len = modded_strlen(s, c);
    char *word = malloc(len + 1);

    if (!word)
        return NULL;

    for (int i = 0; i < len; i++)
    {
        word[i] = s[i];
    }
    word[len] = '\0';

    return word;
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    int words = count_words(s, c);
    char **splitted_words = malloc((words + 1) * sizeof(char *));

    if (!splitted_words)
        return NULL;

    while (*s != '\0')
    {
        while (*s == c)
            s++; // Skip leading delimiter

        if (*s != '\0')
        {
            splitted_words[i] = populate_res(s, c);
            i++;
        }
        
        s += modded_strlen(s, c);
    }

    splitted_words[i] = NULL; // Add NULL at the end
    return splitted_words;
}

int main(void)
{
    char *str = "this is a string";
    char **newstr;
    int i;

    newstr = ft_split(str, ' ');
    i = 0;
    while (newstr[i])
    {
        printf("New: %s\n", newstr[i++]);
    }

    // Free allocated memory
    i = 0;
    while (newstr[i])
    {
        free(newstr[i]);
        i++;
    }
    free(newstr);

    return 0;
}

