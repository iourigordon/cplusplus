#ifndef __C_CLASS_H__
#define __C_CLASS_H__

class C : public virtual A
{
	public:
		C();
		virtual ~C();

		virtual void whoAmI();
};

#endif
