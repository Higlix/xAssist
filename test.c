#include "xassist.h"
#include "libft.h"
#include "mlx.h"
#include "mlx_opengl.h"

int main(int argc, char **argv)
{
    //xIst    *main;
    xImlx   *mlx;

    mlx = xCreateImlx(60);
    mlx_new_opengl_window(mlx->mlx, 300, 300, "title");
    mlx_loop(mlx->mlx);

    // main = xCreateInstance(300, 300,  "test", 60);
    // xLoopHook(main);
}