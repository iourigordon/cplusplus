#ifndef __D_CLASS_H__
#define __D_CLASS_H__

class D : public virtual B, public virtual C
{
	public:
		D();
		virtual ~D();

		virtual void whoAmI();
};

#endif
