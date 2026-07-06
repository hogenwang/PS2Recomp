#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D110
// Address: 0x15d110 - 0x15d790
void sub_0015D110_0x15d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D110_0x15d110");
#endif

    switch (ctx->pc) {
        case 0x15d14cu: goto label_15d14c;
        case 0x15d1f4u: goto label_15d1f4;
        case 0x15d264u: goto label_15d264;
        case 0x15d2e4u: goto label_15d2e4;
        case 0x15d350u: goto label_15d350;
        case 0x15d3c0u: goto label_15d3c0;
        case 0x15d42cu: goto label_15d42c;
        case 0x15d4a8u: goto label_15d4a8;
        case 0x15d514u: goto label_15d514;
        case 0x15d550u: goto label_15d550;
        case 0x15d5d4u: goto label_15d5d4;
        case 0x15d5f4u: goto label_15d5f4;
        case 0x15d61cu: goto label_15d61c;
        case 0x15d62cu: goto label_15d62c;
        case 0x15d634u: goto label_15d634;
        case 0x15d668u: goto label_15d668;
        case 0x15d670u: goto label_15d670;
        case 0x15d67cu: goto label_15d67c;
        case 0x15d688u: goto label_15d688;
        case 0x15d690u: goto label_15d690;
        case 0x15d698u: goto label_15d698;
        case 0x15d6f8u: goto label_15d6f8;
        case 0x15d710u: goto label_15d710;
        case 0x15d71cu: goto label_15d71c;
        case 0x15d734u: goto label_15d734;
        case 0x15d740u: goto label_15d740;
        case 0x15d758u: goto label_15d758;
        case 0x15d764u: goto label_15d764;
        case 0x15d778u: goto label_15d778;
        default: break;
    }

    ctx->pc = 0x15d110u;

label_15d110:
    // 0x15d110: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15d114: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15d114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x15d118: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15d11c: 0x24a5d320  addiu       $a1, $a1, -0x2CE0
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    // 0x15d120: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15d124: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x15d128: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15d12c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d130: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15d130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15d134: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15d134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15d138: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x15d138u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x15d13c: 0x2484cf70  addiu       $a0, $a0, -0x3090
    ctx->pc = 0x15d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954864));
    // 0x15d140: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x15d140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x15d144: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x15D144u;
    SET_GPR_U32(ctx, 31, 0x15D14Cu);
    ctx->pc = 0x15D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D144u;
            // 0x15d148: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D14Cu; }
        if (ctx->pc != 0x15D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D14Cu; }
        if (ctx->pc != 0x15D14Cu) { return; }
    }
    ctx->pc = 0x15D14Cu;
label_15d14c:
    // 0x15d14c: 0x504000fa  beql        $v0, $zero, . + 4 + (0xFA << 2)
    ctx->pc = 0x15D14Cu;
    {
        const bool branch_taken_0x15d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d14c) {
            ctx->pc = 0x15D150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D14Cu;
            // 0x15d150: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D538u;
            goto label_15d538;
        }
    }
    ctx->pc = 0x15D154u;
    // 0x15d154: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x15d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x15d158: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x15d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x15d15c: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x15d15cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15d160: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x15d160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15d164: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x15d164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x15d168: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15D168u;
    {
        const bool branch_taken_0x15d168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D168u;
            // 0x15d16c: 0xa2040040  sb          $a0, 0x40($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d168) {
            ctx->pc = 0x15D174u;
            goto label_15d174;
        }
    }
    ctx->pc = 0x15D170u;
    // 0x15d170: 0x1cd  break       0, 7
    ctx->pc = 0x15d170u;
    runtime->handleBreak(rdram, ctx);
label_15d174:
    // 0x15d174: 0x2012  mflo        $a0
    ctx->pc = 0x15d174u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x15d178: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15d17c: 0xa2040049  sb          $a0, 0x49($s0)
    ctx->pc = 0x15d17cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x15d180: 0xa203004a  sb          $v1, 0x4A($s0)
    ctx->pc = 0x15d180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d184: 0x11263c  dsll32      $a0, $s1, 24
    ctx->pc = 0x15d184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
    // 0x15d188: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x15d188u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x15d18c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d190: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x15D190u;
    {
        const bool branch_taken_0x15d190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15D194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D190u;
            // 0x15d194: 0xa2110048  sb          $s1, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d190) {
            ctx->pc = 0x15D374u;
            goto label_15d374;
        }
    }
    ctx->pc = 0x15D198u;
    // 0x15d198: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D198u;
    {
        const bool branch_taken_0x15d198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d198) {
            ctx->pc = 0x15D19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D198u;
            // 0x15d19c: 0x82030040  lb          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D1A8u;
            goto label_15d1a8;
        }
    }
    ctx->pc = 0x15D1A0u;
    // 0x15d1a0: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x15D1A0u;
    {
        const bool branch_taken_0x15d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1a0) {
            ctx->pc = 0x15D534u;
            goto label_15d534;
        }
    }
    ctx->pc = 0x15D1A8u;
