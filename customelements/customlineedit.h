#ifndef CUSTOMLINEEDIT_H
#define CUSTOMLINEEDIT_H

#include <QLineEdit>

class CustomLineEdit : public QLineEdit {

	Q_OBJECT

public:
	CustomLineEdit(QString txt = "", QWidget *parent = 0);
	~CustomLineEdit();

	// Minimum width
	void setMinWidth(int w);
	void setBorder(QString col, int w);

public slots:
	void setEnabled(bool);

private:
	int width;
	QString borderColor;
	int borderWidth;
	void setCSS();

protected:
	void mouseReleaseEvent(QMouseEvent *);

signals:
	void clicked();

};

#endif // CUSTOMLINEEDIT_H
