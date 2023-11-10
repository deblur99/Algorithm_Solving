소스 파일 git repo에 업로드하여 제출

# 2751
일단 sort 함수 사용법에 대해서는 아래 참조
https://velog.io/@d2h10s/c-STLsort%EB%A5%BC-%EC%82%AC%EC%9A%A9%ED%95%9C-%EC%A0%95%EB%A0%AC

- 2750번에서는 삽입정렬 (O(n^2)), cin, cout, vector 조합으로 써도 시간 초과가 나지 않았지만,
 2751번에서는 저 조합으로 하면 채점 1~2%에서 시간 초과가 발생함
- 해결 방법은 다음과 같음
    1) printf, scanf 함수는 cout, cin 함수보다 입출력 속도가 3~5배 가량 빨라 이걸 대신 쓰면 됨
    2) vector 자료구조를 쓸 때는 reserve 함수로 미리 크기를 지정해 주어야 함
    3) 정렬 알고리즘은 O(n^2)인 알고리즘 대신 O(nlogn) 알고리즘을 써야 함
        ex) 퀵정렬, 힙정렬, 병합정렬 -> algorithm의 sort 함수는 세 알고리즘이 적당히 섞여 있음