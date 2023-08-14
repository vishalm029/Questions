class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        priority_queue<int> p;
        // We Will Push k elements in priority queue
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(k>0)  //  pushing k elements
                    p.push(matrix[i][j]),k--;
                
                // If next element is smaller than top() of priority_queue
                // then we will pop() top element and push next element;
                else if(p.top()>matrix[i][j]) 
					p.pop(),p.push(matrix[i][j]);
            
                // Else if top() element of priority queue is smaller than next element.
                // Then we will break this loop because in this row next all elements will be greater.
                else 
                    break;
            }
        }
        return p.top();
    }
};