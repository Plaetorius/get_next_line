/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:22:26 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/17 09:57:37 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

char		*get_next_line(int fd);

/* UTILS */
size_t		ft_strlen(char *s);
char		*ft_strjoin(char *s1, char *s2);
int			ft_str_clean_nl(char *str);
char		*ft_strdup_bool(char *s1, int malloced);
size_t		ft_strlcpy(char *dst, char *src, size_t dstsize);

#endif