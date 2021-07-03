from datetime import datetime,timedelta,timezone
import json
import requests
import pandas
import matplotlib.pyplot as plt
import japanize_matplotlib

url="http://api.openweathermap.org/data/2.5/forecast?zip={city}&appid={key}&lang=ja&units=metric"
url=url.format(city="601-8330,JP",key="bdf3239a15ae861de9bad37a0b51921e")

json_data=requests.get(url).json()
df=pandas.DataFrame(columns=["気温"])

for data in json_data["list"]:

    tz=timezone(timedelta(hours=+9),'JST')
    jst=str(datetime.fromtimestamp(data["dt"],tz))[:-9]
    temp=data["main"]["temp"]
    df.loc[jst]=temp

df.plot(figsize=(15,8))
plt.ylim(0,30)
plt.ylabel("予想気温")
plt.show()
