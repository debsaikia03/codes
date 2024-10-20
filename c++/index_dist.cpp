#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath> // for abs function

// Function to calculate the total distance for each index to every other duplicate index
std::vector<int> calculateDistances(const std::vector<int>& arr) { 
    
    // Step 1: Initialize the result vector with zeros
    // The result vector will store the total distance for each index
    std::vector<int> result(arr.size(), 0);

    // Step 2: Create a map to store the indices of each element
    // We use an unordered_map where the key is the element value
    // and the value is a vector of indices where the element appears
    std::unordered_map<int, std::vector<int>> indices;
    for (int i = 0; i < arr.size(); ++i) {
        indices[arr[i]].push_back(i); // Store index of each element
    }

    // Step 3: Calculate the distance for each index
    // Iterate through each unique element in the map
    for (const auto& pair : indices) {
        const std::vector<int>& idxList = pair.second; // Get the list of indices for the current element
        // Iterate through each index in the list
        for (int i : idxList) {
            int totalDistance = 0; // Initialize the total distance for the current index
            // Calculate the distance to every other index with the same element
            for (int j : idxList) {
                if (i != j) { // Avoid calculating distance to itself
                    totalDistance += std::abs(i - j); // Compute the distance and add to totalDistance
                }
            }
            result[i] = totalDistance; // Store the total distance in the result vector
        }
    }

    return result; // Return the result vector with distances
}

int main() {

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements: ";

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Call the function to calculate distances
    std::vector<int> result = calculateDistances(arr);

    // Print out the result vector
    for (int val : result) {
        std::cout << val << " "; // Output: 5 0 3 4 0
    }
    std::cout << std::endl; // Print a newline at the end

    return 0; // Return 0 to indicate successful completion
}
