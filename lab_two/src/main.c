#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


#include "fun_.h"

int credit = 5000;
int pull = 300;
int dp = 999999;


int a, b, c;


int main (int argc, char* argv[]) {
	srand(time(NULL));
	while (1) {
		int menubar;
		printf("\n1 - Play\n");
    	printf("2 - Check balance.\n");
    	printf("3 - Possible winer.\n");
    	printf("0 - Exit.\n");
    	scanf("%d", &menubar);
    	switch(menubar) {
    		case 0 : {
    			printf("\nEnd\n");
    			return 0;
				break;
			}
    		case 1 : {
    			if (credit < 300) {
    				balan(credit);
    				return 0;
    			}
    			printf("\n________________________________\n");
    			
    			credit -= 300;
    			a = rand() % 8;
    			b = rand() % 8;
    			c = rand() % 8;
    			printf("\n\t-------------");
    			printf("\n\t| %d | %d | %d |\n", a, b, c);
    			printf("\t-------------\n");
    			credit += combination(a, b, c, pull, dp);
    			balan (credit);
    			if (a == 7 && b == 7 && c == 7) {
					return 0;
				}
				printf("________________________________\n");
				break;
			}
			case 2 : {
				balan(credit);
				break;
			}
			case 3 : {
				possible_winer();
				break;
			}
			default: printf("\tError\n\n");
		}
    	continue;
	}
    return 0;
}
