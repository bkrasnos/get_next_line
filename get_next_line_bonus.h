/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:56:48 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/28 14:46:28 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *s);
char	*get_next_line(int fd);
char	*ft_new_str(char *str);
char	*ft_read_str(int fd, char *str);
char	*ft_strchr(char *s, int c);
char	*ft_get_line(char *str);
char	*ft_strjoin(char *str, char *buff);

#endif