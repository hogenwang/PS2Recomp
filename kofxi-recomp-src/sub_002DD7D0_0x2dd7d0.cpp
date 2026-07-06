#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DD7D0
// Address: 0x2dd7d0 - 0x2dd960
void sub_002DD7D0_0x2dd7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD7D0_0x2dd7d0");
#endif

    switch (ctx->pc) {
        case 0x2dd800u: goto label_2dd800;
        case 0x2dd80cu: goto label_2dd80c;
        case 0x2dd828u: goto label_2dd828;
        case 0x2dd850u: goto label_2dd850;
        case 0x2dd880u: goto label_2dd880;
        case 0x2dd8bcu: goto label_2dd8bc;
        case 0x2dd8e8u: goto label_2dd8e8;
        case 0x2dd8f0u: goto label_2dd8f0;
        default: break;
    }

    ctx->pc = 0x2dd7d0u;

    // 0x2dd7d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dd7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dd7d4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2dd7d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2dd7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2dd7dc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2dd7dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7e0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2dd7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2dd7e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2dd7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2dd7ec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2dd7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2dd7f0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2dd7f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2dd7f4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2dd7f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2dd7f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2dd7f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2dd7fc: 0x0  nop
    ctx->pc = 0x2dd7fcu;
    // NOP
label_2dd800:
    // 0x2dd800: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2dd800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2dd804: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x2dd804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2dd808: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2dd808u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2dd80c:
    // 0x2dd80c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2dd80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2dd810: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x2dd810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2dd814: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DD814u;
    {
        const bool branch_taken_0x2dd814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD814u;
            // 0x2dd818: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd814) {
            ctx->pc = 0x2DD800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd800;
        }
    }
    ctx->pc = 0x2DD81Cu;
    // 0x2dd81c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2dd81cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dd820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd824: 0x0  nop
    ctx->pc = 0x2dd824u;
    // NOP
label_2dd828:
    // 0x2dd828: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2dd828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2dd82c: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x2dd82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2dd830: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2dd830u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd834: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2dd834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2dd838: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x2dd838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2dd83c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DD83Cu;
    {
        const bool branch_taken_0x2dd83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD83Cu;
            // 0x2dd840: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd83c) {
            ctx->pc = 0x2DD828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd828;
        }
    }
    ctx->pc = 0x2DD844u;
    // 0x2dd844: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2dd844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dd848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd84c: 0x0  nop
    ctx->pc = 0x2dd84cu;
    // NOP
label_2dd850:
    // 0x2dd850: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2dd850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2dd854: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2dd854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2dd858: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2dd858u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd85c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dd85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dd860: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2dd860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2dd864: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DD864u;
    {
        const bool branch_taken_0x2dd864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD864u;
            // 0x2dd868: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd864) {
            ctx->pc = 0x2DD850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd850;
        }
    }
    ctx->pc = 0x2DD86Cu;
    // 0x2dd86c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dd870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dd870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd874: 0x2449dfa8  addiu       $t1, $v0, -0x2058
    ctx->pc = 0x2dd874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959016));
    // 0x2dd878: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2dd878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dd87c: 0x0  nop
    ctx->pc = 0x2dd87cu;
    // NOP
label_2dd880:
    // 0x2dd880: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x2dd880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2dd884: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dd884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dd888: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2dd888u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd88c: 0x29050010  slti        $a1, $t0, 0x10
    ctx->pc = 0x2dd88cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2dd890: 0x90e2fff0  lbu         $v0, -0x10($a3)
    ctx->pc = 0x2dd890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967280)));
    // 0x2dd894: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2dd894u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2dd898: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2dd898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2dd89c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2dd89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x2dd8a0: 0xa0e2fff0  sb          $v0, -0x10($a3)
    ctx->pc = 0x2dd8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967280), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd8a4: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2dd8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dd8a8: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2DD8A8u;
    {
        const bool branch_taken_0x2dd8a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD8A8u;
            // 0x2dd8ac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8a8) {
            ctx->pc = 0x2DD880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd880;
        }
    }
    ctx->pc = 0x2DD8B0u;
    // 0x2dd8b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8b4: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2DD8B4u;
    SET_GPR_U32(ctx, 31, 0x2DD8BCu);
    ctx->pc = 0x2DD8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD8B4u;
            // 0x2dd8b8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (runtime->hasFunction(0x2E0E80u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8BCu; }
        if (ctx->pc != 0x2DD8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E80_0x2e0e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8BCu; }
        if (ctx->pc != 0x2DD8BCu) { return; }
    }
    ctx->pc = 0x2DD8BCu;
label_2dd8bc:
    // 0x2dd8bc: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2dd8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2dd8c0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2dd8c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2dd8c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2dd8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2dd8c8: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2dd8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2dd8cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2dd8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2dd8d0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2dd8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8d4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2dd8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2dd8d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dd8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dd8dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dd8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8e0: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2dd8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x2dd8e4: 0x0  nop
    ctx->pc = 0x2dd8e4u;
    // NOP
label_2dd8e8:
    // 0x2dd8e8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DD8E8u;
    SET_GPR_U32(ctx, 31, 0x2DD8F0u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8F0u; }
        if (ctx->pc != 0x2DD8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8F0u; }
        if (ctx->pc != 0x2DD8F0u) { return; }
    }
    ctx->pc = 0x2DD8F0u;
label_2dd8f0:
    // 0x2dd8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd8f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd8f8: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2dd8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2dd8fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dd8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2dd900: 0x0  nop
    ctx->pc = 0x2dd900u;
    // NOP
    // 0x2dd904: 0x0  nop
    ctx->pc = 0x2dd904u;
    // NOP
    // 0x2dd908: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2dd908u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2dd90c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2dd90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2dd910: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2dd910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd914: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd918: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2dd918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dd91c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD91Cu;
    {
        const bool branch_taken_0x2dd91c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD91Cu;
            // 0x2dd920: 0x2a030030  slti        $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd91c) {
            ctx->pc = 0x2DD934u;
            goto label_2dd934;
        }
    }
    ctx->pc = 0x2DD924u;
    // 0x2dd924: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2dd924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2dd928: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd928u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd92c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2dd92cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dd930: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2dd930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_2dd934:
    // 0x2dd934: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2DD934u;
    {
        const bool branch_taken_0x2dd934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD934u;
            // 0x2dd938: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd934) {
            ctx->pc = 0x2DD8E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd8e8;
        }
    }
    ctx->pc = 0x2DD93Cu;
    // 0x2dd93c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2dd93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd940: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2dd940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dd944: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2dd944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd948: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2dd948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd94c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2dd94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dd950: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2dd950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dd954: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2dd954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dd958: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD958u;
            // 0x2dd95c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD960u;
    ctx->pc = 0x2dd960u;
}
