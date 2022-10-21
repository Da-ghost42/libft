#ifndef LIBFT_H
#define LIBFT_H

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

    int ft_isalpha(int c);
    int ft_isdigit(int c );
    int ft_isalnum(int c);
    int ft_isascii(int c);
    int ft_isprint(int c);
    size_t	 ft_strlen(const char *str);    
    void *ft_memset(void *b,int c,size_t len);
    void ft_bzero(void *s,size_t n);
    void *ft_memcpy(void * dst , const void  * src , size_t n);
    void *ft_memset(void *b,int c,size_t len);
    char *strchr(const char *s,int c);
    size_t ft_strlcat(char *dst,const char *src, size_t dstsize);
    int ft_strcmp(const char *s1, const char *s2, size_t n);
    int ft_tolower(int c);
    int ft_toupper(int c);

#endif

