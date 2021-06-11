import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import matplotlib

get_ipython().run_line_magic("matplotlib", " inline")

matplotlib.rcParams['font.size'] = 10
matplotlib.rcParams['figure.dpi'] = 300

import seaborn as sns

from IPython.core.pylabtools import figsize


df = pd.read_csv('./python/train.csv')
df_survived = df[(df.Survived==1)]
df_lost = df[(df.Survived==0)]


plt.scatter(df_survived['Age'],df_survived['Fare'],c='green',label="Survived")
plt.scatter(df_lost['Age'],df_lost['Fare'],c='red',label="Lost")
plt.xlabel("Age")
plt.ylabel("Fare")
plt.legend()
plt.grid()
plt.show()


df.head()



