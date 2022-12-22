#include "Bob.h"
#include "TextureHolder.h"

Bob::Bob()
{
	// Associate a texture with the sprite
	m_Sprite = Sprite(TextureHolder::GetTexture(
		"graphics/bob.png"));

	m_JumpDuration = .25;

	m_FireSafe = true;
}

bool Bob::handleInput()
{
	m_JustJumped = false;

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{

		// Start a jump if not already jumping
		// but only if standing on a block (not falling)
		if (!m_IsJumping && !m_IsFalling)
		{
			m_IsJumping = true;
			m_TimeThisJump = 0;
			m_JustJumped = true;
		}

	}
	else
	{
		m_IsJumping = false;
		m_IsFalling = true;

	}
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		m_LeftPressed = true;

	}
	else
	{
		m_LeftPressed = false;
	}


	if (Keyboard::isKeyPressed(Keyboard::Right))
	{

		m_RightPressed = true;;

	}
	else
	{
		m_RightPressed = false;
	}

	// Increases Bobs size
	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		m_Sprite.setScale(2.f, 2.f);
	}
	// Returns back to orignial size
	if (Keyboard::isKeyPressed(Keyboard::Num0))
	{
		m_Sprite.setScale(1.f, 1.f);
	}

	return m_JustJumped;
}