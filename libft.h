/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 13:28:45 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/19 16:25:58 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
void			*ft_memset(void *buf, int c, unsigned int s);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
void			*ft_memccpy(void *dst, const void *src, int c, unsigned int n);
void			*ft_memchr(const void *buf, int ch, unsigned int n);
int				ft_memcmp(const void *dst, const void *src, unsigned int n);
void			*ft_memmove(void *dst, const void *src, unsigned int n);
int				ft_atoi(const char *buf);
int				ft_isalnum(int ch);
int				ft_isalpha(int ch);
int				ft_isprint(int ch);
size_t			ft_strlcat(char *dst, char *src, unsigned int n);
size_t			ft_strlcpy(char *dst, const char *src, unsigned int n);
int				ft_strlen(const char *buf);
int				ft_strncmp(char *dst, char *src, unsigned int n);
int				ft_tolower(int ch);
int				ft_toupper(int ch);
void			ft_putchar_fd(char ch, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr_fd(char *buf, int fd);
void			*ft_bzero(void *buf, unsigned int n);
void			*ft_calloc(unsigned int num, unsigned int size);
int				ft_isascii(int ch);
int				ft_isdigit(int ch);
char			*ft_strchr(const char *buf, int ch);
char			*ft_strdup(const char *source);
char			*ft_strnstr(const char *buf, const char *chk, unsigned int n);
char			*ft_strrchr(const char *str, int c);
char			*ft_itoa(int n);
void			ft_putendl_fd(char *buf, int fd);
char			**ft_split(char const *buf, char ch);
char			*ft_strjoin(char const *buf1, char const *buf2);
char			*ft_substr(char const *buf, unsigned int start, unsigned int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
								void (*del)(void *));

#endif