label_15d1a8:
    // 0x15d1a8: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x15d1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d1ac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x15d1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15d1b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D1B0u;
    {
        const bool branch_taken_0x15d1b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1B0u;
            // 0x15d1b4: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1b0) {
            ctx->pc = 0x15D1C0u;
            goto label_15d1c0;
        }
    }
    ctx->pc = 0x15D1B8u;
    // 0x15d1b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d1bc: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x15d1bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_15d1c0:
    // 0x15d1c0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x15d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x15d1c4: 0x3c034408  lui         $v1, 0x4408
    ctx->pc = 0x15d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17416 << 16));
    // 0x15d1c8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d1cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x15d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15d1d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15d1d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d1d4: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x15d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x15d1d8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15d1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15d1dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15d1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d1e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15d1e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d1e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15d1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d1ec: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D1ECu;
    SET_GPR_U32(ctx, 31, 0x15D1F4u);
    ctx->pc = 0x15D1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1ECu;
            // 0x15d1f0: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D1F4u; }
        if (ctx->pc != 0x15D1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D1F4u; }
        if (ctx->pc != 0x15D1F4u) { return; }
    }
    ctx->pc = 0x15D1F4u;
label_15d1f4:
    // 0x15d1f4: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x15d1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d1f8: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x15d1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d1fc: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15d1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d200: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x15d200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d204: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x15d204u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15d208: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x15d208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15d20c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x15d20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15d210: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x15d210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x15d214: 0x82030040  lb          $v1, 0x40($s0)
    ctx->pc = 0x15d214u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d218: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x15d218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d21c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15d21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d220: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D220u;
    {
        const bool branch_taken_0x15d220 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15D224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D220u;
            // 0x15d224: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d220) {
            ctx->pc = 0x15D230u;
            goto label_15d230;
        }
    }
    ctx->pc = 0x15D228u;
    // 0x15d228: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15d228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d22c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15d22cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15d230:
    // 0x15d230: 0x21023  negu        $v0, $v0
    ctx->pc = 0x15d230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x15d234: 0x3c064408  lui         $a2, 0x4408
    ctx->pc = 0x15d234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17416 << 16));
    // 0x15d238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d23c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15d23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15d240: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15d240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15d244: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x15d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x15d248: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x15d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d24c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15d250: 0x344500ff  ori         $a1, $v0, 0xFF
    ctx->pc = 0x15d250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x15d254: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15d254u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d258: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15d258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d25c: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D25Cu;
    SET_GPR_U32(ctx, 31, 0x15D264u);
    ctx->pc = 0x15D260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D25Cu;
            // 0x15d260: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D264u; }
        if (ctx->pc != 0x15D264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D264u; }
        if (ctx->pc != 0x15D264u) { return; }
    }
    ctx->pc = 0x15D264u;
