#pragma once
class Enemy
{
public:

	static int EnemyCount;

public:

	Enemy() { EnemyCount++; }
	~Enemy() { EnemyCount--; }

	void Death();

private:

};