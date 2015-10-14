#ifndef HUSERS_H
#define HUSERS_H

#include <QWidget>

namespace Ui {
class HUsers;
}

class HUsers : public QWidget
{
    Q_OBJECT

public:
    explicit HUsers(QWidget *parent = 0);
    ~HUsers();

private:
    Ui::HUsers *ui;
};

#endif // HUSERS_H