label_15d264:
    // 0x15d264: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x15d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15d268: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x15d26c: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x15d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15d270: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x15d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d274: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x15d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d27c: 0x3c024408  lui         $v0, 0x4408
    ctx->pc = 0x15d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17416 << 16));
    // 0x15d280: 0xe6050010  swc1        $f5, 0x10($s0)
    ctx->pc = 0x15d280u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x15d284: 0xe6040014  swc1        $f4, 0x14($s0)
    ctx->pc = 0x15d284u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x15d288: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x15d288u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x15d28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d290: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x15d290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x15d294: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x15d294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x15d298: 0x82030040  lb          $v1, 0x40($s0)
    ctx->pc = 0x15d298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d29c: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x15d29cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d2a0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x15d2a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15d2a4: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x15d2a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d2a8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D2A8u;
    {
        const bool branch_taken_0x15d2a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15D2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2A8u;
            // 0x15d2ac: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2a8) {
            ctx->pc = 0x15D2B8u;
            goto label_15d2b8;
        }
    }
    ctx->pc = 0x15D2B0u;
    // 0x15d2b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d2b4: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x15d2b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_15d2b8:
    // 0x15d2b8: 0x2403fe80  addiu       $v1, $zero, -0x180
    ctx->pc = 0x15d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966912));
    // 0x15d2bc: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x15d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x15d2c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d2c4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d2c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d2cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15d2d0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15d2d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15d2d4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x15d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15d2d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15d2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d2dc: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D2DCu;
    SET_GPR_U32(ctx, 31, 0x15D2E4u);
    ctx->pc = 0x15D2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2DCu;
            // 0x15d2e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2E4u; }
        if (ctx->pc != 0x15D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2E4u; }
        if (ctx->pc != 0x15D2E4u) { return; }
    }
    ctx->pc = 0x15D2E4u;
label_15d2e4:
    // 0x15d2e4: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x15d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d2e8: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x15d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d2ec: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x15d2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d2f0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x15d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d2f4: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x15d2f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x15d2f8: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x15d2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x15d2fc: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x15d2fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x15d300: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x15d300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x15d304: 0x82030040  lb          $v1, 0x40($s0)
    ctx->pc = 0x15d304u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d308: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x15d308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d30c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x15d30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15d310: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D310u;
    {
        const bool branch_taken_0x15d310 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15D314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D310u;
            // 0x15d314: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d310) {
            ctx->pc = 0x15D320u;
            goto label_15d320;
        }
    }
    ctx->pc = 0x15D318u;
    // 0x15d318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d31c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15d31cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15d320:
    // 0x15d320: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x15d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x15d324: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15d328: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x15d328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d32c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d330: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x15d330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x15d334: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15d334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15d338: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x15d338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d33c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15d340: 0x344500ff  ori         $a1, $v0, 0xFF
    ctx->pc = 0x15d340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x15d344: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15d344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d348: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D348u;
    SET_GPR_U32(ctx, 31, 0x15D350u);
    ctx->pc = 0x15D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D348u;
            // 0x15d34c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D350u; }
        if (ctx->pc != 0x15D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D350u; }
        if (ctx->pc != 0x15D350u) { return; }
    }
    ctx->pc = 0x15D350u;
label_15d350:
    // 0x15d350: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x15d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d354: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x15d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d358: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x15d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d35c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x15d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d360: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x15d360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x15d364: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x15d364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15d368: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x15d368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x15d36c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x15D36Cu;
    {
        const bool branch_taken_0x15d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D36Cu;
            // 0x15d370: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d36c) {
            ctx->pc = 0x15D534u;
            goto label_15d534;
        }
    }
    ctx->pc = 0x15D374u;
label_15d374:
    // 0x15d374: 0x82030040  lb          $v1, 0x40($s0)
    ctx->pc = 0x15d374u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d378: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x15d378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d37c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15d37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d380: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D380u;
    {
        const bool branch_taken_0x15d380 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D380u;
            // 0x15d384: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d380) {
            ctx->pc = 0x15D390u;
            goto label_15d390;
        }
    }
    ctx->pc = 0x15D388u;
    // 0x15d388: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d38c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15d390:
    // 0x15d390: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x15d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x15d394: 0x3c034408  lui         $v1, 0x4408
    ctx->pc = 0x15d394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17416 << 16));
    // 0x15d398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d39c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15d3a0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15d3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15d3a4: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x15d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x15d3a8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d3ac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15d3b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d3b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15d3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d3b8: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D3B8u;
    SET_GPR_U32(ctx, 31, 0x15D3C0u);
    ctx->pc = 0x15D3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3B8u;
            // 0x15d3bc: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3C0u; }
        if (ctx->pc != 0x15D3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3C0u; }
        if (ctx->pc != 0x15D3C0u) { return; }
    }
    ctx->pc = 0x15D3C0u;
