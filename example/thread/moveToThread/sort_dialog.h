/**
 *
 * Release under GPLv-3.0.
 * 
 * @file    sort_dialog.h
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    06/05 2021 09:23
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        06/05 2021      create the file
 * 
 *     last modified: 06/05 2021 09:23
 */
#ifndef __EXAMPLE_MOVETOTHREAD_SORT_DIALOG_H_
#define __EXAMPLE_MOVETOTHREAD_SORT_DIALOG_H_

#include <QDialog>

#include "random.h"
#include "bubble_sort.h"
#include "quick_sort.h"

namespace Ui {
    class Dialog;
}

class SortDialog : public QDialog {
    Q_OBJECT

public:
    explicit SortDialog(QWidget *parent = nullptr);
    virtual ~SortDialog();

signals:
    void setRandomNum(int cnt);

private:
    Ui::Dialog    *ui;

    Random        *m_random;
    BubbleSort    *m_bubbleSort;
    QuickSort     *m_quickSort;
};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif

