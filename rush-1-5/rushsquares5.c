#include <unistd.h>

void rush(int col, int row)
{
    if (col <= 0 || row <= 0)
    {
        char *str = "Invalid size";
        write(1, str, 12);
        write(1, "\n", 1);
        return;
    }
    if (row == 1)
    {
        write(1, "B", 1);
        for (int i = 0; i < col - 2; i++)
        {
            write(1, "B", 1);
        }
        if (col > 1)
            write(1, "B", 1);
        write(1, "\n", 1);
    }
    else if (col == 1)
    {
        write(1, "B", 1);
        for (int j = 0; j < row - 2; j++)
        {
            write(1, "\n", 1);
            write(1, "B", 1);
        }
        if (row > 1)
            write(1, "\n", 1);
        write(1, "B", 1);
        write(1, "\n", 1);
    }
    else
    {
        write(1, "A", 1);
        for (int i = 0; i < col - 2; i++)
            write(1, "B", 1);
        if (col > 1)
            write(1, "C", 1);
        write(1, "\n", 1);

        for (int j = 0; j < row - 2; j++)
        {
            write(1, "B", 1);
            for (int i = 0; i < col - 2; i++)
                write(1, " ", 1);
            if (col > 1)
                write(1, "B", 1);
            write(1, "\n", 1);
        }

        write(1, "C", 1);
        for (int i = 0; i < col - 2; i++)
            write(1, "B", 1);
        if (col > 1)
            write(1, "A", 1);
        write(1, "\n", 1);
    }
}