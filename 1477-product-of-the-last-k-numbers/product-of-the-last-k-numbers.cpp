class ProductOfNumbers {
    vector<int> nums;

public:
    ProductOfNumbers() {}

    void add(int num) {
        nums.push_back(num);
    }

    int getProduct(int k) {
        int n = nums.size();
        int prod = 1;
        for (int i = n - 1; i >= n - k; i--) {
            prod *= nums[i];
        }
        return prod;
    }
};
