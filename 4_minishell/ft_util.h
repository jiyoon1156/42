/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 13:56:53 by jhur              #+#    #+#             */
/*   Updated: 2020/07/23 13:56:55 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H

# include <string.h>
# include "get_next_line.h"
# include <signal.h>

int		ft_strcmp(const char *s1, const char *s2);
void	ft_putchar(char c);
void	ft_puts(const char *str);
char	**ft_split(char *s, char c);
char	*ft_strjoin_newline(char const *s1, char const *s2);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putnbr(int n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strjoin_sh(char const *s1, char const *s2);
char	*ft_substr(char *str, unsigned start, int len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	ft_free(char **info);
int		ft_cnt(char **envp);
void	ft_putnbr_newline(int n);
int		ft_ret(char *str, int nb);
char	*ft_strncpy(char *dest, const char *src, size_t n);
void	ft_env_free(int i, char **env);
void	ft_puts_newline(const char *str);

#endif
