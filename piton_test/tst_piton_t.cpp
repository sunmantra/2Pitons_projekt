#include <QtTest>

// add necessary includes here

class piton_t : public QObject
{
  Q_OBJECT

public:
  piton_t();
  ~piton_t();

private slots:
  void test_case1();

};

piton_t::piton_t()
{

}

piton_t::~piton_t()
{

}

void piton_t::test_case1()
{

}

QTEST_APPLESS_MAIN(piton_t)

#include "tst_piton_t.moc"
