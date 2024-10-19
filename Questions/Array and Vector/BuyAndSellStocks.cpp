// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include <iostream>
#include <vector>
using namespace std;
// Best Time to Buy and Sell Stock
int buyAndSell(vector<int> &prices)
{
    int maxprofit = 0, bestbuy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > bestbuy)
        {
            maxprofit = max(maxprofit, prices[i] - bestbuy);
        }
        bestbuy = min(bestbuy, prices[i]);
    }
    return maxprofit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << buyAndSell(prices) << endl;

    return 0;
}