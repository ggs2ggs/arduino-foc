#ifndef MEDIAN_FILTER_H
#define MEDIAN_FILTER_H

#define NUM_SAMPLES 5

/**
 *  Low pass filter class
 */
class MedianFilter
{
public:
    /**
     * @param samples - Sample size for moving median
     */
    MedianFilter();
    ~MedianFilter() = default;

    float operator() (float x);
//private:
    int steps_since_addition[NUM_SAMPLES];
    float sorted_measurements[NUM_SAMPLES];
};

#endif // LOWPASS_FILTER_H