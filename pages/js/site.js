// Izbornik na mobitelu
(function () {
  var btn = document.getElementById('menuBtn');
  var backdrop = document.getElementById('backdrop');
  function toggle(open) {
    document.body.classList.toggle('nav-open', open);
    btn.setAttribute('aria-expanded', open ? 'true' : 'false');
  }
  btn.addEventListener('click', function () { toggle(!document.body.classList.contains('nav-open')); });
  backdrop.addEventListener('click', function () { toggle(false); });

  // Trenutna stavka vidljiva u bočnom izborniku
  var cur = document.querySelector('.sidebar .is-current');
  var side = document.getElementById('sidebar');
  if (cur && side) side.scrollTop = cur.offsetTop - side.clientHeight / 2;

  // Gumb "Kopiraj" na programskom kodu
  document.querySelectorAll('#source').forEach(function (box) {
    var pre = box.querySelector('pre');
    if (!pre) return;
    var b = document.createElement('button');
    b.className = 'copy-btn';
    b.type = 'button';
    b.textContent = 'Kopiraj';
    b.addEventListener('click', function () {
      var text = pre.innerText.replace(/ /g, ' ');
      var done = function () { b.textContent = 'Kopirano'; setTimeout(function () { b.textContent = 'Kopiraj'; }, 1500); };
      if (navigator.clipboard) {
        navigator.clipboard.writeText(text).then(done);
      } else {
        var t = document.createElement('textarea');
        t.value = text; document.body.appendChild(t); t.select();
        document.execCommand('copy'); document.body.removeChild(t); done();
      }
    });
    box.appendChild(b);
  });
})();
