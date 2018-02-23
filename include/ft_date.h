/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_date.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:52:07 by rnugroho          #+#    #+#             */
/*   Updated: 2018/02/23 17:21:40 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DATE_H
# define FT_DATE_H

# include <stdint.h>

# define SEC_PER_MIN         60
# define SEC_PER_HOUR        3600
# define SEC_PER_DAY         86400
# define MOS_PER_YEAR        12
# define EPOCH_YEAR          1970
# define IS_LEAP_YEAR_(year) (((year) % 4 == 0) && ((year) % 100 != 0))
# define IS_LEAP_YEAR(year)	(IS_LEAP_YEAR_(year) || ((year) % 400 == 0))

uint32_t	unix_time_in_seconds(uint8_t date[6]);

#endif
