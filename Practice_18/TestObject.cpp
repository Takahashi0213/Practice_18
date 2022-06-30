#include "stdafx.h"
#include "TestObject.h"
#include "Player.h"

TestObject::TestObject()
{
	//���̃��f����ǂݍ��ށB
	//modelRender.Init("Assets/modelData/Food/Sushi.tkm");
	//modelRender.SetScale({ 50.0f,50.0f,50.0f });

	//�A�j���[�V�����N���b�v�����[�h����B
	//animationClips[enAnimationClip_Idle].Load("Assets/animData/BreakBoxAnim/BB_Idle.tka");
	//animationClips[enAnimationClip_Idle].SetLoopFlag(true);
	//animationClips[enAnimationClip_Open].Load("Assets/animData/BreakBoxAnim/BB_Break.tka");
	//animationClips[enAnimationClip_Open].SetLoopFlag(false);
	////���j�e�B�����̃��f����ǂݍ��ށB
	//modelRender.Init("Assets/modelData/BreakBox/BreakBox.tkm", animationClips, enAnimationClip_Num, enModelUpAxisZ);
	//modelRender.SetPosition({ 0.0f,-80.0f,0.0f });
	//modelRender.SetScale({ 5.0f,5.0f,5.0f });
	//modelRender.PlayAnimation(enAnimationClip_Idle);

	//modelRender.Init("Assets/modelData/SpaceShip/SpaceShip.tkm");

	//modelRender.SetScale({ 10.0f,10.0f,10.0f });

	m_player = FindGO<Player>("player");
}

TestObject::~TestObject()
{

}

void TestObject::Update()
{
	//�v���C���[���灙�Ɍ������x�N�g�����v�Z�B
	Vector3 diff = m_player->position - position;
	//�x�N�g���̒�����120.0f��菬����������B
	if (diff.Length() <= 120.0f && g_pad[0]->IsTrigger(enButtonB))
	{
		//modelRender.PlayAnimation(enAnimationClip_Open);
	}

	//�G�`������̍X�V�����B
	modelRender.Update();
}

void TestObject::Render(RenderContext& rc)
{
	//����`�悷��B
	modelRender.Draw(rc);
}