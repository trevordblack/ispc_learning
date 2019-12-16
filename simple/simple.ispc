
export void simple(uniform float vin[], uniform float vout[],
        uniform int count) {
    foreach (index = 0 ... count) {
        // load the appropriate input value for this program instance.
        float v = vin[index];

        // Do an arbitrary little computation, but at least make the
        // computation dependent on the value being processed
        if (v < 3.0)
            v = v * v;
        else
            v = sqrt(v);

        // and write the result to the output array
        vout[index] =  v;
    }
}
