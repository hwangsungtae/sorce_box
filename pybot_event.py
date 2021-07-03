import requests

def event_command(command):
    event,keyword=command.split()
    url='https://connpass.com/api/v1/event/'
    real_url=f'{url}?keyword={keyword}'
    r=requests.get(real_url)
    json=r.json()
    title=json['events'][0]['title']
    event_url=json['events'][0]['event_url']
    place=json['events'][0]['place']

    response=f'「{title}」の会場は{place}で、イベントURLは{event_url}です'
    return response
