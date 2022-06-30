#pragma once

class Player;
class TestObject : public IGameObject
{
public:
	TestObject();
	~TestObject();
	//�X�V�����B
	void Update();
	//�`�揈���B
	void Render(RenderContext& rc);

	enum EnAnimationClip {		//�A�j���[�V�����B
		enAnimationClip_Idle,
		enAnimationClip_Open,
		enAnimationClip_Num
	};
	AnimationClip animationClips[enAnimationClip_Num];		//�A�j���[�V�����N���b�v�B

	//�����o�ϐ��B
	ModelRender modelRender;	//���f�������_�\�B
	Vector3 position;		//���W�B
	Player* m_player;

};

