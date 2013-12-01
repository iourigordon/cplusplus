#ifndef __A_CLASS_H__
#define __A_CLASS_H__

enum 
{
	CONSTRUCTED,
	INITIALIZED,
	MODIFIED,
	DESTROYED
};

class A
{
	public:
		A();
		virtual ~A();

		void init();
		void modify();
		int getState();
		virtual void whoAmI();
	private:

		int m_eState;
};

#endif
