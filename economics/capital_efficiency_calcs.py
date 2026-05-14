# Capital Efficiency Calculations
def calculate_efficiency(notional, attested_value, leverage):
    return (notional * leverage) / attested_value

print("Capital Efficiency:", calculate_efficiency(18400000, 12870000, 10.9))
