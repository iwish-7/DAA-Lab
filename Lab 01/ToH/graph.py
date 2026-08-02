import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV file
data = pd.read_csv("tower_of_hanoi.csv")

# Plot
plt.figure(figsize=(8,5))

plt.plot(data["Discs"],
         data["Moves"],
         marker='o',
         linewidth=2,
         markersize=6,
         label="Tower of Hanoi")

plt.title("Tower of Hanoi Performance Analysis")
plt.xlabel("Number of Discs")
plt.ylabel("Number of Moves")
plt.xticks(data["Discs"])
plt.grid(True)
plt.legend()

plt.tight_layout()
plt.show()