#include "box.h"

Box::Box(int w, int h)
{
    width = w;
    height = h;
};

void Box::setFill(char f)
{
    fill = f;
}
void Box::setSize(int w, int h)
{
    width = w;
    height = h;
}
void Box::draw()
{
    for(int n = 0; n < height; n++)
    {
        for(int m = 0; m < width; m++)
            cout << fill;
        cout << endl;
    }
}