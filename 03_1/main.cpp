#include "SceneManager.h"

int main() {
	SceneManager::GetInstance()->ShowScene();
	SceneManager::GetInstance()->ChangeScene();

	return 0;
}