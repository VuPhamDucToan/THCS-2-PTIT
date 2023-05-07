#include <stdio.h> 
struct toado
{
    int x1;
    int y1;
    int x2;
    int y2;
}hinhchunhat1, hinhchunhat2;

int main() {
    scanf("%d %d %d %d", &hinhchunhat1.x1, &hinhchunhat1.y1, &hinhchunhat1.x2, &hinhchunhat1.y2);
    scanf("%d %d %d %d", &hinhchunhat2.x1, &hinhchunhat2.y1, &hinhchunhat2.x2, &hinhchunhat2.y2);
    int maxX;
    if (hinhchunhat1.x1 >= hinhchunhat1.x2 && hinhchunhat1.x1 >= hinhchunhat2.x1 && hinhchunhat1.x1 >= hinhchunhat2.x2)
    {
        maxX = hinhchunhat1.x1;
    }
    else if (hinhchunhat1.x2 >= hinhchunhat2.x1 && hinhchunhat1.x2 >= hinhchunhat2.x2)
    {
        maxX = hinhchunhat1.x2;
    }
    else if (hinhchunhat2.x1 >= hinhchunhat2.x2)
    {
        maxX = hinhchunhat2.x1;
    }
    else
    {
        maxX = hinhchunhat2.x2;
    }
    int minX;
    if (hinhchunhat1.x1 <= hinhchunhat1.x2 && hinhchunhat1.x1 <= hinhchunhat2.x1 && hinhchunhat1.x1 <= hinhchunhat2.x2)
    {
        minX = hinhchunhat1.x1;
    }
    else if (hinhchunhat1.x2 <= hinhchunhat2.x1 && hinhchunhat1.x2 <= hinhchunhat2.x2)
    {
        minX = hinhchunhat1.x2;
    }
    else if (hinhchunhat2.x1 <= hinhchunhat2.x2)
    {
        minX = hinhchunhat2.x1;
    }
    else
    {
        minX = hinhchunhat2.x2;
    }
    int maxY;
    if (hinhchunhat1.y1 >= hinhchunhat1.y2 && hinhchunhat1.y1 >= hinhchunhat2.y1 && hinhchunhat1.y1 >= hinhchunhat2.y2)
    {
        maxY = hinhchunhat1.y1;
    }
    else if (hinhchunhat1.y2 >= hinhchunhat2.y1 && hinhchunhat1.y2 >= hinhchunhat2.y2)
    {
        maxY = hinhchunhat1.y2;
    }
    else if (hinhchunhat2.y1 >= hinhchunhat2.y2)
    {
        maxY = hinhchunhat2.y1;
    }
    else
    {
        maxY = hinhchunhat2.y2;
    }
    int minY;
    if (hinhchunhat1.y1 <= hinhchunhat1.y2 && hinhchunhat1.y1 <= hinhchunhat2.y1 && hinhchunhat1.y1 <= hinhchunhat2.y2)
    {
        minY = hinhchunhat1.y1;
    }
    else if (hinhchunhat1.y2 <= hinhchunhat2.y1 && hinhchunhat1.y2 <= hinhchunhat2.y2)
    {
        minY = hinhchunhat1.y2;
    }
    else if (hinhchunhat2.y1 <= hinhchunhat2.y2)
    {
        minY = hinhchunhat2.y1;
    }
    else
    {
        minY = hinhchunhat2.y2;
    }
    int khoangcachX = maxX - minX;
    int khoangcachY = maxY - minY;
    if (khoangcachX > khoangcachY)
    {
        printf("%d", khoangcachX * khoangcachX);
    }
    else
    {
        printf("%d", khoangcachY * khoangcachY);
    }
}

