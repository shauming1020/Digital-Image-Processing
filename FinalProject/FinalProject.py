# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'FinalProject.ui'
#
# Created by: PyQt5 UI code generator 5.9.2
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(767, 397)
        self.imgBt = QtWidgets.QPushButton(Form)
        self.imgBt.setGeometry(QtCore.QRect(20, 260, 111, 41))
        self.imgBt.setObjectName("imgBt")
        self.dcText = QtWidgets.QTextEdit(Form)
        self.dcText.setGeometry(QtCore.QRect(560, 20, 161, 351))
        self.dcText.setObjectName("dcText")
        self.gtBt = QtWidgets.QPushButton(Form)
        self.gtBt.setGeometry(QtCore.QRect(140, 260, 111, 41))
        self.gtBt.setObjectName("gtBt")
        self.runBt = QtWidgets.QPushButton(Form)
        self.runBt.setGeometry(QtCore.QRect(380, 260, 111, 41))
        self.runBt.setObjectName("runBt")
        self.threshold = QtWidgets.QLineEdit(Form)
        self.threshold.setGeometry(QtCore.QRect(140, 320, 111, 20))
        self.threshold.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.threshold.setObjectName("threshold")
        self.threLabel = QtWidgets.QLabel(Form)
        self.threLabel.setGeometry(QtCore.QRect(140, 350, 131, 18))
        self.threLabel.setObjectName("threLabel")
        self.mdBt = QtWidgets.QPushButton(Form)
        self.mdBt.setGeometry(QtCore.QRect(260, 260, 111, 41))
        self.mdBt.setObjectName("mdBt")
        self.scale = QtWidgets.QLineEdit(Form)
        self.scale.setGeometry(QtCore.QRect(380, 320, 111, 20))
        self.scale.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.scale.setObjectName("scale")
        self.scaleLabel = QtWidgets.QLabel(Form)
        self.scaleLabel.setGeometry(QtCore.QRect(380, 350, 131, 18))
        self.scaleLabel.setAlignment(QtCore.Qt.AlignLeading|QtCore.Qt.AlignLeft|QtCore.Qt.AlignVCenter)
        self.scaleLabel.setObjectName("scaleLabel")
        self.ensemThre = QtWidgets.QLineEdit(Form)
        self.ensemThre.setGeometry(QtCore.QRect(260, 320, 111, 20))
        self.ensemThre.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.ensemThre.setObjectName("ensemThre")
        self.ensemLabel = QtWidgets.QLabel(Form)
        self.ensemLabel.setGeometry(QtCore.QRect(260, 350, 131, 18))
        self.ensemLabel.setObjectName("ensemLabel")
        self.enhanLabel = QtWidgets.QLabel(Form)
        self.enhanLabel.setGeometry(QtCore.QRect(20, 350, 131, 18))
        self.enhanLabel.setObjectName("enhanLabel")
        self.enhanceTimes = QtWidgets.QLineEdit(Form)
        self.enhanceTimes.setGeometry(QtCore.QRect(20, 320, 111, 20))
        self.enhanceTimes.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.enhanceTimes.setObjectName("enhanceTimes")
        self.runmode = QtWidgets.QComboBox(Form)
        self.runmode.setGeometry(QtCore.QRect(387, 220, 101, 22))
        self.runmode.setCurrentText("")
        self.runmode.setObjectName("runmode")

        self.retranslateUi(Form)
        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        _translate = QtCore.QCoreApplication.translate
        Form.setWindowTitle(_translate("Form", "DIP_FinalProject"))
        self.imgBt.setText(_translate("Form", "Select Image"))
        self.gtBt.setText(_translate("Form", "Select GT"))
        self.runBt.setText(_translate("Form", "RUN"))
        self.threshold.setText(_translate("Form", "0.9"))
        self.threLabel.setText(_translate("Form", "Output Threshold"))
        self.mdBt.setText(_translate("Form", "Select Model"))
        self.scale.setText(_translate("Form", "0.2"))
        self.scaleLabel.setText(_translate("Form", "Scale"))
        self.ensemThre.setText(_translate("Form", "0.5"))
        self.ensemLabel.setText(_translate("Form", "Ensemble Threshold"))
        self.enhanLabel.setText(_translate("Form", "Enhance"))
        self.enhanceTimes.setText(_translate("Form", "2"))

