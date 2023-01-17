#include "SceneManager.h"

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}



SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene()
{
	while (true)
	{
		Sleep(3 * 1000);

		SceneNo += 1;
		if (SceneNo > 3) {
			SceneNo = 0;
			loopCount += 1;
		}

		if (loopCount == 3) {
			break;
		}
		ShowScene();

	}
}

void SceneManager::ShowScene()
{
	if (SceneNo == 0) {
		printf("Title\n");
	}

	if (SceneNo == 1) {
		printf("NewGame\n");
	}

	if (SceneNo == 2) {
		printf("GamePlay\n");
	}

	if (SceneNo == 3) {
		printf("GameClear\n");
	}
}