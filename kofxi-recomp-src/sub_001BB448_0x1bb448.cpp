#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB448
// Address: 0x1bb448 - 0x1bb568
void sub_001BB448_0x1bb448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB448_0x1bb448");
#endif

    switch (ctx->pc) {
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb488u: goto label_1bb488;
        case 0x1bb4a0u: goto label_1bb4a0;
        case 0x1bb530u: goto label_1bb530;
        case 0x1bb544u: goto label_1bb544;
        case 0x1bb54cu: goto label_1bb54c;
        case 0x1bb554u: goto label_1bb554;
        default: break;
    }

    ctx->pc = 0x1bb448u;

    // 0x1bb448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bb44c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1bb44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1bb450: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bb450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb454: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bb454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1bb458: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1bb458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1bb45c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bb45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1bb460: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bb460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bb464: 0x82630072  lb          $v1, 0x72($s3)
    ctx->pc = 0x1bb464u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 114)));
    // 0x1bb468: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BB468u;
    {
        const bool branch_taken_0x1bb468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB468u;
            // 0x1bb46c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb468) {
            ctx->pc = 0x1BB510u;
            goto label_1bb510;
        }
    }
    ctx->pc = 0x1BB470u;
    // 0x1bb470: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1bb470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1bb474: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1bb474u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1bb478: 0xc06d360  jal         func_1B4D80
    ctx->pc = 0x1BB478u;
    SET_GPR_U32(ctx, 31, 0x1BB480u);
    ctx->pc = 0x1BB47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB478u;
            // 0x1bb47c: 0x2610c364  addiu       $s0, $s0, -0x3C9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951780));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D80u;
    if (runtime->hasFunction(0x1B4D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B4D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB480u; }
        if (ctx->pc != 0x1BB480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4D80_0x1b4d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB480u; }
        if (ctx->pc != 0x1BB480u) { return; }
    }
    ctx->pc = 0x1BB480u;
label_1bb480:
    // 0x1bb480: 0xc06eab2  jal         func_1BAAC8
    ctx->pc = 0x1BB480u;
    SET_GPR_U32(ctx, 31, 0x1BB488u);
    ctx->pc = 0x1BB484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB480u;
            // 0x1bb484: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAAC8u;
    if (runtime->hasFunction(0x1BAAC8u)) {
        auto targetFn = runtime->lookupFunction(0x1BAAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB488u; }
        if (ctx->pc != 0x1BB488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAAC8_0x1baac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB488u; }
        if (ctx->pc != 0x1BB488u) { return; }
    }
    ctx->pc = 0x1BB488u;
label_1bb488:
    // 0x1bb488: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb48c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bb48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb490: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bb490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bb494: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bb494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb498: 0xc06e5d0  jal         func_1B9740
    ctx->pc = 0x1BB498u;
    SET_GPR_U32(ctx, 31, 0x1BB4A0u);
    ctx->pc = 0x1BB49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB498u;
            // 0x1bb49c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9740u;
    if (runtime->hasFunction(0x1B9740u)) {
        auto targetFn = runtime->lookupFunction(0x1B9740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4A0u; }
        if (ctx->pc != 0x1BB4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9740_0x1b9740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4A0u; }
        if (ctx->pc != 0x1BB4A0u) { return; }
    }
    ctx->pc = 0x1BB4A0u;
label_1bb4a0:
    // 0x1bb4a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1bb4a4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bb4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb4a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bb4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bb4ac: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1bb4b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb4b4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1bb4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb4b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bb4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bb4bc: 0xc441c3b0  lwc1        $f1, -0x3C50($v0)
    ctx->pc = 0x1bb4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb4c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bb4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb4c4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1bb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1bb4c8: 0x0  nop
    ctx->pc = 0x1bb4c8u;
    // NOP
    // 0x1bb4cc: 0x0  nop
    ctx->pc = 0x1bb4ccu;
    // NOP
    // 0x1bb4d0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bb4d0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1bb4d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bb4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bb4d8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1bb4d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb4dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb4dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bb4e0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1bb4e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1bb4e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB4E4u;
    {
        const bool branch_taken_0x1bb4e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4E4u;
            // 0x1bb4e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4e4) {
            ctx->pc = 0x1BB500u;
            goto label_1bb500;
        }
    }
    ctx->pc = 0x1BB4ECu;
    // 0x1bb4ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1bb4ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1bb4f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bb4f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1bb4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1bb4f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bb4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1bb4fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bb4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bb500:
    // 0x1bb500: 0xae64009c  sw          $a0, 0x9C($s3)
    ctx->pc = 0x1bb500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 4));
    // 0x1bb504: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1bb504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1bb508: 0x8c642360  lw          $a0, 0x2360($v1)
    ctx->pc = 0x1bb508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9056)));
    // 0x1bb50c: 0xae6400a0  sw          $a0, 0xA0($s3)
    ctx->pc = 0x1bb50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 4));
label_1bb510:
    // 0x1bb510: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bb510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb514: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1bb514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bb518: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bb518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb51c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1bb51cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bb520: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bb520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb524: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB524u;
            // 0x1bb528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB52Cu;
    // 0x1bb52c: 0x0  nop
    ctx->pc = 0x1bb52cu;
    // NOP
label_1bb530:
    // 0x1bb530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb538: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb53c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB53Cu;
    SET_GPR_U32(ctx, 31, 0x1BB544u);
    ctx->pc = 0x1BB540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB53Cu;
            // 0x1bb540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB544u; }
        if (ctx->pc != 0x1BB544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB544u; }
        if (ctx->pc != 0x1BB544u) { return; }
    }
    ctx->pc = 0x1BB544u;
label_1bb544:
    // 0x1bb544: 0xc06ed5a  jal         func_1BB568
    ctx->pc = 0x1BB544u;
    SET_GPR_U32(ctx, 31, 0x1BB54Cu);
    ctx->pc = 0x1BB548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB544u;
            // 0x1bb548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB568u;
    if (runtime->hasFunction(0x1BB568u)) {
        auto targetFn = runtime->lookupFunction(0x1BB568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB54Cu; }
        if (ctx->pc != 0x1BB54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB568_0x1bb568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB54Cu; }
        if (ctx->pc != 0x1BB54Cu) { return; }
    }
    ctx->pc = 0x1BB54Cu;
label_1bb54c:
    // 0x1bb54c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB54Cu;
    SET_GPR_U32(ctx, 31, 0x1BB554u);
    ctx->pc = 0x1BB550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB54Cu;
            // 0x1bb550: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB554u; }
        if (ctx->pc != 0x1BB554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB554u; }
        if (ctx->pc != 0x1BB554u) { return; }
    }
    ctx->pc = 0x1BB554u;
label_1bb554:
    // 0x1bb554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb560: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB560u;
            // 0x1bb564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB568u;
    ctx->pc = 0x1bb568u;
}
