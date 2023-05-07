uint64_t overlap(const std::vector<std::string>& rucksacks) {
    // Take a copy as we iterate, so we can mutate the line.
    auto value = [](std::string in) -> uint64_t {
        // Get the midpoint.
        auto it = in.begin() + in.length()/2;

        // Sort the lower and upper parts.
        std::sort(in.begin(), it);
        std::sort(it, in.end());

        // Calculate the intersection, which is the common item.
        std::vector<char> out;
        std::set_intersection(
            in.begin(), it, // lower part
            it, in.end(),   // upper part
            std::back_inserter(out));

        // Note that the intersection can be multiple items,
        // however, always only one category of an item. We
        // could technically use std::unique to narrow it
        // down to a single item, but who has the time.
        if (out.size() == 0) std::abort();
        // Translate into "priority value".
        if (std::isupper(out[0])) {
            return 27 + out[0]-'A';
        }
        return 1 + out[0]-'a';
    };
    // Finally, sum up the results for each rucksack.
    auto rng = rucksacks | std::views::transform(value) | std::views::common;
    return std::reduce(rng.begin(), rng.end());
}
