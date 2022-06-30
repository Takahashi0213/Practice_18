#include "stdafx.h"
#include "Game.h"
#include "Player.h"
#include "GameCamera.h"
#include "BackGround.h"
#include "Star.h"
#include "sound/SoundEngine.h"
#include "TestObject.h"

Game::Game()
{
	//�v���C���[�̃I�u�W�F�N�g�����B
	player = NewGO<Player>(0, "player");

	//�Q�[���J�����̃I�u�W�F�N�g�����B
	gameCamera = NewGO<GameCamera>(0, "gamecamera");

	//�w�i�̃I�u�W�F�N�g�����B
	backGround = NewGO<BackGround>(0);

	//Star�N���X�̃I�u�W�F�N�g�����B
	//Star* star1 = NewGO<Star>(0,"star");
	//star1->position = { 100.0f,150.0f,-200.0f };
	//star1->firstPosition = star1->position;

	//Star* star2 = NewGO<Star>(0, "star");
	//star2->position = { 1000.0f,150.0f,-200.0f };
	//star2->firstPosition = star2->position;

	//Star* star3 = NewGO<Star>(0, "star");
	//star3->position = { 100.0f,250.0f,400.0f };
	//star3->firstPosition = star3->position;

	//Star* star4 = NewGO<Star>(0, "star");
	//star4->position = { 2300.0f,50.0f,-200.0f };
	//star4->firstPosition = star4->position;

	//Star* star5 = NewGO<Star>(0, "star");
	//star5->position = { 2700.0f,450.0f,400.0f };
	//star5->firstPosition = star5->position;

	//TestObject* tes = NewGO<TestObject>(0,"TestObject");
	//tes->position = { 100.0f,150.0f,-200.0f };

	//�Q�[������BGM��ǂݍ��ށB
	g_soundEngine->ResistWaveFileBank(1, "Assets/sound/gamebgm.wav");
	//�Q�[������BGM���Đ�����B
	gameBGM = NewGO<SoundSource>(0);
	gameBGM->Init(1);
	gameBGM->Play(true);
}

Game::~Game()
{
	
}

//�X�V�����B
void Game::Update()
{
}