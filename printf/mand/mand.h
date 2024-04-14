/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mand.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoshihi <ytoshihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:13:12 by ytoshihi          #+#    #+#             */
/*   Updated: 2024/03/17 18:36:09 by ytoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAND_H
# define MAND_H

# include <unistd.h>
# include <stdarg.h>

typedef struct state
{
	int				has_error;
	unsigned int	count;
}					t_state;

void	put_with_condition(char c, va_list ap, t_state *state);
void	put_chr(char c, t_state *result);
void	put_str(char *str, t_state *t_state);
void	put_hex_nbr(unsigned long address, t_state *t_state, int is_lower);
void	put_signed_num(int num, t_state *t_state);
void	put_unsigned_num(unsigned int num, t_state *t_state);

#endif
