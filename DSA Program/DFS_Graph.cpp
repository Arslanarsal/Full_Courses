#include <iostream>
using namespace std;
int vistedNode[] = {0, 0, 0, 0, 0, 0, 0};
int a[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 0, 0, 0},
    {1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0},
};

int DFS(int i)
{
    cout << i << " ";
    vistedNode[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (a[i][j] == 1 && !vistedNode[j])
        {
            DFS(j);
        }
    }
}
int main()
{
    DFS(0);

    return 0;
}