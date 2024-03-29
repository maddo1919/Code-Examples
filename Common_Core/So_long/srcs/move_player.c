#include "so_long.h"

static void	write_move(t_conf *conf, char *str)
{
	ft_putstr_fd("                                ", STDOUT_FILENO);
	ft_putstr_fd("\r", STDOUT_FILENO);
	ft_putstr_fd(str, STDOUT_FILENO);
	ft_putstr_fd(", count: ", STDOUT_FILENO);
	ft_putnbr_fd(++conf->move_count, STDOUT_FILENO);
	ft_putstr_fd("\r", STDOUT_FILENO);
	draw_frame(conf);
	ft_draw_img(conf, 0, 0);
}

void	move(t_conf *conf, t_coord next, char *str)
{
	if (is_valid_position(conf, next) == 1)
	{
		if (conf->map[next.y][next.x] == 'E')
		{
			if (ft_lstsize(conf->item_list) == 0)
			{
				write_move(conf, str);
				ft_putstr_fd("                            \r", STDOUT_FILENO);
				ft_putstr_fd("You win\n", STDOUT_FILENO);
				exit_game(conf);
			}
			else
				ft_putendl_fd(CANT_EXIT, STDOUT_FILENO);
		}
		if (conf->map[next.y][next.x] == '0'
			|| conf->map[next.y][next.x] == 'C')
		{
			if (conf->map[next.y][next.x] == 'C')
				delete_item(conf, next);
			conf->map[next.y][next.x] = 'P';
			conf->map[conf->player_pos->y][conf->player_pos->x] = '0';
			conf->player_pos->x = next.x;
			conf->player_pos->y = next.y;
			write_move(conf, str);
		}
	}
}

void	move_player(t_conf *conf, int side)
{
	t_coord	pos;

	pos = (t_coord){.x = conf->player_pos->x, .y = conf->player_pos->y};
	if (side == LEFT || side == A)
	{
		pos.x = conf->player_pos->x - 1;
		move(conf, pos, "Move left");
	}
	else if (side == RIGHT || side == D)
	{
		pos.x = conf->player_pos->x + 1;
		move(conf, pos, "Move right");
	}
	else if (side == UP || side == W)
	{
		pos.y = conf->player_pos->y - 1;
		move(conf, pos, "Move up");
	}
	else if (side == DOWN || side == S)
	{
		pos.y = conf->player_pos->y + 1;
		move(conf, pos, "Move down");
	}
}
