def solution(nums):
    result = list(set(nums))
    if len(result) < len(nums)/2:
        return len(result)
    return len(nums)/2


# 결국에 중복된건 하나씩만 가져와야하니까 결국에 숫자 배열을 하나씩 만들어야 하겠네
# 그러면 돌면서 중복된게 있는지 리스트에 없으면 추가하는 식으로 해서
# 중복이 없는 리스트를 하나 만들고 그 다음에 거기서 n/2 개를 뽑는걸로 하면 됨
# 만약 n/2보다 리스트 개수가 더 적으면 그냥 리스트 개수를 

