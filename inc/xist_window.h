#ifndef XIST_WINDOW_H
# define XIST_WINDOW_H

typedef struct sWindow  xWindow;

struct sWindow
{
    void    *win_ptr;
    char    *title;
    int     width;
    int     height;
};

#endif