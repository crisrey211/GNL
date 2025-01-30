/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:55:08 by creynalt          #+#    #+#             */
/*   Updated: 2025/01/09 17:58:22 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

char	*get_next_line(int fd);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_free(char **str);
#endif
