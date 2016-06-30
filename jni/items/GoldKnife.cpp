#include "GoldKnife.h"

GoldKnife::GoldKnife(short itemId) : Item("knifeGold", itemId - 256)
{
	Item::mItems[itemId] = this;
	creativeCategory = 3;
	setIcon("knife", 3);
	setMaxStackSize(1);
	setMaxDamage(16);
	setHandEquipped();
}

bool GoldKnife::canDestroyInCreative() const
{
	return false;
}

int GoldKnife::getAttackDamage()
{
	return (Item::mSword_gold->getAttackDamage / 2);
}

int GoldKnife::getEnchantSlot() const
{
	return 16;
}

int GoldKnife::getEnchantValue() const{
	return 1;
}

void GoldKnife::hurtEnemy(ItemInstance *item, Mob *attacker, Mob *victim)
{
	item->hurtAndBreak(1, victim);
}

void GoldKnife::mineBlock(ItemInstance *item, BlockID block, int x, int y, int z, Mob *mob)
{
	item->hurtAndBreak(2, mob);
}
