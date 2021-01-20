/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 10:29:38 by alidy             #+#    #+#             */
/*   Updated: 2021/01/20 11:11:44 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void    ms_env(m_sct *sct)
{
    int i;
    
    i = 0;
    while (sct->envp[i])
    {
        ft_printf("%s\n", sct->envp[i]);
        i++;
    }
    sct->status = 0;
}