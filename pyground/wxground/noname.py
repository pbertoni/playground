# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Jul 25 2018)
## http://www.wxformbuilder.org/
##
## PLEASE DO *NOT* EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

###########################################################################
## Class MyFrame1
###########################################################################

class MyFrame1 ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = wx.EmptyString, pos = wx.DefaultPosition, size = wx.Size( 500,300 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )
		
		self.SetSizeHints( wx.DefaultSize, wx.DefaultSize )
		# self.SetSizeHints(-1, -1)
		
		bSizer2 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_button1 = wx.Button( self, wx.ID_ANY, u"MyButton1", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer2.Add( self.m_button1, 0, wx.ALL, 5 )
		
		
		self.SetSizer( bSizer2 )
		self.Layout()
		
		self.Centre( wx.BOTH )
	
	def __del__( self ):
		pass
	

###########################################################################
## Class MyPanel2
###########################################################################

class MyPanel2 ( wx.Panel ):
	
	def __init__( self, parent ):
		wx.Panel.__init__ ( self, parent, id = wx.ID_ANY, pos = wx.DefaultPosition, size = wx.Size( 500,300 ), style = wx.TAB_TRAVERSAL )
		
		bSizer1 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_button2 = wx.Button( self, wx.ID_ANY, u"MyButton2", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer1.Add( self.m_button2, 0, wx.ALL, 5 )
		
		
		self.SetSizer( bSizer1 )
		self.Layout()
	
	def __del__( self ):
		pass
	

