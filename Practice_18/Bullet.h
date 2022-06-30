#pragma once
class Bullet : public IGameObject
{
public:
	Bullet();
	~Bullet();
	//�X�V�����B
	void Update();
	//�`�揈���B
	void Render(RenderContext& rc);
	//�ړ������B
	void Move();

	//�����o�ϐ��B
	ModelRender modelRender;	//���f�������_�\�B
	Vector3 position;		//���W�B
	Vector3 moveSpeed = Vector3::Zero;
	Stopwatch* sw = nullptr;

	float Limit = 120.0f;
};
