class Solution {
    public int largestRectangleArea(int[] heights) {
        Stack<Integer> s1 = new Stack<Integer>();
        int i, j;
        i = 0;
        int n = heights.length;
        int area = 0;
        while(i < n)
        {
            if(s1.isEmpty() || heights[s1.peek()] <= heights[i])
                s1.push(i++);
            else{
                int curr = s1.peek();
                s1.pop();
                int width = s1.isEmpty() ? i : i - s1.peek() - 1;
                area = Math.max(area, width * heights[curr]);
            }
        }
        while(!s1.isEmpty())
        {
            int curr = s1.peek();
            s1.pop();
            int width = s1.isEmpty() ? i : i - s1.peek() - 1;
            area = Math.max(area, width * heights[curr]);
        }
        return area;
    }
}