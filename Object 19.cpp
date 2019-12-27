#include <stdio.h>
#include <stdlib.h>
int namNhuan(int year){
     if(year%4 == 0) {
          if(year %100 != 0) return 1;
          else {
               if(year % 400 == 0) return 1;
               else return 0;
          }
     }else return 0;
}
int main()
{
    int doomsDay = 5;
    int year = 1901;
    int count = 0;
    for(year = 1901; year <= 2000;year++){
     if(namNhuan(year) != 1) {
     switch (doomsDay){
     case 2: count += 1;break;
     case 3: count += 2;break;
     case 4: count += 2;break;
     case 5: count += 2;break;
     case 6: count += 1;break;
     case 7: count += 3;break;
     case 8: count += 1;break;
     }
     }else{
          switch (doomsDay){
     case 2: count += 1;break;
     case 3: count += 1;break;
     case 4: count += 3;break;
     case 5: count += 2;break;
     case 6: count += 1;break;
     case 7: count += 2;break;
     case 8: count += 2;break;
     }
    }
    if(namNhuan(year+1)) doomsDay += 2;  //366%7 = 2
    else doomsDay += 1; //365%7 = 1
    if(doomsDay >8)  doomsDay = doomsDay - 7;
    }


    printf("%d",count);

}

