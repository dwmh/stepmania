/* ScoreDisplayCalories - Shows calorie score during gameplay and some menus. */

#ifndef ScoreDisplayCalories_H
#define ScoreDisplayCalories_H

#include "RollingNumbers.h"
#include "PlayerNumber.h"


class ScoreDisplayCalories : public RollingNumbers
{
public:
	ScoreDisplayCalories();
	~ScoreDisplayCalories();

	virtual void Update( float fDelta );

	void LoadFromNode( const XNode* pNode );
	virtual ScoreDisplayCalories *Copy() const;

	virtual void HandleMessage( const Message &msg );

	void UpdateNumber();

	// Lua
	virtual void PushSelf( lua_State *L );

private:
	PlayerNumber m_PlayerNumber;
	RString m_sMessageOnStep;
};

#endif

/*
 * (c) 2001-2004 Chris Danford
 * All rights reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, and/or sell copies of the Software, and to permit persons to
 * whom the Software is furnished to do so, provided that the above
 * copyright notice(s) and this permission notice appear in all copies of
 * the Software and that both the above copyright notice(s) and this
 * permission notice appear in supporting documentation.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF
 * THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS
 * INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
