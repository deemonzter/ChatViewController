//
//  GSChatCell.swift
//  Messenger
//
//  Created by Joseph Daryl Locsin on 03/08/2017.
//  Copyright © 2017 Slack Technologies, Inc. All rights reserved.
//

import UIKit

class GSChatCell: UITableViewCell {
    
    @IBOutlet weak var constraintContainerLeading: NSLayoutConstraint!
    @IBOutlet weak var constraintContainerTrailing: NSLayoutConstraint!
    @IBOutlet weak var viewContainer: UIView!
    @IBOutlet weak var labelDateAndStatus: UILabel!
    @IBOutlet weak var viewImageBackground: UIImageView!
    @IBOutlet weak var viewText: UITextView! {
        didSet {
            viewText.font = GSChatCell.defaultFont()
        }
    }
    
    class func cellIdentifier() -> String {
        return "GSChatCell"
    }
    
    class func cellFixedComponentsHeight() -> CGFloat {
        return (10+28) //padding+labelDate
    }
    
    class func defaultFont() -> UIFont {
        return UIFont.systemFont(ofSize: 13)
    }
}
