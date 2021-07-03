from datetime import date,datetime

def today_command():
    today=date.today()
    response=today
    return response

def datetime_command():
    now=datetime.now()
    response=now
    return response

def weekday_command(command):
    data=command.split()
    try:
        year=int(data[1])
        month=int(data[2])
        day=int(data[3])
        one_day=date(year,month,day)
        weekday_str='月火水木金土日'
        weekday=weekday_str[one_day.weekday()]
    except ValueError:
        response='ばか'
    except IndexError:
        response='あほ'

    response=weekday
    return response
