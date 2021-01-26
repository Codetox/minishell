/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 08:47:58 by alidy             #+#    #+#             */
/*   Updated: 2021/01/26 21:54:15 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	ms_pwd(m_sct *sct)
{
	char	*path;

	if (!(path = malloc(PATH_MAX * sizeof(char))))
		return ;
	ft_printf("%s\n", getcwd(path, PATH_MAX));
	free(path);
	sct->status = 0;
}