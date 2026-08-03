def solution(skill, skill_trees):
    answer = 0;
    
    for t in skill_trees:
        learned = ""
        for c in t:
            if c in skill:
                learned += c
        if skill.startswith(learned):
            answer += 1
            
            
        
    
            
    return answer