label_15d3c0:
    // 0x15d3c0: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x15d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d3c4: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x15d3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d3c8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x15d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d3cc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x15d3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d3d0: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x15d3d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15d3d4: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x15d3d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15d3d8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x15d3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15d3dc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x15d3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x15d3e0: 0x82030040  lb          $v1, 0x40($s0)
    ctx->pc = 0x15d3e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d3e4: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x15d3e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d3e8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15d3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d3ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D3ECu;
    {
        const bool branch_taken_0x15d3ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15D3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3ECu;
            // 0x15d3f0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3ec) {
            ctx->pc = 0x15D3FCu;
            goto label_15d3fc;
        }
    }
    ctx->pc = 0x15D3F4u;
    // 0x15d3f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d3f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15d3f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15d3fc:
    // 0x15d3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d400: 0x3c064408  lui         $a2, 0x4408
    ctx->pc = 0x15d400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17416 << 16));
    // 0x15d404: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15d404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15d408: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x15d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x15d40c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x15d40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d410: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15d414: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15d414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15d418: 0x344500ff  ori         $a1, $v0, 0xFF
    ctx->pc = 0x15d418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x15d41c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15d41cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d420: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15d420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d424: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D424u;
    SET_GPR_U32(ctx, 31, 0x15D42Cu);
    ctx->pc = 0x15D428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D424u;
            // 0x15d428: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D42Cu; }
        if (ctx->pc != 0x15D42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D42Cu; }
        if (ctx->pc != 0x15D42Cu) { return; }
    }
    ctx->pc = 0x15D42Cu;
label_15d42c:
    // 0x15d42c: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x15d42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15d430: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x15d430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x15d434: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x15d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15d438: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x15d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d43c: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x15d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d444: 0x3c024408  lui         $v0, 0x4408
    ctx->pc = 0x15d444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17416 << 16));
    // 0x15d448: 0xe6050010  swc1        $f5, 0x10($s0)
    ctx->pc = 0x15d448u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x15d44c: 0xe6040014  swc1        $f4, 0x14($s0)
    ctx->pc = 0x15d44cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x15d450: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x15d450u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x15d454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d458: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x15d458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x15d45c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x15d45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x15d460: 0x82030040  lb          $v1, 0x40($s0)
    ctx->pc = 0x15d460u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d464: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x15d464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d468: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15d468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d46c: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x15d46cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d470: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D470u;
    {
        const bool branch_taken_0x15d470 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15D474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D470u;
            // 0x15d474: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d470) {
            ctx->pc = 0x15D480u;
            goto label_15d480;
        }
    }
    ctx->pc = 0x15D478u;
    // 0x15d478: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d47c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15d47cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15d480:
    // 0x15d480: 0x24430180  addiu       $v1, $v0, 0x180
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x15d484: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15d484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15d488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d48c: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x15d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x15d490: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15d490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15d494: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15d494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d498: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x15d498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15d49c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15d49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d4a0: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D4A0u;
    SET_GPR_U32(ctx, 31, 0x15D4A8u);
    ctx->pc = 0x15D4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4A0u;
            // 0x15d4a4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4A8u; }
        if (ctx->pc != 0x15D4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4A8u; }
        if (ctx->pc != 0x15D4A8u) { return; }
    }
    ctx->pc = 0x15D4A8u;
label_15d4a8:
    // 0x15d4a8: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x15d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d4ac: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x15d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d4b0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d4b4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x15d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d4b8: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x15d4b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x15d4bc: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x15d4bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x15d4c0: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x15d4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x15d4c4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x15d4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x15d4c8: 0x82030040  lb          $v1, 0x40($s0)
    ctx->pc = 0x15d4c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d4cc: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x15d4ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d4d0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15d4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d4d4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D4D4u;
    {
        const bool branch_taken_0x15d4d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4D4u;
            // 0x15d4d8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4d4) {
            ctx->pc = 0x15D4E4u;
            goto label_15d4e4;
        }
    }
    ctx->pc = 0x15D4DCu;
    // 0x15d4dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d4e0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15d4e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15d4e4:
    // 0x15d4e4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15d4e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15d4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d4f0: 0x0  nop
    ctx->pc = 0x15d4f0u;
    // NOP
    // 0x15d4f4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15d4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15d4f8: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x15d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x15d4fc: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x15d4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d500: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15d500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15d504: 0x344500ff  ori         $a1, $v0, 0xFF
    ctx->pc = 0x15d504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x15d508: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15d508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d50c: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D50Cu;
    SET_GPR_U32(ctx, 31, 0x15D514u);
    ctx->pc = 0x15D510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D50Cu;
            // 0x15d510: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D514u; }
        if (ctx->pc != 0x15D514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D514u; }
        if (ctx->pc != 0x15D514u) { return; }
    }
    ctx->pc = 0x15D514u;
