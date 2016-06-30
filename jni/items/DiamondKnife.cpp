#include "DiamondKnife.h"

DiamondKnife::DiamondKnife(short itemId) : Item("knifeDiamond", itemId - 256)
{
	Item::mItems[itemId] = this,
	creativeCategory = 3;
	setIcon("knife", 4);
	setMaxStackSize(1);
	setMaxDamage(781);
	setHandEquipped();
}

bool DiamondKnife::canDestroyInCreative() const
{
	return false;
}

int DiamondKnife::getAttackDamage()
{
	return (Item::mSword_diamond->getAttackDamage / 2);
}

int DiamondKnife::getEnchantSlot() const
{
	return 16;
}

int DiamondKnife::getEnchantValue() const
{
	return 1;
}

void DiamondKnife::hurtEnemy(ItemInstance *item, Mob *attacker, Mob *victim)
{
	item->hurtAndBreak(1, victim);
}

void DiamondKnife::mineBlock(ItemInstance *item, BlockID block, int x, int y, int z, Mob *mob)
{
	item->hurtAndBreak(2, mob);
}
