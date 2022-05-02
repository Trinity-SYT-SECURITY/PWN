#include "stdio.h"
#include "stdlib.h"

void printTheKey()
{
  /*
   *
   * print the key
   *
   */
}
//這函式註解掉，也許在原binary中會有它印KEY的過程
int main()
{
  setvbuf(stdout, 0, 2, 0);
  setvbuf(stdin, 0, 2, 0);
  int token = 1234;
  char key[16]; // key的長度只有16個字

  //一開始會輸出一些簡單的敘述

  printf("Billy left his key in the locked room.\n");
  printf("However, he forgot the token of the room.\n");
  printf("Do you know what's the key?");

  read(0, key, 40);

  /*
  read讀到key的variable,但是key的長度只有16個字，卻限制了讀的長度可以有40個字
  */

  if ((int)token == 0xdeadbeef)
  { //確認token是否等於0xdeadbeef的值
    //基本上token不會等於0xdeadbeef，也就讓if的判斷式下不會成立
    printf("Door open. OwO\n");
    printTheKey();                //有成立就會進到這個function
    system("cat /home/ctf/flag"); //這個部分應該是在gohome那題的
  }
  else
  {
    printf("Cannot open door. QwQ\n");
  }

  return 0;
}
