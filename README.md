# esc
## 这是用来测试的仓库
### 1. 安装 Git
下载 Git 安装程序并运行。按照安装向导的指示进行安装。
### 2. 配置 Git
打开命令提示符（CMD）。
```cmd
# 设置用户名
git config --global user.name "Your Name"
# 设置邮箱

# 设置邮箱
git config --global user.email "EMAILgit config --global user.email "your.email@example.com"

# 检查配置
git config --list

# 克隆仓库
# 克隆仓库
git clone URL_ADDRESSgit clone https://github.com/your-username/your-repo.git

# 切换分支
git checkout BRANCH_NAMEgit checkout feature-branch

# 拉取最新代码
git pull


# 提交更改
git add .


### 1. 创建系统还原点

方法一：通过图形界面
1. 按 `Windows + R`，输入 `sysdm.cpl`，点击确定
2. 选择"系统保护"选项卡
3. 点击"创建"按钮
4. 输入还原点描述（比如"软件卸载前的备份"）
5. 点击"创建"

方法二：通过命令行（管理员权限）
```cmd
# 创建还原点
wmic.exe /Namespace:\\root\default Path SystemRestore Call CreateRestorePoint "我的还原点", 100, 7
```

### 2. 备份重要数据

#### A. 手动备份重要文件夹
常见重要文件夹：
- `C:\Users\用户名\Documents`（文档）
- `C:\Users\用户名\Desktop`（桌面）
- `C:\Users\用户名\Pictures`（图片）
- `C:\Users\用户名\Downloads`（下载）

#### B. 使用命令行备份
1. **使用 xcopy 命令**
```cmd
# 备份整个文件夹（包含子文件夹）
xcopy "源文件夹路径" "目标文件夹路径" /E /H /C /I

# 示例：备份文档文件夹到D盘的Backup文件夹
xcopy "C:\Users\用户名\Documents" "D:\Backup\Documents" /E /H /C /I
```

2. **使用 robocopy 命令**（更强大）
```cmd
# 备份文件夹
robocopy "源文件夹路径" "目标文件夹路径" /MIR

# 示例：备份整个用户文件夹
robocopy "C:\Users\用户名" "D:\Backup\UserFolder" /MIR
```

#### C. 创建系统映像（完整备份）
1. 按 `Windows + R`
2. 输入 `control`
3. 选择"备份和还原(Windows 7)"
4. 点击"创建系统映像"
5. 选择备份位置（建议选择外置硬盘）
6. 按提示完成备份

重要提示：
1. 备份时选择容量足够大的存储设备
2. 建议备份到外部存储设备（如移动硬盘）
3. 特别注意以下位置的重要文件：
   - 浏览器书签和密码
   - 邮件客户端数据
   - 游戏存档
   - 个人配置文件
4. 对于重要文件建议创建多个副本
5. 验证备份是否成功完成

如果您需要备份特定类型的文件，可以使用这个命令：
```cmd
# 备份所有.doc和.docx文件
for /R "C:\Users\用户名\Documents" %f in (*.doc *.docx) do copy "%f" "D:\Backup\Documents"
```
