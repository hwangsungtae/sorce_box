from pybot_eto import  eto_command
from pybot_random import daice_command,choice_command
from pybot_datetime import today_command,datetime_command,weekday_command
from pybot_event import event_command
from pybot_wiki import wiki_command

def wareki_value(command):
    try:
        wareki,year_str=command.split()
        year=int(year_str)
        if year>2018:
            reiwa=year-2018
            response=(f'{year}年は、令和{reiwa}年です')
        else:
            response='常識考えて？？'
    except ValueError:
        response='数値を入力してください'

    return response

def length_value(command):
    nagasa,long_str=command.split()
    long=len(long_str)
    response=f'{long_str}の文字の長さは{long}です。'
    return response

command_file=open('data.txt',encoding='utf-8')
raw_data=command_file.read()
command_file.close()
lines_data=raw_data.splitlines()

bot_dict={}
for line in lines_data:
    word_list=line.split(',')
    key=word_list[0]
    response=word_list[1]
    bot_dict[key]=response

def pybot(command):
    #command=input('pybot>')
    response=''
    try:
        for message in bot_dict:
            if message in command:
                response=bot_dict[message]
                break;
        if '和暦'in command:
            response=wareki_value(command)

        if '長さ'in command:
            response=length_value(command)

        if '干支'in command:
            response=eto_command(command)

        if 'さいころ'in command:
            response=daice_command()

        if '選んで'in command:
            response=choice_command(command)

        if '今日'in command:
            response=today_command()

        if '現在'in command:
            response=datetime_command()

        if '曜日'in command:
            response=weekday_command(command)

        if 'イベント'in  command:
            response=event_command(command)

        if '辞典'in command:
            response=wiki_command(command)
        if not response:
            response='??'
        return response
        #print(response)
        #if 'さようなら'in command:
        #    break;
    except Exception as e:
        print('エラーが起きました')
        print(f'内容：{type(e)}')
        print(f'種類:{e}')
