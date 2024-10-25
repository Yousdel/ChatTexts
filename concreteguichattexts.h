#ifndef CONCRETEGUICHATTEXTS_H
#define CONCRETEGUICHATTEXTS_H

#include "ichattexts.h"

class ConcreteGUIChatTexts : public IChatTexts
{
private:
    QString html;
    const QString getHTMLfor(const QString &s);
    const QString workTextTypeChat(const QString &text);
public:
    ConcreteGUIChatTexts();
    const QString & getHTML() override;
};

#endif // CONCRETEGUICHATTEXTS_H
