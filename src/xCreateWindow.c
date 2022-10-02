#include "xassist.h"
#include "mlx.h"
#include "libft.h"

xWindow     *xCreateWindow(int x, int y, char *title, xImlx *xImlx)
{
    xWindow *window;

    window = (xWindow *) malloc(sizeof(xWindow));
    window->title = ft_strdup(title);
    window->width = x;
    window->height = y;
    window->win_ptr = mlx_new_window(xImlx->mlx, x, y, title);
    return (window);
}