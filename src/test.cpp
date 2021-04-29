/**
 * 
 * Release under GPLv-3.0.
 * 
 * @file    test.cpp
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    28/04 2021 20:06
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        28/04 2021      create the file
 * 
 *     last modified: 28/04 2021 20:06
 */
#include "test.hpp"

#include <QDebug>

Test::Test()
{
    mw = new QMainWindow();

    mw->resize(320, 240);
    mw->move(400, 400);

    mw->show();

    qDebug("-------1");
}