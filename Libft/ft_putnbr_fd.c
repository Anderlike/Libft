/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:12:48 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/22 11:37:09 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_write('-', fd);
		ft_write('2', fd);
		ft_putnbr(147483648, fd);
	}
	else if (nb < 0)
	{
		ft_write('-', fd);
		nb = -nb;
		ft_putnbr(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr((nb / 10), fd);
		ft_putnbr((nb % 10), fd);
	}
	else
		ft_write((nb + 48), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}
/*
#include <fcntl.h>

int	main(void)
{
	int fd = open("test3.txt", O_WRONLY | O_CREAT, 0644);

	ft_putnbr_fd(-2147483648, fd);
	close(fd);
}*/