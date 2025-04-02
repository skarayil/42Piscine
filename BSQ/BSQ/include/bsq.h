/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:11:27 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 11:11:36 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

        

// Starts a Header Guard
#ifndef BSQ_H
# define BSQ_H

// Includes standard libraries
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdbool.h>
# include <stddef.h>

// Defines a structure
// Structures may contain variables that can be assigned after
typedef struct		s_map
{
	int				rows;
	int				cols;
	char			empty;
	char			obstacle;
	char			full;
	unsigned short	**matrix;
	unsigned short	square_size;
	int				square_row;
	int				square_col;
}					t_map;

// defines the prototypes of the functions that can be called by this header
void				*ft_memcpy(void *dest, void *src, size_t num);
void				*ft_realloc(void *ptr, size_t old_size, size_t new_size);
int					ft_strcmp(char *s1, char *s2);
int					ft_atoi(char *str);
t_map				*ft_map_error(void);
void				ft_free_map(t_map *map);
void				ft_get_square(t_map *map);
void				ft_process_map(t_map *map);
int					ft_get_line(t_map *map, int i, int file_name);
int					ft_get_first_line(t_map *map, int file_name);
int					ft_get_matrix(t_map *map, int file_name);
int					ft_map_header(t_map *map, int file_name);
t_map				*ft_create_map(char *file_name);

// Ends the Header Guard
#endif
