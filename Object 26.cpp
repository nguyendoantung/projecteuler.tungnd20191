#include <stdio.h>
int dem_so_buoc(int x){
    int n = x;
    int a[n] = {0};
    int count1 = 0 , count2 = 0;
	int temp1 = 1,temp2 = 1;
	while(temp1 < x){
		temp1 = temp1*10;
		temp2 = temp1;
	}
	while(a[temp1] == 0){
		temp1 = temp1%n;
		if(temp1 == 0) return 0;
		else{
			count1 ++;
			a[temp1] = 1;
			temp1 =temp1 *10;
		}
	}
	while(temp2 != temp1){
		count2 ++;
		temp2 = temp2%n;
		temp2 = temp2 *10;
	} 
	return (count1 -count2);
}
int main()
{
    printf("%d",dem_so_buoc(7));
    return 0;
}

