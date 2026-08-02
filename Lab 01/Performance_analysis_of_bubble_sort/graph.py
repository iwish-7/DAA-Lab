import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("bubble_data.csv")

plt.figure(figsize=(8,5))

plt.plot(data["Size"], data["Optimized"],
         marker='o', label="Optimized Bubble Sort")

plt.plot(data["Size"], data["Normal"],
         marker='s', label="Normal Bubble Sort")

plt.xlabel("Array Size (n)")
plt.ylabel("Number of Comparisons")
plt.title("Bubble Sort Performance Analysis")
plt.grid(True)
plt.legend()

plt.show()