label_15d514:
    // 0x15d514: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x15d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d518: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x15d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d51c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x15d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d520: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x15d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d524: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x15d524u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x15d528: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x15d528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15d52c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x15d52cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x15d530: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x15d530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_15d534:
    // 0x15d534: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15d534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d538:
    // 0x15d538: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15d53c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15d53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d540: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15d540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d544: 0x3e00008  jr          $ra
    ctx->pc = 0x15D544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D544u;
            // 0x15d548: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D54Cu;
    // 0x15d54c: 0x0  nop
    ctx->pc = 0x15d54cu;
    // NOP
label_15d550:
    // 0x15d550: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15d554: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15d554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15d558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d55c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d560: 0xc4410d50  lwc1        $f1, 0xD50($v0)
    ctx->pc = 0x15d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d564: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15d564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15d568: 0xc4420d54  lwc1        $f2, 0xD54($v0)
    ctx->pc = 0x15d568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d56c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x15d56cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15d570: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15d574: 0xc4400d58  lwc1        $f0, 0xD58($v0)
    ctx->pc = 0x15d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d578: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x15d578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15d57c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15d580: 0xc4410d5c  lwc1        $f1, 0xD5C($v0)
    ctx->pc = 0x15d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d584: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x15d584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15d588: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15d588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15d58c: 0xc4400d60  lwc1        $f0, 0xD60($v0)
    ctx->pc = 0x15d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d590: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x15d590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15d594: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15d598: 0xc4410d64  lwc1        $f1, 0xD64($v0)
    ctx->pc = 0x15d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d59c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15d59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15d5a0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15d5a4: 0xc4400d68  lwc1        $f0, 0xD68($v0)
    ctx->pc = 0x15d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d5a8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x15d5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15d5ac: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15d5b0: 0x80424074  lb          $v0, 0x4074($v0)
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16500)));
    // 0x15d5b4: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x15D5B4u;
    {
        const bool branch_taken_0x15d5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5B4u;
            // 0x15d5b8: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5b4) {
            ctx->pc = 0x15D76Cu;
            goto label_15d76c;
        }
    }
    ctx->pc = 0x15D5BCu;
    // 0x15d5bc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x15d5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15d5c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15d5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d5c4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x15d5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15d5c8: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x15d5c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d5cc: 0xc0572f8  jal         func_15CBE0
    ctx->pc = 0x15D5CCu;
    SET_GPR_U32(ctx, 31, 0x15D5D4u);
    ctx->pc = 0x15D5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5CCu;
            // 0x15d5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBE0u;
    if (runtime->hasFunction(0x15CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5D4u; }
        if (ctx->pc != 0x15D5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CBE0_0x15cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5D4u; }
        if (ctx->pc != 0x15D5D4u) { return; }
    }
    ctx->pc = 0x15D5D4u;
label_15d5d4:
    // 0x15d5d4: 0x82020040  lb          $v0, 0x40($s0)
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x15d5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15d5e4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x15d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x15d5e8: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x15d5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x15d5ec: 0xc0572f8  jal         func_15CBE0
    ctx->pc = 0x15D5ECu;
    SET_GPR_U32(ctx, 31, 0x15D5F4u);
    ctx->pc = 0x15D5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5ECu;
            // 0x15d5f0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBE0u;
    if (runtime->hasFunction(0x15CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5F4u; }
        if (ctx->pc != 0x15D5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CBE0_0x15cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5F4u; }
        if (ctx->pc != 0x15D5F4u) { return; }
    }
    ctx->pc = 0x15D5F4u;
label_15d5f4:
    // 0x15d5f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d5f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D5F8u;
    {
        const bool branch_taken_0x15d5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d5f8) {
            ctx->pc = 0x15D5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5F8u;
            // 0x15d5fc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D610u;
            goto label_15d610;
        }
    }
    ctx->pc = 0x15D600u;
    // 0x15d600: 0x82020040  lb          $v0, 0x40($s0)
    ctx->pc = 0x15d600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d604: 0x21023  negu        $v0, $v0
    ctx->pc = 0x15d604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x15d608: 0xa2020040  sb          $v0, 0x40($s0)
    ctx->pc = 0x15d608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d60c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15d610:
    // 0x15d610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d614: 0xc057378  jal         func_15CDE0
    ctx->pc = 0x15D614u;
    SET_GPR_U32(ctx, 31, 0x15D61Cu);
    ctx->pc = 0x15D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D614u;
            // 0x15d618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CDE0u;
    if (runtime->hasFunction(0x15CDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15CDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D61Cu; }
        if (ctx->pc != 0x15D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CDE0_0x15cde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D61Cu; }
        if (ctx->pc != 0x15D61Cu) { return; }
    }
    ctx->pc = 0x15D61Cu;
