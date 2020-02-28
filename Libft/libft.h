/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:37:26 by jhur              #+#    #+#             */
/*   Updated: 2020/02/28 10:28:51 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_calloc(size_t count, size_t size);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_atoi(const char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

char    *ft_strcpy(char *dest, char *src);
char    *ft_strchr(const char *str, int ch);
char    *ft_strrchr(const char *str, int ch);
char    *ft_strdup(const char *s1);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char *str, char c);
char	*ft_strrev(char *str);
char	*ft_itoa(int nbr);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t  ft_strlen(const char *s);

#endif