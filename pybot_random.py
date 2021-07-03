import random

def choice_command(command):
    choice_list=command.split()
    slice_list=choice_list[1:]
    choiced=random.choice(slice_list)
    response=f'{choiced}が選ばれました'

    return response

def daice_command():
    daice_number=random.randrange(1,7)
    response=f'{daice_number}の目が出ました'
    return response
