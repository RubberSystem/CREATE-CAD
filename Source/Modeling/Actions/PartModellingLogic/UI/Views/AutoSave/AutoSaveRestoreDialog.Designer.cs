﻿/*
 * Created by SharpDevelop.
 * User: CiprianItx
 * Date: 19/11/2009
 * Time: 22:12
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace PartModellingLogic.UI.Views.AutoSave
{
	partial class AutoSaveRestoreDialog
	{
		/// <summary>
		/// Designer variable used to keep track of non-visual components.
		/// </summary>
		private System.ComponentModel.IContainer components = null;
		
		/// <summary>
		/// Disposes resources used by the form.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing) {
				if (components != null) {
					components.Dispose();
				}
			}
			base.Dispose(disposing);
		}
		
		/// <summary>
		/// This method is required for Windows Forms designer support.
		/// Do not change the method contents inside the source code editor. The Forms designer might
		/// not be able to load this method if it was changed manually.
		/// </summary>
		private void InitializeComponent()
		{
            this.glassPanel1 = new Glass.GlassPanel();
            this.label1 = new System.Windows.Forms.Label();
            this.buttonPanel = new Glass.GlassPanel();
            this.cancelButton = new Glass.GlassButton();
            this.okButton = new Glass.GlassButton();
            this.glassPanel1.SuspendLayout();
            this.buttonPanel.SuspendLayout();
            this.SuspendLayout();
            // 
            // glassPanel1
            // 
            this.glassPanel1.BackColor = System.Drawing.Color.DimGray;
            this.glassPanel1.Controls.Add(this.label1);
            this.glassPanel1.Controls.Add(this.buttonPanel);
            this.glassPanel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.glassPanel1.Location = new System.Drawing.Point(0, 0);
            this.glassPanel1.Name = "glassPanel1";
            this.glassPanel1.Size = new System.Drawing.Size(458, 150);
            this.glassPanel1.TabIndex = 2;
            // 
            // label1
            // 
            this.label1.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.label1.ForeColor = System.Drawing.Color.Black;
            this.label1.Location = new System.Drawing.Point(24, 24);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(422, 42);
            this.label1.TabIndex = 7;
            this.label1.Text = "NaroCAD did not quit properly. We are sorry for this inconvenience. Do you want t" +
                "o restore your previous work?\r\n";
            // 
            // buttonPanel
            // 
            this.buttonPanel.BackColor = System.Drawing.Color.RoyalBlue;
            this.buttonPanel.Controls.Add(this.cancelButton);
            this.buttonPanel.Controls.Add(this.okButton);
            this.buttonPanel.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.buttonPanel.Location = new System.Drawing.Point(0, 100);
            this.buttonPanel.Name = "buttonPanel";
            this.buttonPanel.Size = new System.Drawing.Size(458, 50);
            this.buttonPanel.TabIndex = 6;
            // 
            // cancelButton
            // 
            this.cancelButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.cancelButton.BackColor = System.Drawing.Color.Silver;
            this.cancelButton.Location = new System.Drawing.Point(258, 12);
            this.cancelButton.Name = "cancelButton";
            this.cancelButton.Size = new System.Drawing.Size(88, 26);
            this.cancelButton.TabIndex = 1;
            this.cancelButton.Text = "&Cancel";
            this.cancelButton.Click += new System.EventHandler(this.CancelButtonClick);
            // 
            // okButton
            // 
            this.okButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.okButton.BackColor = System.Drawing.Color.Green;
            this.okButton.Location = new System.Drawing.Point(358, 12);
            this.okButton.Name = "okButton";
            this.okButton.Size = new System.Drawing.Size(88, 26);
            this.okButton.TabIndex = 1;
            this.okButton.Text = "&OK";
            this.okButton.Click += new System.EventHandler(this.OkButtonClick);
            // 
            // AutoSaveRestoreDialog
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(458, 150);
            this.Controls.Add(this.glassPanel1);
            this.Name = "AutoSaveRestoreDialog";
            this.ShowIcon = false;
            this.Text = "Restore the last work?";
            this.glassPanel1.ResumeLayout(false);
            this.buttonPanel.ResumeLayout(false);
            this.ResumeLayout(false);

		}

        private Glass.GlassPanel glassPanel1;
        private Glass.GlassPanel buttonPanel;
        private Glass.GlassButton cancelButton;
        private Glass.GlassButton okButton;
        private System.Windows.Forms.Label label1;
	}
}
