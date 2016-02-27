#pragma once

#include "mcpe/world/item/Item.h"
#include "mcpe/world/level/block/Block.h"

class IronKnife : public Item
{
public:
	IronKnife(short itemId);

public:
    IronKnife(std::string);
	virtual bool canDestroyInCreative() const;
	virtual int getAttackDamage();
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
	virtual void mineBlock(ItemInstance*, BlockID, int, int, int, Mob*);
};