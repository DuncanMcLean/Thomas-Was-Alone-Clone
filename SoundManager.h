#pragma once
#include <SFML/Audio.hpp>

using namespace sf;

class SoundManager
{
private:
	// The buffers
	SoundBuffer m_FireBuffer;
	SoundBuffer m_FallInFireBuffer;
	SoundBuffer m_FallInWaterBuffer;
	SoundBuffer m_JumpBuffer;
	SoundBuffer m_ReachGoalBuffer;
	SoundBuffer m_LavaBuffer;
	SoundBuffer m_StarBuffer;
	SoundBuffer m_BlackHoleBuffer;

	// The Sounds
	Sound m_Fire1Sound;
	Sound m_Fire2Sound;
	Sound m_Fire3Sound;
	Sound m_FallInFireSound;
	Sound m_FallInWaterSound;
	Sound m_JumpSound;
	Sound m_ReachGoalSound;
	Sound m_Lava;
	Sound m_Star;
	Sound m_BlackHole;

	// Which sound should we use next, fire 1, 2 or 3
	int m_NextSound = 1;

public:

	SoundManager();

	void playFire(Vector2f emitterLocation, Vector2f listenerLocation);
	void playFallInFire();
	void playFallInWater();
	void playJump();
	void playReachGoal();

	// New play functions
	void playLava();
	void playStar();
	void playBlackHole();
};

