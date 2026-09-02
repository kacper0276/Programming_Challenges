#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct File {
	int id;
	int priority;
	long long weight;        // q
	long long remaining_size;// r
	long long finish_time;
};

long long count_total_weight(vector<File>& active_files) {
	long long total_weight = 0;

	for (int i = 0; i < active_files.size(); i++) {
		total_weight += active_files[i].weight;
	}

	return total_weight;
}

bool compare_by_finish_time(const File& a, const File& b) {
	if (a.finish_time == b.finish_time) return a.id < b.id;

	return a.finish_time < b.finish_time;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector<vector<File>> priority_groups(n + 1);

	long long current_time = 0;
	vector<File> finished_files;

	for (int i = 0; i < n; i++) {
		int nr, p, q, r;

		cin >> nr >> p >> q >> r;

		File file = { nr, p, q, r, 0 };

		priority_groups[p].push_back(file);
	}

	for (int p = 1; p <= n; p++) {
		if (priority_groups[p].empty()) continue;

		vector<File>& active_files = priority_groups[p];

		while (!active_files.empty())
		{
			long long total_weight = count_total_weight(active_files);
			int min_delta_t = INT_MAX;

			for (int i = 0; i < active_files.size(); i++) {
				int time_to_finish = (active_files[i].remaining_size * total_weight) / (m * active_files[i].weight);

				if (time_to_finish < min_delta_t) {
					min_delta_t = time_to_finish;
				}
			}

			current_time += min_delta_t;

			vector<File> still_active_files;

			for (int i = 0; i < active_files.size(); i++) {
				long long downloaded = (m * active_files[i].weight * min_delta_t) / total_weight;

				active_files[i].remaining_size -= downloaded;

				if (active_files[i].remaining_size == 0) {
					active_files[i].finish_time = current_time;
					finished_files.push_back(active_files[i]);
				}
				else {
					still_active_files.push_back(active_files[i]);
				}
			}

			active_files = still_active_files;
		}

	}

	sort(finished_files.begin(), finished_files.end(), compare_by_finish_time);

	for (int i = 0; i < finished_files.size(); i++) {
		cout << finished_files[i].id << " " << finished_files[i].finish_time << endl;
	}

	return 0;
}
