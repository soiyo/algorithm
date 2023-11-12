#include <stdio.h>
	int main(void){
		int i, j, temp;
		// 선언을 할때는 원소 개수로 써주고 실제 사용 시에 0번 인덱스부터 시작함
		int array[10] = {1, 10, 5, 8, 7, 6, 5, 4, 3, 2, 9}; //10개를 저장할 수 있는 배열 선언 및 초기화
		for (i=0; i<10; i++){ //전체 집합의 원소 개수만큼 반복
			for (j=0; j<9-i; j++){ //현재 집합의 원소 개수 - 1 만큼 재반복
				if(array[j]>array[j+1]) //바로 옆의 것과 비교해 값이 더 큰 놈을 오른쪽으로 옮겨줌 if(왼쪽값 > 오른쪽 값) 이라면
					temp = array[j]; //temp = 왼쪽 값(큰 값, 위치를 바꿀 놈)
					array[j] = array[j+1]; //array[j](왼쪽에 위치한 값) = 작은 값 넣어줌
					array[j+1] = temp; //오른쪽에 올 값 = temp에 들어있던 값
					//즉, array[j]와 array[j+1] 자리 바꿔줌				
			}
		}
		for(i=0; i<10; i++){ //전체 집합의 원소 개수만큼 반복
		printf("%d ", array[i]); //배열의 i번째 원소의 값을 출력해줌
		}
		return 0;
	}