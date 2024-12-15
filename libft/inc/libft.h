/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:52:09 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 02:52:19 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_printf.h"
# include "get_next_line.h"
# include "shared.h"
# include "structs.h"

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
t_bool		ft_isndup(int *num, int size);
int			ft_isstrnum(char *str);
int			ft_isnumber(const char *str);

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t n);
void		*ft_memchr(void const *str, int c, size_t n);
int			ft_memcmp(void const *s1, void const *s2, size_t n);
void		*ft_memcpy(void *dest, void const *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		ft_memrev(void *ptr, size_t size);
void		ft_memdel(size_t ac, t_list *list, ...);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		free_2d(void *array);
void		free_null(void **ptr);
void		ft_hold_mem(size_t ac, t_list **list, ...);

long		ft_fib(long n);
long		ft_fact(long n);
int			ft_index(int n, int *arr);
void		ins_sort(int array[], int n);
int			ft_sqrt(int number);

void		ft_putstr_color_fd(char *color, char *s, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_error(char *err, t_bool yeet);
void		ft_successful(char *msg, t_bool yeet);

char		*ft_bintoa(const char *bin);
char		*ft_atobin(const char *str);
char		ft_bin2char(const char *bin);
char		*ft_char2bin(unsigned char c);
int			ft_atoi(char const *str);
long		ft_atol(const char *str);
int64_t		ft_atoll(const char *str);
char		*ft_itoa(int n);
int			ft_tolower(int c);
int			ft_toupper(int c);

char		*ft_straddc(char *str, char c);
void		ft_strrev(char *str);
char		*ft_strtok(char *str, const char *delim);
char		**ft_split(char const *s, char c);
char		*ft_strchr(char const *str, int c);
char		*ft_strdup(char const *src);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dest, const char *src, size_t n);
size_t		ft_strlcpy(char *dest, char const *src, size_t n);
size_t		ft_strlen(char const *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(char const *s1, char const *s2, size_t n);
char		*ft_strnstr(char const *haystack, char const *needle, size_t n);
char		*ft_strrchr(char const *str, int c);
char		*ft_strtrim(char const *s1, char const *set);
int			ft_strrncmp(const char *s1, const char *s2, size_t n);
char		*ft_substr(char const *s, unsigned int start, size_t len);

void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);

#endif
