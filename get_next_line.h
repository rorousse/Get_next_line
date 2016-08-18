/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 09:08:03 by rorousse          #+#    #+#             */
/*   Updated: 2016/02/12 19:41:56 by rorousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

typedef struct		s_buffer
{
	char			*data;
	char			*init;
	int				fd;
	struct s_buffer	*next;
	struct s_buffer *prev;
}					t_buffer;

int					get_next_line(int const fd, char **line);

#endif
