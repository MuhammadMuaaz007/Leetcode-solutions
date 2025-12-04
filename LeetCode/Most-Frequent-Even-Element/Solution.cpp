map<int, int> mp;

        for (const auto it : nums) {
                mp[it]++;
        }
        int ans = -1, max = - 1;

        for (const auto m : mp) {
            if (m.first % 2 == 0 && m.second > max) {
                ans = m.first;
                max = m.second;
            }
        }
