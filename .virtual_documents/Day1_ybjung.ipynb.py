import pandas as pd
df = pd.read_csv("./python/train.csv")
df.head()


df.info


df.describe()


df?


df.loc?


df.iloc[1]


df['Sex']


df.set_index('Name',inplace=True)


df.head()


df['Sex']


df.loc['Braund, Mr. Owen Harris']["Sex"]



