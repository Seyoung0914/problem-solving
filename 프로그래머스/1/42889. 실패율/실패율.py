def solution(N, stages):
    answer = []
    
    for n in range (1, N+1):
        # print(f"===stage is {n}===\n")
        challenger = 0
        lose = 0
        for stage in stages:
            if stage == n:
                lose += 1
                # print(f"LOSE: {stage} == {n}")
            if stage >= n:
                challenger += 1
                # print(f"challagner is {challenger}")
        if challenger == 0: answer.append((n,0))
        else: answer.append((n,lose/(challenger)))
        
        # print(f"lose is {lose} and challenger is {challenger}")

    answer.sort(key=lambda x: (-x[1], x[0]))
    return [x[0] for x in answer]