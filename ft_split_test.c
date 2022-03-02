#include <stddef.h>

int    count_words(char const *s, char c)
{
    char    last;
    int        i;
    int        j;

    last = c;
    i = 0;
    j = 0;
    while (s[i])
    {
        if (last == c && s[i] != c)
        {
            j++;
        }
        last = s[i];
        i++;
    }
    return (j);
}

size_t    ft_strlcpy(char *dst, const char *src, size_t dssize)
{
    size_t    i;
    int        src_len;

    src_len = strlen(src);
    if (!dssize || !src)
        return (src_len);
    i = 0;
    while (src[i] != '\0' && i < dssize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub_ptr;
    int        s_len;
    size_t    i;

    if (!s)
        return (NULL);
    s_len = strlen(s);
    sub_ptr = malloc(len + 1);
    if (!sub_ptr)
        return (NULL);
    i = 0;
    while (i < len && (&s[start] < &s[s_len]))
    {
        sub_ptr[i] = s[start + i];
        i++;
    }
    sub_ptr[i] = '\0';
    return (sub_ptr);
}

size_t    create_words(char const *s, char c)
{
    char      *sub_s;
    size_t    i;

    i = 0;
    while (s)
    {
        if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
        {
            sub_s = malloc(sizeof(char) * i + 2);
            ft_strlcpy(sub_s, s, i + 2);
            return (sub_s);
        }
        i++;
    }
    return (0);
}

char    **ft_split(char const *s, char c)
{
    char        **arr;
    char const    *str;
    int            i;
    size_t        j;

    if (!s)
        return (NULL);
    arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!arr)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        str = create_words(&s[i], c);
        *(arr++) = ft_substr(&str[i], 0, strlen(&str[i]));
        if (!s[i])
            arr = NULL;
        i++;
    }
    return (arr);
}

int    main(void)
{
    char    **list;

    list = ft_split("LOL  HAHAHAH      UO Yes!      ", ' ');
    if (list == NULL)
        return (1);
    while (*list)
    {
        printf("%s\n", *list);
        list++;
    }
    return (0);
}