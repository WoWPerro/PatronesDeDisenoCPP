#pragma once

class Personaje
{
public:
	Personaje(float health, float maxHealth, float speed, int damage, float jumpHeight);
	Personaje();
	~Personaje();
	void Saltar(); 
	void Disparar();
	void Crouchear();

	//Getters y Setters
	float GetHealth();
	void SetHealth(float health);
	float GetMaxHealth();
	void SetMaxHealth(float maxHealth);
	float GetSpeed();
	void SetSpeed(float speed);
	int GetDamage();
	void SetDamage(int damage);
	float GetJumpHeight();
	void SetJumpHeight(float jumpHeight);
private:
	float _health;
	float _maxHealth;
	float _speed;
	int _damage;
	float _jumpHeight;
};

