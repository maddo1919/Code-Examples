#include "so_long.h"

int	main(int argc, char **argv)
{
	t_conf	conf;

	if (argc == 2)
	{
		conf.map = parse(argv[1]);
		//parser.c 
		if (conf.map == NULL)
			ft_exit_free(1);
			//gives error message if map does not work. 
		is_correct_map(conf.map);
		//checks map is correct , utils.c
		game(&conf);
		//run game in engine.c
		
	}
	else
		ft_exit_free(print_err(INVALID_ARGS));
	ft_exit_free(0);
	return (0);
}
