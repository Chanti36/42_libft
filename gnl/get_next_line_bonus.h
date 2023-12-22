/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:25:31 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/10/03 10:48:50 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_find_line(char *buff);
char	*ft_substr(char const *s, unsigned int str, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_get_line(char *buff);
char	*ft_resize_buff(char *buff);
char	*get_text(char *buff, int fd);
char	*result(char **buff, char *aux);
char	*get_next_line(int fd);
#endif