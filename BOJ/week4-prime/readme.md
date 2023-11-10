# 에라스토테네스의 체 요약
* 의미 : N보다 작거나 같은 모든 소수를 찾는 알고리즘 (1 < Prime <= N)
* 방법
    1. 2 ~ N까지의 모든 정수를 적는다.
    2. 아직 지우지 않은 수 중 가장 작은 수를 찾는다.\n이것을 P라고 하고, 이 수는 소수이다.
    3. P를 제외한 아직 지우지 않은 P의 배수를 크기 순서대로 지운다.
    4. 아직 모든 수를 지우지 않았다면, 2~3번 과정을 반복한다.
* 코드 구현 유의점
    - 0부터 N까지를 요소로 갖는 정수형 테이블 배열을 만든다. 초기값은 false나 true 중 하나로 통일한다.
    - 소수를 찾으면 해당 인덱스를 초기값과 반대 값으로 업데이트한다.
    - 0, 1번 인덱스는 true로 고정한다.

# 01) 2960 에라스토테네스의 체
- 요약 부분 참고

# 02) 1978 소수 찾기
* 코드 구현 유의점 (23번째 행)
    - 테이블의 요소가 false일 떄, 해당 요소가 입력받은 배열의 요소 중에 있는지 확인한다.
    - 요소 안에 있다면 소수이므로 ret을 1 증가시킨다.

# 03) 21919 소수 최소 공배수
* 코드 구현 유의점 
    1. (전체) 표현 범위 (최대 2^63 - 1이므로, int64_t 자료형 사용함)
    2. (33번째 행) 소수가 중복되지 않도록 유의 (ex) 2 2 3 5 7을 그냥 곱하면 420이지만, 실제 최소공배수는 210임

# 04) 1929 소수 구하기
- Boundary가 정해져 있어서 (M 이상 N 이하), 기존 방법대로 소수 찾고 Boundary 내에 있는 소수들만 vector에 넣어서 해결했음