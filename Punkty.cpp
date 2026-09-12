#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Point {
    long long x, y;
};

long long cross_product(Point a, Point b, Point c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

bool is_convex(const vector<Point>& poly) {
    int k = poly.size();
    if (k < 3) return false;
    bool pos = false, neg = false;
    for (int i = 0; i < k; ++i) {
        long long cp = cross_product(poly[i], poly[(i + 1) % k], poly[(i + 2) % k]);
        if (cp > 0) pos = true;
        if (cp < 0) neg = true;
        if (pos && neg) return false;
    }
    return true;
}

bool point_in_polygon(Point p, const vector<Point>& poly) {
    int k = poly.size();
    bool inside = false;
    for (int i = 0, j = k - 1; i < k; j = i++) {
        if (((poly[i].y > p.y) != (poly[j].y > p.y)) &&
            (p.x < (poly[j].x - poly[i].x) * (p.y - poly[i].y) * 1.0 / (poly[j].y - poly[i].y) + poly[i].x)) {
            inside = !inside;
        }
    }
    return inside;
}

struct Polygon {
    vector<Point> vertices;
    bool convex;
};

int n, l, m;
vector<Point> pts;
vector<vector<int>> adj;
vector<int> parent_node;
vector<int> visited;
vector<Polygon> polygons;

void dfs(int u, int p) {
    visited[u] = 1;
    for (int v : adj[u]) {
        if (v == p) continue;
        if (visited[v] == 1) {
            vector<Point> poly;
            int curr = u;
            poly.push_back(pts[curr]);
            while (curr != v) {
                curr = parent_node[curr];
                poly.push_back(pts[curr]);
            }
            if (poly.size() >= 3) {
                polygons.push_back({ poly, is_convex(poly) });
            }
        }
        else if (visited[v] == 0) {
            parent_node[v] = u;
            dfs(v, u);
        }
    }
    visited[u] = 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> l >> m)) return 0;

    pts.resize(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> pts[i].x >> pts[i].y;
    }

    adj.resize(n + 1);
    for (int i = 0; i < l; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    visited.assign(n + 1, 0);
    parent_node.assign(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        if (visited[i] == 0) {
            dfs(i, 0);
        }
    }

    long long total_score = 0;

    for (int i = 0; i < m; ++i) {
        Point q;
        cin >> q.x >> q.y;
        bool found = false;
        for (const auto& poly : polygons) {
            if (point_in_polygon(q, poly.vertices)) {
                if (poly.convex) {
                    total_score += 100;
                }
                else {
                    total_score += 11;
                }
                found = true;
                break;
            }
        }
        if (!found) {
            total_score -= 2;
        }
    }

    cout << total_score << "\n";

    return 0;
}