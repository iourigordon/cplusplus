#ifndef __B_CLASS_H__
#define __B_CLASS_H__

class B : public virtual A
{
	public:
		B();
		virtual ~B();

		virtual void whoAmI();
};

#endif
