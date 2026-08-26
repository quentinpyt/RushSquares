#include <unistd.h>

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(1, "Invalid size\n", 13);
        return;
    }
    for (int row = 0; row < y; row++){
        for (int col = 0; col < x; col++){
            int is_top    = (row == 0);
            int is_bottom = (row == y - 1);
            int is_left   = (col == 0);
            int is_right  = (col == x - 1);
            int is_horizontal_edge = is_top || is_bottom;
            int is_vertical_edge   = is_left || is_right;
            
            if (is_horizontal_edge && is_vertical_edge) {
                write(1, "o" ,1);}
            else if (is_horizontal_edge) {
                write(1, "-" ,1);}
            else if (is_vertical_edge) {
                write(1, "|" ,1);}
            else {
                write(1, " " ,1);}
        }write(1,"\n",1);
    }
}
