#pragma once
#include "Entity.h"

#define BRICKMOVE_BBOX_WIDTH  48
#define BRICKMOVE_BBOX_HEIGHT 16

#define	MOVEBRICK_STATE_COLLISION 10
;
class BrickMove : public Entity
{
public:
	DWORD timeDelayed = 0;
	float frameW, frameH;
	float oldY;
	bool isCollid;
	virtual void SetState(int state);
	virtual void Update(DWORD dt, vector<LPGAMEENTITY>* coObjects);
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
	BrickMove(float posX, float posY, float frameW, float frameH);
};

