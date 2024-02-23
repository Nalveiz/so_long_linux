/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:28:16 by musozer           #+#    #+#             */
/*   Updated: 2024/02/20 15:03:58 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


void	move_up(t_map *game)
{
	if (game->mapin[game->player[0] - 1][game->player[1]] != '1')
	{
		game->movement += 1;
		write(1, "Movement Count = ", 18);
		ft_putnbr_fd(game->movement, 1);
		write(1, "\n", 1);
		if (game->mapin[game->player[0] - 1][game->player[1]] == 'C')
			game->c--;
		if (game->mapin[game->player[0] - 1][game->player[1] == 'E'] &&
			game->c == 0)
			ft_finish(game);
		if (game->player[0] - 1 == game->exit[0] && game->player[1]
			== game->exit[1])
			put_image_1(game);
		else
		{
			game->mapin[game->player[0]][game->player[1]] = '0';
			game->mapin[game->player[0] - 1][game->player[1]] = 'P';
			put_image_1(game);
			game->player[0] = game->player[0] - 1;
		}
	}
}

static void	move_down(t_map *game)
{
	if (game->mapin[game->player[0] + 1][game->player[1]] != '1')
	{
		write(1, "Movement Count = ", 18);
		ft_putnbr_fd(game->movement++, 1);
		write(1, "\n", 1);
		if (game->mapin[game->player[0] + 1][game->player[1]] == 'C')
			game->c--;
		if (game->mapin[game->player[0] + 1][game->player[1]] == 'E' &&
			game->c == 0)
			ft_finish(game);
		if (game->player[0] + 1 == game->exit[0] && game->player[1]
			== game->exit[1])
			put_image_1(game);
		else
		{
			game->mapin[game->player[0]][game->player[1]] = '0';
			game->mapin[game->player[0] + 1][game->player[1]] = 'P';
			put_image_1(game);
			game->player[0] = game->player[0] + 1;
		}
	}
}

static void	move_left(t_map *game)
{
	if (game->mapin[game->player[0]][game->player[1] - 1] != '1')
	{
		game->movement += 1;
		write(1, "Movement Count = ", 18);
		ft_putnbr_fd(game->movement, 1);
		write(1, "\n", 1);
		if (game->mapin[game->player[0]][game->player[1] - 1] == 'C')
			game->c--;
		if (game->mapin[game->player[0]][game->player[1] - 1] == 'E' &&
			game->c == 0)
			ft_finish(game);
		if (game->player[0] == game->exit[0] && game->player[1] - 1
			== game->exit[1])
			put_image_1(game);
		else
		{
			game->mapin[game->player[0]][game->player[1]] = '0';
			game->mapin[game->player[0]][game->player[1] - 1] = 'P';
			put_image_1(game);
			game->player[1] = game->player[1] - 1;
		}
	}
}

static void	move_right(t_map *game)
{
	if (game->mapin[game->player[0]][game->player[1] + 1] != '1')
	{
		game->movement += 1;
		write(1, "Movement Count = ", 18);
		ft_putnbr_fd(game->movement, 1);
		write(1, "\n", 1);
		if (game->mapin[game->player[0]][game->player[1] + 1] == 'C')
			game->c--;
		if (game->mapin[game->player[0]][game->player[1] + 1] == 'E' &&
			game->c == 0)
			ft_finish(game);
		if (game->player[0] == game->exit[0] && game->player[1] + 1
			== game->exit[1])
			put_image_1(game);
		else
		{
			game->mapin[game->player[0]][game->player[1]] = '0';
			game->mapin[game->player[0]][game->player[1] + 1] = 'P';
			put_image_1(game);
			game->player[1] = game->player[1] + 1;
		}
	}
}

int	key_press(int key_code, t_map *game)
{
	// if (key_code == 53)
	// {
	// 	ft_free_mlx(game);
	// 	write(1, "You closed the window :(", 24);
	// 	exit(1);
	// }
	// if (key_code == 13 || key_code == 126)
	// 	move_up(game);
	// else if (key_code == 1 || key_code == 125)
	// 	move_down(game);
	// else if (key_code == 0 || key_code == 123)
	// 	move_left(game);
	// else if (key_code == 2 || key_code == 124)
	// 	move_right(game);
	if (key_code == 65307)
	{
		ft_free_mlx(game);
		write(1, "You closed the window :(", 24);
		exit(1);
	}
	if (key_code == 119)
		move_up(game);
	else if (key_code == 115)
		move_down(game);
	else if (key_code == 97)
		move_left(game);
	else if (key_code == 100)
		move_right(game);
	return (0);
}

