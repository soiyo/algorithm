# 배열의 크기, 더할 요소 개수, 중복 가능 개수
n, m, k = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
first = data[n-1]
second = data[n-2]

# 가장 큰 수 더하기
# k=3일 때 6665 6665처럼 반복됨 이는 k+1개가 반복되는 형태임
count=int(m/(k+1))*k # 반복되는 수열 개수 * 중복 가능 수
count+=m%(k+1)# 나머지 발생시 추가로 더해지는 가장 큰수 개수

result=0
result+=count*first
result+=(m-count)*second

print(result)
