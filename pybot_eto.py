def eto_command(command):
    eto,year_str=command.split()
    year=int(year_str)
    eto_number=(year+8)%12
    eto_list=['ne', 'usi','tora','u' ,'tatu', 'mi', 'uma', 'hituzi', 'saru', 'tori', 'inu' , 'i']
    eto_name=eto_list[eto_number]
    response=f'{year}年生まれのあなたの干支は{eto_name}です。'

    return response
