const tipModal = tip => {
  wx.showModal({
    title: '提示',
    content: tip,
    showCancel: false,
    success(res) {
      if (res.confirm) {
        console.log('用户点击确定')
      }
    }
  });
}

const coutNum = num => {
  if (num > 1000 && num < 10000) {
    num = (num / 1000).toFixed(1) + 'k';
  } else if (num > 10000) {
    num = (num / 10000).toFixed(1) + 'w';
  } else if (num > 1000000) {
    num = (num / 1000000).toFixed(1) + 'm';
  }
  return num;
}

module.exports = {
  tipModal: tipModal,
  coutNum: coutNum
};
