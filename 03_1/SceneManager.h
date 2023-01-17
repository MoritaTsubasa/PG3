#pragma once
#include <stdio.h>
#include <Windows.h>

class SceneManager final
{
private:
	SceneManager();
	~SceneManager();

	int SceneNo = 0;

	int loopCount = 0;

public:
	SceneManager(const SceneManager& obj) = delete;
	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();

	void ChangeScene();

	void ShowScene();
};

