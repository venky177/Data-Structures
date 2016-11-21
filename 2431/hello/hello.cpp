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
#include "person.h"
#include "hello.h"

hello::hello(QWidget *parent)
    : QWidget(parent)
{	start=NULL;
	ui.setupUi(this);
}

hello::~hello()
{

}
void hello::get()
{
	QString name,dob,ht,wt,add,insur,lice,mobile,bg;
	name=ui.lineEdit->text();
	dob=ui.lineEdit_3->text();
	ht=ui.lineEdit_4->text();
	wt=ui.lineEdit_2->text();
	add=ui.lineEdit_8->text();
	insur=ui.lineEdit_5->text();
	lice=ui.lineEdit_7->text();
	mobile=ui.lineEdit_6->text();
	bg=ui.comboBox->currentText();
	person *p=new person(name,dob,ht,wt,add,insur,lice,mobile,bg);
	insert(p);

}
void hello::insert(person *p){
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        p->next=start;
        start=p;
    }
}
void hello::search()
{
    QString key=ui.lineEdit_9->text();
    person *temp=start;
    while(temp!=NULL)
    {
        if(temp->name==key)
        ui.textEdit->setText(temp->name+"\n"+temp->dob+"\n"+temp->ht+"\n"+temp->wt+" \n"+temp->add+" \n"+temp->insur+" \n"+temp->lice+" \n"+temp->mobile+" \n"+temp->bg+" \n");
        else temp=temp->next;
    }
}

void hello::on_pushButton_clicked()
{   get();
    ui.lineEdit->clear();
    ui.lineEdit_2->clear();
    ui.lineEdit_3->clear();
    ui.lineEdit_4->clear();
    ui.lineEdit_5->clear();
    ui.lineEdit_6->clear();
    ui.lineEdit_8->clear();
    ui.lineEdit_7->clear();


}

void hello::on_pushButton_2_clicked()
{
    search();
}
