#ifndef SO_LONG_H
# define SO_LONG_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include "mlx.h"
# include "libft.h"
# include "constant.h"
# include "struct.h"

int	print_err(char *msg);

char	**parse(char *path);
void	get_items_pos(t_conf *conf);
void	get_player_pos(char **map, t_coord *player_pos);

void	is_correct_map(char **map);

void	game(t_conf *conf);
void	draw_frame(t_conf *conf);

size_t	get_arrsize(char **arr);
int		open_file(char *path);
char	**lst_to_arr(t_list *lst);
t_tex	*choose_texture(t_conf *conf, char c);

int		exit_game(t_conf *vars);
int		keypress(int keycode, t_conf *vars);

void	init_window(t_conf *conf);

void	open_window(t_conf *conf);

void	ft_draw_img(t_conf *conf, int x, int y);
void	my_mlx_pixel_put(t_img *data, int x, int y, int color);
void	draw_cube(t_conf *conf, int startx, int starty);
int		color_trans(t_tex *tex, char *color);
char	*get_sprite_collor(t_tex *tex, int x, int y, int cubesize);

int		get_cube_size(t_coord res, char **map);

void	delete_item(t_conf *conf, t_coord next);
int		is_valid_position(t_conf *conf, t_coord next);

void	move_player(t_conf *conf, int side);

#endif
