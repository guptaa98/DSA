#define PI 3.141592653589
class Solution {
public:
    double x, y, r;
    Solution(double radius, double x_center, double y_center) {
        x = x_center;
        y = y_center;
        r = radius;
    }
    double random()
    {
        return (double)rand() / RAND_MAX;
    }
    vector<double> randPoint() 
    {
       double theta = 2 * PI * random();
       double d = sqrt(random())*r;
       return { x + d * cos(theta),y + d * sin(theta) };
    }
};
/* x = X + D * cos(theta)
y = Y + D * sin(theta)
*/
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
