/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:22:26 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/15 11:55:29 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE=42
# endif
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_readline(char *str, int *found, int fd);
char	*ft_has_newline(char *str, int *found);

/* UTILS */
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_str_clean_nl(char *str);
char	*ft_strdup(char *s1, int malloced);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);

#endif