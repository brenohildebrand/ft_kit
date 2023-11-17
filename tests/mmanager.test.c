#include "../modules/basic/basic.h"
#include "../modules/mmanager/mmanager.h"

int	main(void)
{
	/**
	 * Flow Tests
	 * The following tests will test some common uses of this module.
	*/
	/**
	 * F00
	 * Allocate multiple memory addresses in a sequence and then deallocate then.
	*/
	void	*addresses[100];

	for (int i = 0; i < 100; i++)
	{
		addresses[i] = mmanager_malloc(i);
		if (addresses[i] == NULL)
			break;
	}
	for (int i = 0; i < 100 && addresses != NULL; i++)
	{
		mmanager_free(addresses[i]);
	}

	/**
	 * F01
	 * Allocate multiple memory addressses in a sequence and then deallocate then
	 * all at once.
	*/
	for (int i = 0; i < 100; i++)
		if (mmanager_malloc(i) == NULL)
			break;
	mmanager_free_all();

	/**
	 * Return
	*/
	return (0);	
}