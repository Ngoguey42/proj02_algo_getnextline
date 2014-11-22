/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:28:26 by ngoguey           #+#    #+#             */
/*   Updated: 2014/11/13 10:05:46 by ngoguey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_typedefs.h"

void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *ptr, size_t nb);
void	*ft_memcpy(void *trg, const void *src, size_t nb);
void	*ft_memset(void *ptr, int c0, size_t nb);
void	ft_putstr(const char *s);
void	ft_putnchar(char c, size_t n);
size_t	ft_strlen(const char *str);
void	*ft_memalloc(size_t size);

#endif
