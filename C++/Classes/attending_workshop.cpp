/*
#include<bits/stdc++.h>

using namespace std;
*/

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
#include <vector>
#include <algorithm>

// Define structs Workshop and Available_Workshops.
struct Workshop {
	int start_time;
	int end_time;
	int duration;
};
struct Available_Workshops {
	int n;
	vector<Workshop> *data = new vector<Workshop>(n);
};

// Implement functions initialize and CalculateMaxWorkshops.
Available_Workshops* initialize(int *start_time, int *duration, int n) {
	Available_Workshops* ws = new Available_Workshops();
	ws->n = n;
	for(int i = 0; i < n; i++) {
		Workshop workshop;
		workshop.start_time = start_time[i];
		workshop.duration = duration[i];
		workshop.end_time = workshop.start_time + workshop.duration;
		ws->data->push_back(workshop);
	}
	return ws;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
	sort(ptr->data->begin(), ptr->data->end(), [](Workshop& ws1, Workshop& ws2) {
		return ws1.end_time < ws2.end_time;
	});
	vector<Workshop> *result = new vector<Workshop>();
	int total_end_time = 0;
	for(vector<Workshop>::iterator it = ptr->data->begin(); it != ptr->data->end(); ++it) {
		if(it->start_time >= total_end_time) {
			result->push_back(*it);
			total_end_time = it->end_time;
		}
	}
	return result->size();
}
/*
int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
*/