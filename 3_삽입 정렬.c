#include <stdio.h>
	int main(void){
		int i, j, temp;
		int array[10] = {1, 10, 5, 8, 7, 6, 5, 4, 3, 2, 9};
		for (i=0; i<9; i++){
			j = i; //현재 정렬할 원소 선택해 적절한 위치에 넣어주기위해
			while (j>=0 & array[j] > array[j+1]){ //j는 1씩 빼가면서 오른쪽의 값과 비교, 왼쪽에 있는 값이 더 크면 서로 위치 바꿔준다.
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				j--;
			}
		}
		for(i=0; i<10; i++){
		printf("%d ", array[i]);
		}
		return 0;
	}