label_15d61c:
    // 0x15d61c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15d620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d624: 0xc057378  jal         func_15CDE0
    ctx->pc = 0x15D624u;
    SET_GPR_U32(ctx, 31, 0x15D62Cu);
    ctx->pc = 0x15D628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D624u;
            // 0x15d628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CDE0u;
    if (runtime->hasFunction(0x15CDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15CDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D62Cu; }
        if (ctx->pc != 0x15D62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CDE0_0x15cde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D62Cu; }
        if (ctx->pc != 0x15D62Cu) { return; }
    }
    ctx->pc = 0x15D62Cu;
label_15d62c:
    // 0x15d62c: 0xc067cb4  jal         func_19F2D0
    ctx->pc = 0x15D62Cu;
    SET_GPR_U32(ctx, 31, 0x15D634u);
    ctx->pc = 0x19F2D0u;
    if (runtime->hasFunction(0x19F2D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D634u; }
        if (ctx->pc != 0x15D634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2D0_0x19f2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D634u; }
        if (ctx->pc != 0x15D634u) { return; }
    }
    ctx->pc = 0x15D634u;
label_15d634:
    // 0x15d634: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15d634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15d638: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15d63c: 0x8463db32  lh          $v1, -0x24CE($v1)
    ctx->pc = 0x15d63cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957874)));
    // 0x15d640: 0x8442db30  lh          $v0, -0x24D0($v0)
    ctx->pc = 0x15d640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x15d644: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d648: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D648u;
    {
        const bool branch_taken_0x15d648 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15D64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D648u;
            // 0x15d64c: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d648) {
            ctx->pc = 0x15D658u;
            goto label_15d658;
        }
    }
    ctx->pc = 0x15D650u;
    // 0x15d650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d654: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_15d658:
    // 0x15d658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15d658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d65c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d660: 0xc067cbc  jal         func_19F2F0
    ctx->pc = 0x15D660u;
    SET_GPR_U32(ctx, 31, 0x15D668u);
    ctx->pc = 0x15D664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D660u;
            // 0x15d664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2F0u;
    if (runtime->hasFunction(0x19F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D668u; }
        if (ctx->pc != 0x15D668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2F0_0x19f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D668u; }
        if (ctx->pc != 0x15D668u) { return; }
    }
    ctx->pc = 0x15D668u;
label_15d668:
    // 0x15d668: 0xc067d0c  jal         func_19F430
    ctx->pc = 0x15D668u;
    SET_GPR_U32(ctx, 31, 0x15D670u);
    ctx->pc = 0x15D66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D668u;
            // 0x15d66c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F430u;
    if (runtime->hasFunction(0x19F430u)) {
        auto targetFn = runtime->lookupFunction(0x19F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D670u; }
        if (ctx->pc != 0x15D670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F430_0x19f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D670u; }
        if (ctx->pc != 0x15D670u) { return; }
    }
    ctx->pc = 0x15D670u;
label_15d670:
    // 0x15d670: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15d674: 0xc067d00  jal         func_19F400
    ctx->pc = 0x15D674u;
    SET_GPR_U32(ctx, 31, 0x15D67Cu);
    ctx->pc = 0x15D678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D674u;
            // 0x15d678: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F400u;
    if (runtime->hasFunction(0x19F400u)) {
        auto targetFn = runtime->lookupFunction(0x19F400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D67Cu; }
        if (ctx->pc != 0x15D67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F400_0x19f400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D67Cu; }
        if (ctx->pc != 0x15D67Cu) { return; }
    }
    ctx->pc = 0x15D67Cu;
