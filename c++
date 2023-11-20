void SortedStack :: sort()
{
   priority_queue<int, vector<int>, greater<int>> g;
   while(!s.empty()) {
    g.push(s.top());
    s.pop();
   }
   while (!g.empty()) {
    s.push(g.top());
    g.pop();
   }
   
}
