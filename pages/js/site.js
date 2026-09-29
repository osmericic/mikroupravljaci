(function () {
  var body = document.body;
  var btn = document.getElementById('menuBtn');
  var side = document.getElementById('sidebar');

  // Izbornik na mobitelu
  function toggle(open) {
    body.classList.toggle('nav-open', open);
    btn.setAttribute('aria-expanded', open ? 'true' : 'false');
  }
  btn.addEventListener('click', function () { toggle(!body.classList.contains('nav-open')); });
  document.getElementById('backdrop').addEventListener('click', function () { toggle(false); });

  // Trenutni zadatak vidljiv u izborniku
  var cur = side.querySelector('.is-current');
  if (cur) side.scrollTop = cur.offsetTop - side.clientHeight / 2;

  // Pretraživanje zadataka
  var input = document.getElementById('navSearch');
  var chapters = side.querySelectorAll('.nav-chapter');
  var noRes = side.querySelector('.no-results');
  var initialOpen = Array.prototype.map.call(chapters, function (d) { return d.open; });
  function norm(s) { return s.toLowerCase().normalize('NFD').replace(/[̀-ͯ]/g, '').replace(/đ/g, 'd'); }
  input.addEventListener('input', function () {
    var q = norm(input.value.trim());
    var any = false;
    chapters.forEach(function (d, i) {
      var hit = 0;
      var chName = norm(d.querySelector('summary').textContent);
      d.querySelectorAll('li').forEach(function (li) {
        var num = (li.querySelector('.n') || { textContent: '' }).textContent.replace('.', '');
        var ok = !q || norm(li.textContent).indexOf(q) > -1 || chName.indexOf(q) > -1 || num === q;
        li.hidden = !ok;
        if (ok) hit++;
      });
      d.hidden = q && !hit;
      d.open = q ? hit > 0 : initialOpen[i];
      if (hit) any = true;
    });
    noRes.hidden = any || !q;
  });
  input.addEventListener('keydown', function (e) {
    if (e.key === 'Enter') {
      var first = side.querySelector('.nav-chapter:not([hidden]) li:not([hidden]) a');
      if (first) location.href = first.href;
    }
    if (e.key === 'Escape') { input.value = ''; input.dispatchEvent(new Event('input')); }
  });

  // Gumb "Kopiraj"
  document.querySelectorAll('#source').forEach(function (box) {
    var pre = box.querySelector('pre');
    if (!pre) return;
    var b = document.createElement('button');
    b.className = 'copy-btn'; b.type = 'button'; b.textContent = 'Kopiraj kod';
    b.addEventListener('click', function () {
      var text = pre.innerText.replace(/ /g, ' ');
      function done() {
        b.textContent = 'Kopirano'; b.classList.add('done');
        setTimeout(function () { b.textContent = 'Kopiraj kod'; b.classList.remove('done'); }, 1500);
      }
      if (navigator.clipboard && window.isSecureContext) { navigator.clipboard.writeText(text).then(done); }
      else {
        var t = document.createElement('textarea'); t.value = text; document.body.appendChild(t);
        t.select(); document.execCommand('copy'); document.body.removeChild(t); done();
      }
    });
    box.appendChild(b);
  });
})();