label_15d67c:
    // 0x15d67c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15d680: 0xc067d00  jal         func_19F400
    ctx->pc = 0x15D680u;
    SET_GPR_U32(ctx, 31, 0x15D688u);
    ctx->pc = 0x15D684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D680u;
            // 0x15d684: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F400u;
    if (runtime->hasFunction(0x19F400u)) {
        auto targetFn = runtime->lookupFunction(0x19F400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D688u; }
        if (ctx->pc != 0x15D688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F400_0x19f400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D688u; }
        if (ctx->pc != 0x15D688u) { return; }
    }
    ctx->pc = 0x15D688u;
label_15d688:
    // 0x15d688: 0xc067d08  jal         func_19F420
    ctx->pc = 0x15D688u;
    SET_GPR_U32(ctx, 31, 0x15D690u);
    ctx->pc = 0x19F420u;
    if (runtime->hasFunction(0x19F420u)) {
        auto targetFn = runtime->lookupFunction(0x19F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D690u; }
        if (ctx->pc != 0x15D690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F420_0x19f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D690u; }
        if (ctx->pc != 0x15D690u) { return; }
    }
    ctx->pc = 0x15D690u;
label_15d690:
    // 0x15d690: 0xc067cb8  jal         func_19F2E0
    ctx->pc = 0x15D690u;
    SET_GPR_U32(ctx, 31, 0x15D698u);
    ctx->pc = 0x19F2E0u;
    if (runtime->hasFunction(0x19F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D698u; }
        if (ctx->pc != 0x15D698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2E0_0x19f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D698u; }
        if (ctx->pc != 0x15D698u) { return; }
    }
    ctx->pc = 0x15D698u;
label_15d698:
    // 0x15d698: 0x82040049  lb          $a0, 0x49($s0)
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d69c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x15d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15d6a0: 0x4810035  bgez        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x15D6A0u;
    {
        const bool branch_taken_0x15d6a0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15D6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6A0u;
            // 0x15d6a4: 0xa2030049  sb          $v1, 0x49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6a0) {
            ctx->pc = 0x15D778u;
            goto label_15d778;
        }
    }
    ctx->pc = 0x15D6A8u;
    // 0x15d6a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d6ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d6b0: 0xa2040049  sb          $a0, 0x49($s0)
    ctx->pc = 0x15d6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x15d6b4: 0x8204004a  lb          $a0, 0x4A($s0)
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x15d6b8: 0x50830023  beql        $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x15D6B8u;
    {
        const bool branch_taken_0x15d6b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d6b8) {
            ctx->pc = 0x15D6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6B8u;
            // 0x15d6bc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D748u;
            goto label_15d748;
        }
    }
    ctx->pc = 0x15D6C0u;
    // 0x15d6c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d6c4: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x15D6C4u;
    {
        const bool branch_taken_0x15d6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d6c4) {
            ctx->pc = 0x15D6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6C4u;
            // 0x15d6c8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D724u;
            goto label_15d724;
        }
    }
    ctx->pc = 0x15D6CCu;
    // 0x15d6cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d6d0: 0x5083000b  beql        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15D6D0u;
    {
        const bool branch_taken_0x15d6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d6d0) {
            ctx->pc = 0x15D6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6D0u;
            // 0x15d6d4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D700u;
            goto label_15d700;
        }
    }
    ctx->pc = 0x15D6D8u;
    // 0x15d6d8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D6D8u;
    {
        const bool branch_taken_0x15d6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d6d8) {
            ctx->pc = 0x15D6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6D8u;
            // 0x15d6dc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D6E8u;
            goto label_15d6e8;
        }
    }
    ctx->pc = 0x15D6E0u;
    // 0x15d6e0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15D6E0u;
    {
        const bool branch_taken_0x15d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6E0u;
            // 0x15d6e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6e0) {
            ctx->pc = 0x15D77Cu;
            goto label_15d77c;
        }
    }
    ctx->pc = 0x15D6E8u;
label_15d6e8:
    // 0x15d6e8: 0xa202004a  sb          $v0, 0x4A($s0)
    ctx->pc = 0x15d6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d6ec: 0x82040048  lb          $a0, 0x48($s0)
    ctx->pc = 0x15d6ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15d6f0: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D6F0u;
    SET_GPR_U32(ctx, 31, 0x15D6F8u);
    ctx->pc = 0x15D6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6F0u;
            // 0x15d6f4: 0xc7ac002c  lwc1        $f12, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    goto label_15d110;
    ctx->pc = 0x15D6F8u;
