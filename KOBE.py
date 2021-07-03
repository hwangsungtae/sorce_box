import pandas
import folium

df=pandas.read_csv("yakeikobe.csv",encoding="utf-8")

map_list=df[["緯度","経度","キャッチコピー","スポット名",]].values

m=folium.Map(location=[34.679142,135.185357],zoom_start=16)
for data in map_list:
    popup=folium.Popup(data[2], max_width=1000)
    folium.Marker([data[0],data[1]],tooltip=data[3],popup=popup).add_to(m)

m.save("KOBE.html")
