#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Segment tree node
struct Node {
    int zeros;
    int ones;
};

// Function to merge two nodes
Node mergeNodes(const Node& left, const Node& right) {
    Node merged;
    merged.zeros = left.zeros + right.zeros;
    merged.ones = left.ones + right.ones;
    return merged;
}

// Function to build the segment tree
void buildSegmentTree(vector<Node>& tree, const vector<int>& arr, int node, int start, int end) {
    if (start == end) {
        if (arr[start] == 0) {
            tree[node].zeros = 1;
            tree[node].ones = 0;
        } else {
            tree[node].zeros = 0;
            tree[node].ones = 1;
        }
    } else {
        int mid = (start + end) / 2;
        buildSegmentTree(tree, arr, 2 * node, start, mid);
        buildSegmentTree(tree, arr, 2 * node + 1, mid + 1, end);
        tree[node] = mergeNodes(tree[2 * node], tree[2 * node + 1]);
    }
}

// Function to update the segment tree
void updateSegmentTree(vector<Node>& tree, int node, int start, int end, int index, int value) {
    if (start == end) {
        if (value == 0) {
            tree[node].zeros = 1;
            tree[node].ones = 0;
        } else {
            tree[node].zeros = 0;
            tree[node].ones = 1;
        }
    } else {
        int mid = (start + end) / 2;
        if (index >= start && index <= mid) {
            updateSegmentTree(tree, 2 * node, start, mid, index, value);
        } else {
            updateSegmentTree(tree, 2 * node + 1, mid + 1, end, index, value);
        }
        tree[node] = mergeNodes(tree[2 * node], tree[2 * node + 1]);
    }
}

// Function to query the segment tree for the number of ones and zeros in a range
Node querySegmentTree(const vector<Node>& tree, int node, int start, int end, int l, int r) {
    if (start > r || end < l) {
        Node nullNode;
        nullNode.zeros = 0;
        nullNode.ones = 0;
        return nullNode;
    }
    if (l <= start && end <= r) {
        return tree[node];
    }
    int mid = (start + end) / 2;
    Node left = querySegmentTree(tree, 2 * node, start, mid, l, r);
    Node right = querySegmentTree(tree, 2 * node + 1, mid + 1, end, l, r);
    return mergeNodes(left, right);
}

// Function to find the minimum change number after which at least one segment becomes beautiful
int findBeautifulSegment(const vector<int>& arr, const vector<pair<int, int>>& segments, const vector<int>& changes) {
    int n = arr.size();
    vector<Node> tree(4 * n);
    buildSegmentTree(tree, arr, 1, 0, n - 1);

    for (int i = 0; i < changes.size(); i++) {
        int index = changes[i] - 1;
        updateSegmentTree(tree, 1, 0, n - 1, index, 1);

        for (const auto& segment : segments) {
            int l = segment.first - 1;
            int r = segment.second - 1;
            Node result = querySegmentTree(tree, 1, 0, n - 1, l, r);
            if (result.ones > result.zeros && (r - l + 1) % 2 == 1) {
                return i + 1;
            }
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n, 0);
        vector<pair<int, int>> segments(m);

        for (int i = 0; i < m; i++) {
            int l, r;
            cin >> l >> r;
            segments[i] = make_pair(l, r);
        }

        int q;
        cin >> q;

        vector<int> changes(q);
        for (int i = 0; i < q; i++) {
            cin >> changes[i];
        }

        int result = findBeautifulSegment(arr, segments, changes);
        cout << result << endl;
    }

    return 0;
}