label_15d6f8:
    // 0x15d6f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x15D6F8u;
    {
        const bool branch_taken_0x15d6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d6f8) {
            ctx->pc = 0x15D778u;
            goto label_15d778;
        }
    }
    ctx->pc = 0x15D700u;
label_15d700:
    // 0x15d700: 0xa202004a  sb          $v0, 0x4A($s0)
    ctx->pc = 0x15d700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d704: 0x82040048  lb          $a0, 0x48($s0)
    ctx->pc = 0x15d704u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15d708: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D708u;
    SET_GPR_U32(ctx, 31, 0x15D710u);
    ctx->pc = 0x15D70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D708u;
            // 0x15d70c: 0xc7ac0028  lwc1        $f12, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    goto label_15d110;
    ctx->pc = 0x15D710u;
label_15d710:
    // 0x15d710: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x15d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d714: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D714u;
    SET_GPR_U32(ctx, 31, 0x15D71Cu);
    ctx->pc = 0x15D718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D714u;
            // 0x15d718: 0x82040048  lb          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    goto label_15d110;
    ctx->pc = 0x15D71Cu;
label_15d71c:
    // 0x15d71c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15D71Cu;
    {
        const bool branch_taken_0x15d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d71c) {
            ctx->pc = 0x15D778u;
            goto label_15d778;
        }
    }
    ctx->pc = 0x15D724u;
label_15d724:
    // 0x15d724: 0xa202004a  sb          $v0, 0x4A($s0)
    ctx->pc = 0x15d724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d728: 0x82040048  lb          $a0, 0x48($s0)
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15d72c: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D72Cu;
    SET_GPR_U32(ctx, 31, 0x15D734u);
    ctx->pc = 0x15D730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D72Cu;
            // 0x15d730: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    goto label_15d110;
    ctx->pc = 0x15D734u;
label_15d734:
    // 0x15d734: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x15d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d738: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D738u;
    SET_GPR_U32(ctx, 31, 0x15D740u);
    ctx->pc = 0x15D73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D738u;
            // 0x15d73c: 0x82040048  lb          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    goto label_15d110;
    ctx->pc = 0x15D740u;
label_15d740:
    // 0x15d740: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15D740u;
    {
        const bool branch_taken_0x15d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d740) {
            ctx->pc = 0x15D778u;
            goto label_15d778;
        }
    }
    ctx->pc = 0x15D748u;
label_15d748:
    // 0x15d748: 0xa202004a  sb          $v0, 0x4A($s0)
    ctx->pc = 0x15d748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d74c: 0x82040048  lb          $a0, 0x48($s0)
    ctx->pc = 0x15d74cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15d750: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D750u;
    SET_GPR_U32(ctx, 31, 0x15D758u);
    ctx->pc = 0x15D754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D750u;
            // 0x15d754: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    goto label_15d110;
    ctx->pc = 0x15D758u;
label_15d758:
    // 0x15d758: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x15d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d75c: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D75Cu;
    SET_GPR_U32(ctx, 31, 0x15D764u);
    ctx->pc = 0x15D760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D75Cu;
            // 0x15d760: 0x82040048  lb          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    goto label_15d110;
    ctx->pc = 0x15D764u;
label_15d764:
    // 0x15d764: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15D764u;
    {
        const bool branch_taken_0x15d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d764) {
            ctx->pc = 0x15D778u;
            goto label_15d778;
        }
    }
    ctx->pc = 0x15D76Cu;
label_15d76c:
    // 0x15d76c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15d770: 0xc055728  jal         func_155CA0
    ctx->pc = 0x15D770u;
    SET_GPR_U32(ctx, 31, 0x15D778u);
    ctx->pc = 0x15D774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D770u;
            // 0x15d774: 0xa0404074  sb          $zero, 0x4074($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16500), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D778u; }
        if (ctx->pc != 0x15D778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D778u; }
        if (ctx->pc != 0x15D778u) { return; }
    }
    ctx->pc = 0x15D778u;
label_15d778:
    // 0x15d778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15d77c:
    // 0x15d77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d780: 0x3e00008  jr          $ra
    ctx->pc = 0x15D780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D780u;
            // 0x15d784: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D788u;
    // 0x15d788: 0x0  nop
    ctx->pc = 0x15d788u;
    // NOP
    // 0x15d78c: 0x0  nop
    ctx->pc = 0x15d78cu;
    // NOP
    ctx->pc = 0x15d790u;
}
