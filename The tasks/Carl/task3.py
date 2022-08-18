import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("task3.txt")
pos = np.array(df["pos"])

n=len(pos)
dt=0.05
t=np.linspace(0,n*dt,n)
pospen=np.polyfit(t, pos, 3)
print(pospen)
pospene=pospen[0]*t**3+pospen[1]*t**2+pospen[2]*t+pospen[3]
plt.plot(t,pos)
plt.plot(t, pospene)
plt.show()
