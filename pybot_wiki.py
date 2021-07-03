import wikipedia

def wiki_command(command):
    wiki,keyword=command.split()
    wikipedia.set_lang('ja')
    try:
        page=wikipedia.page(keyword)
        title=page.title
        summary=page.summary
        response=f'{title}\n{summary}'
    except wikipedia.exceptions.pageError:
        response='指定のページが見つかりませんでした'

    return response
