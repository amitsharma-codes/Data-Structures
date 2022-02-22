#include"utils.h"
struct student* DelAll(struct student* ptr)
{
	struct student* temp;
	temp=ptr;
	while(ptr)
	{
		ptr=removeFirst(ptr);
	}
	return ptr;
}
