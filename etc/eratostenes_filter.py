from copy import deepcopy

def find_prime_numbers(N):
  arr = [i for i in range(2, N+1)]
  temp = deepcopy(arr)
  
  for curr_idx in range(len(temp)):
    arr = list(filter(lambda n: not(n != temp[curr_idx] and n % temp[curr_idx] == 0), arr))
  
  return arr

print(find_prime_numbers(1234))