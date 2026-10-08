#include <stdio.h>
int main()
{
	int unit_id=0;
	int unit_version=0;
	int unit_status=0;
	int sum=0;
	int c = scanf("%d %x %o", &unit_id,&unit_version, &unit_status);
	sum = unit_id + unit_status + unit_version;
	printf("unit_id:%d\nunit_version: %d\nunit_status: %d\nsum: %d\n scanf=%d", unit_id, unit_version, unit_status,sum, c);
	return 0;
}