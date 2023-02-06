#include "windows.h"
#include <stdio.h>
#include <iostream>
#include "Enemy.h"
using namespace std;

int Enemy::EnemyCount;

int main()
{
    Enemy* enemy1 = new Enemy;
    Enemy* enemy2 = new Enemy;
    Enemy* enemy3 = new Enemy;

    cout << Enemy::EnemyCount << endl;



    while (Enemy::EnemyCount > 0)
    {

        cout << " EnemyAlive = " << Enemy::EnemyCount << endl;

        Sleep(3 * 1000);
        enemy1->Death();


        cout << " EnemyAlive = " << Enemy::EnemyCount << endl;
    }

    delete enemy1;
    delete enemy2;
    delete enemy3;

    return 0;

}