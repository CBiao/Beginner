//人见人爱A+B

#include <stdio.h>

int main()
{
	int n, ah, am, as, bh, bm, bs;
	int h, m, s;
	while(scanf("%d", &n)==1){
		while(n--){
			h = m = s = 0;
			scanf("%d %d %d %d %d %d", &ah, &am, &as, &bh, &bm, &bs);
			m = (as+bs)/60;
			s = (as+bs)%60;
			h = ah+bh+(m+am+bm)/60;
			m = (m+am+bm)%60;
			printf("%d %d %d\n", h, m, s);
		}
	}
	return 0;
}
