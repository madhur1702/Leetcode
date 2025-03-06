class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        if (squares.empty()) return 0.0;

        vector<double> heightPositions;
        heightPositions.reserve(squares.size() * 2);
        
        for (const auto& square : squares) {
            double startHeight = static_cast<double>(square[1]);
            double sideLength = static_cast<double>(square[2]);
            heightPositions.push_back(startHeight);
            heightPositions.push_back(startHeight + sideLength);
        }
        
        sort(heightPositions.begin(), heightPositions.end());
        auto last = unique(heightPositions.begin(), heightPositions.end());
        heightPositions.erase(last, heightPositions.end());

        if (heightPositions.size() < 2) return heightPositions[0];

        double minHeight = heightPositions[0];
        double maxHeight = heightPositions.back();
        const double PRECISION = 1e-5;

        while (maxHeight - minHeight > PRECISION) {
            double currentHeight = minHeight + (maxHeight - minHeight) / 2.0;
            long double totalAreaAbove = 0.0;
            long double totalAreaBelow = 0.0;

            for (const auto& square : squares) {
                double startY = static_cast<double>(square[1]);
                double sideLength = static_cast<double>(square[2]);
                double squareTop = startY + sideLength;
                long double squareArea = static_cast<long double>(sideLength) * static_cast<long double>(sideLength);

                if (currentHeight <= startY) {
                    totalAreaAbove += squareArea;
                } else if (currentHeight >= squareTop) {
                    totalAreaBelow += squareArea;
                } else {
                    long double heightAbove = squareTop - currentHeight;
                    long double heightBelow = currentHeight - startY;
                    totalAreaAbove += heightAbove * static_cast<long double>(sideLength);
                    totalAreaBelow += heightBelow * static_cast<long double>(sideLength);
                }
            }

            if (totalAreaAbove > totalAreaBelow) {
                minHeight = currentHeight;
            } else {
                maxHeight = currentHeight;
            }
        }
        return minHeight;
    }
};
