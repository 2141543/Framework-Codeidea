
/************************************************************************
 *                                                                      *
 *                    👣 WechatPublic - Codeidea 👣                     *
 *                      @Email: pbwaterln@sina.com                      *
 *                                                                      *
 *         |用文字记录自己的思想与经验 | 编程 | 职场 | 阅读 | 摄影 | 体验 |      *
 *                                                                      *
 *                      ⚠️ 转载请告知 且 注明出处 蟹蟹 ⚠️                   *
 ************************************************************************/



#pragma mark - UITableViewCell常用属性
 

// 设置右侧显示附加样式（比如右侧的箭头; 优先级: accessoryView > accessoryType）
cell.accessoryType = UITableViewCellAccessoryCheckmark;
cell.accessoryView = [[UISwitch alloc] init];

// 设置选中样式(StyleNone选中不变灰色)
cell.selectionStyle = UITableViewCellSelectionStyleNone;

// 设置cell的背景颜色
cell.backgroundColor = [UIColor clearColor];// 透明

// 设置cell的背景View (优先级: backgroundView > backgroundColor)
UIView *view = [[UIView alloc] init];
view.backgroundColor = [UIColor grayColor];
cell.backgroundView = view;

// 设置cell选中时背景View
UIView *bgView = [[UIView alloc] init];
bgView.backgroundColor = [UIColor blueColor];
cell.selectedBackgroundView = bgView;

//contenView subViews -> UIImageView、textLabel、detailTextLabel
//cell.contentView =










#pragma mark - ↑






































