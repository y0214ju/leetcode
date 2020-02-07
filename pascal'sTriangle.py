class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if(numRows == 0):
            return [];
        if(numRows == 1):
            return [[1]]
        result = [[1], [1,1]]
        current = [1,1]
        for i in range(numRows -2):
                new = [1]+ [current[j] + current[j+1] for j in range(len(current) -1)] +[1]
                result.append(new)
                current = new
                
        return result
            
            
            
        
