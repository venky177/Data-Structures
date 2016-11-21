/****************************************************************************
**
** Trolltech hereby grants a license to use the Qt/Eclipse Integration
** plug-in (the software contained herein), in binary form, solely for the
** purpose of creating code to be used with Trolltech's Qt software.
**
** Qt Designer is licensed under the terms of the GNU General Public
** License versions 2.0 and 3.0 ("GPL License"). Trolltech offers users the
** right to use certain no GPL licensed software under the terms of its GPL
** Exception version 1.2 (http://trolltech.com/products/qt/gplexception).
**
** THIS SOFTWARE IS PROVIDED BY TROLLTECH AND ITS CONTRIBUTORS (IF ANY) "AS
** IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
** TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
** PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
** OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
** EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
** PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
** PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
** LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
** NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** Since we now have the GPL exception I think that the "special exception
** is no longer needed. The license text proposed above (other than the
** special exception portion of it) is the BSD license and we have added
** the BSD license as a permissible license under the exception.
**
****************************************************************************/

#include "trial.h"
#include <sys/types.h>
#include <stdlib.h>
#include<unistd.h>
#include<strings.h>
#include<cstdlib>
#include <QTextEdit>
#include <spawn.h>
#include <stdio.h>
#include <errno.h>
#include <iostream>
#include <QtCore/QCoreApplication>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include<unistd.h>
#include<strings.h>
#include <QLocale>
#include "qtextedit.h"
#include "qaction.h"
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QTextEdit>
#include <QLineEdit>
#include <QMessageBox>
#include <QTextBrowser>
#include <QFile>
#include <QTextStream>
#include <QGraphicsView>
#include <QBitmap>
#include <QPixmap>
#include <QPicture>
#include <QPainter>
#include <QPaintDevice>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QColor>
#include <QWidget>
#include <QFileDialog>
#include <QTextEdit>
#include <spawn.h>
#include <stdio.h>
#include <errno.h>
#include <QtCore/QCoreApplication>

trial::trial(QWidget *parent): QWidget(parent)
{
	ui.setupUi(this);
	connect(this->ui.pushButton,SIGNAL(clicked()),this,SLOT(displayText()));
}


trial::~trial()
{

}

void trial::displayText()
{

QString text1;

text1=this->ui.textEdit->toPlainText();


QMessageBox::critical(this, tr("Error"),"The Text is "+text1);

}
