#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013B460
// Address: 0x13b460 - 0x13b5e0
void sub_0013B460_0x13b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B460_0x13b460");
#endif

    switch (ctx->pc) {
        case 0x13b484u: goto label_13b484;
        case 0x13b4d4u: goto label_13b4d4;
        case 0x13b4e4u: goto label_13b4e4;
        case 0x13b4f4u: goto label_13b4f4;
        case 0x13b4f8u: goto label_13b4f8;
        case 0x13b500u: goto label_13b500;
        case 0x13b564u: goto label_13b564;
        case 0x13b594u: goto label_13b594;
        case 0x13b5a0u: goto label_13b5a0;
        case 0x13b5acu: goto label_13b5ac;
        case 0x13b5b4u: goto label_13b5b4;
        default: break;
    }

    ctx->pc = 0x13b460u;

    // 0x13b460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13b464: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13b468: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13b46c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b470: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b47c: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x13B47Cu;
    SET_GPR_U32(ctx, 31, 0x13B484u);
    ctx->pc = 0x13B480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B47Cu;
            // 0x13b480: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A1C0u;
    if (runtime->hasFunction(0x18A1C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B484u; }
        if (ctx->pc != 0x13B484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A1C0_0x18a1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B484u; }
        if (ctx->pc != 0x13B484u) { return; }
    }
    ctx->pc = 0x13B484u;
label_13b484:
    // 0x13b484: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13b484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b488: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13b488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13b48c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B48Cu;
    {
        const bool branch_taken_0x13b48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B48Cu;
            // 0x13b490: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b48c) {
            ctx->pc = 0x13B4A0u;
            goto label_13b4a0;
        }
    }
    ctx->pc = 0x13B494u;
    // 0x13b494: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x13b494u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x13b498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B498u;
    {
        const bool branch_taken_0x13b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B498u;
            // 0x13b49c: 0x2631dd98  addiu       $s1, $s1, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b498) {
            ctx->pc = 0x13B4A8u;
            goto label_13b4a8;
        }
    }
    ctx->pc = 0x13B4A0u;
label_13b4a0:
    // 0x13b4a0: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x13b4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x13b4a4: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x13b4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
label_13b4a8:
    // 0x13b4a8: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B4A8u;
    {
        const bool branch_taken_0x13b4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b4a8) {
            ctx->pc = 0x13B4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4A8u;
            // 0x13b4ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B4B4u;
            goto label_13b4b4;
        }
    }
    ctx->pc = 0x13B4B0u;
    // 0x13b4b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13b4b4:
    // 0x13b4b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13b4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b4b8: 0x9223014c  lbu         $v1, 0x14C($s1)
    ctx->pc = 0x13b4b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x13b4bc: 0x5060003e  beql        $v1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x13B4BCu;
    {
        const bool branch_taken_0x13b4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b4bc) {
            ctx->pc = 0x13B4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4BCu;
            // 0x13b4c0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B5B8u;
            goto label_13b5b8;
        }
    }
    ctx->pc = 0x13B4C4u;
    // 0x13b4c4: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x13b4c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13b4c8: 0x2624014c  addiu       $a0, $s1, 0x14C
    ctx->pc = 0x13b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
    // 0x13b4cc: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B4CCu;
    SET_GPR_U32(ctx, 31, 0x13B4D4u);
    ctx->pc = 0x13B4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4CCu;
            // 0x13b4d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4D4u; }
        if (ctx->pc != 0x13B4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4D4u; }
        if (ctx->pc != 0x13B4D4u) { return; }
    }
    ctx->pc = 0x13B4D4u;
label_13b4d4:
    // 0x13b4d4: 0x26540001  addiu       $s4, $s2, 0x1
    ctx->pc = 0x13b4d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13b4d8: 0x2624016c  addiu       $a0, $s1, 0x16C
    ctx->pc = 0x13b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 364));
    // 0x13b4dc: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B4DCu;
    SET_GPR_U32(ctx, 31, 0x13B4E4u);
    ctx->pc = 0x13B4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4DCu;
            // 0x13b4e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4E4u; }
        if (ctx->pc != 0x13B4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4E4u; }
        if (ctx->pc != 0x13B4E4u) { return; }
    }
    ctx->pc = 0x13B4E4u;
label_13b4e4:
    // 0x13b4e4: 0x26530002  addiu       $s3, $s2, 0x2
    ctx->pc = 0x13b4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x13b4e8: 0x2624018c  addiu       $a0, $s1, 0x18C
    ctx->pc = 0x13b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x13b4ec: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B4ECu;
    SET_GPR_U32(ctx, 31, 0x13B4F4u);
    ctx->pc = 0x13B4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4ECu;
            // 0x13b4f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (runtime->hasFunction(0x311270u)) {
        auto targetFn = runtime->lookupFunction(0x311270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4F4u; }
        if (ctx->pc != 0x13B4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311270_0x311270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4F4u; }
        if (ctx->pc != 0x13B4F4u) { return; }
    }
    ctx->pc = 0x13B4F4u;
label_13b4f4:
    // 0x13b4f4: 0x321500ff  andi        $s5, $s0, 0xFF
    ctx->pc = 0x13b4f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13b4f8:
    // 0x13b4f8: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13B4F8u;
    SET_GPR_U32(ctx, 31, 0x13B500u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B500u; }
        if (ctx->pc != 0x13B500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B500u; }
        if (ctx->pc != 0x13B500u) { return; }
    }
    ctx->pc = 0x13B500u;
label_13b500:
    // 0x13b500: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x13b500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x13b504: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13b508: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13b508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b50c: 0x0  nop
    ctx->pc = 0x13b50cu;
    // NOP
    // 0x13b510: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13b510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13b514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b518: 0x0  nop
    ctx->pc = 0x13b518u;
    // NOP
    // 0x13b51c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b51cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b520: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x13B520u;
    {
        const bool branch_taken_0x13b520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b520) {
            ctx->pc = 0x13B524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B520u;
            // 0x13b524: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B538u;
            goto label_13b538;
        }
    }
    ctx->pc = 0x13B528u;
    // 0x13b528: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b52c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13b52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13b530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13B530u;
    {
        const bool branch_taken_0x13b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B530u;
            // 0x13b534: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b530) {
            ctx->pc = 0x13B550u;
            goto label_13b550;
        }
    }
    ctx->pc = 0x13B538u;
label_13b538:
    // 0x13b538: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13b538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13b53c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b53cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b540: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13b540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13b544: 0x0  nop
    ctx->pc = 0x13b544u;
    // NOP
    // 0x13b548: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b54c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13b54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_13b550:
    // 0x13b550: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x13b550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b554: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13b554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b55c: 0xc04c790  jal         func_131E40
    ctx->pc = 0x13B55Cu;
    SET_GPR_U32(ctx, 31, 0x13B564u);
    ctx->pc = 0x13B560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B55Cu;
            // 0x13b560: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (runtime->hasFunction(0x131E40u)) {
        auto targetFn = runtime->lookupFunction(0x131E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B564u; }
        if (ctx->pc != 0x13B564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E40_0x131e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B564u; }
        if (ctx->pc != 0x13B564u) { return; }
    }
    ctx->pc = 0x13B564u;
label_13b564:
    // 0x13b564: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b568: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13B568u;
    {
        const bool branch_taken_0x13b568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b568) {
            ctx->pc = 0x13B4F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b4f8;
        }
    }
    ctx->pc = 0x13B570u;
    // 0x13b570: 0xa2300150  sb          $s0, 0x150($s1)
    ctx->pc = 0x13b570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 336), (uint8_t)GPR_U32(ctx, 16));
    // 0x13b574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13b574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b578: 0xa230014d  sb          $s0, 0x14D($s1)
    ctx->pc = 0x13b578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 333), (uint8_t)GPR_U32(ctx, 16));
    // 0x13b57c: 0x2624014c  addiu       $a0, $s1, 0x14C
    ctx->pc = 0x13b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
    // 0x13b580: 0xa2300170  sb          $s0, 0x170($s1)
    ctx->pc = 0x13b580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 368), (uint8_t)GPR_U32(ctx, 16));
    // 0x13b584: 0xa230016d  sb          $s0, 0x16D($s1)
    ctx->pc = 0x13b584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 365), (uint8_t)GPR_U32(ctx, 16));
    // 0x13b588: 0xa2300190  sb          $s0, 0x190($s1)
    ctx->pc = 0x13b588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 400), (uint8_t)GPR_U32(ctx, 16));
    // 0x13b58c: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B58Cu;
    SET_GPR_U32(ctx, 31, 0x13B594u);
    ctx->pc = 0x13B590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B58Cu;
            // 0x13b590: 0xa230018d  sb          $s0, 0x18D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 397), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (runtime->hasFunction(0x321410u)) {
        auto targetFn = runtime->lookupFunction(0x321410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B594u; }
        if (ctx->pc != 0x13B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321410_0x321410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B594u; }
        if (ctx->pc != 0x13B594u) { return; }
    }
    ctx->pc = 0x13B594u;
label_13b594:
    // 0x13b594: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13b594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b598: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B598u;
    SET_GPR_U32(ctx, 31, 0x13B5A0u);
    ctx->pc = 0x13B59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B598u;
            // 0x13b59c: 0x2624016c  addiu       $a0, $s1, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 364));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (runtime->hasFunction(0x321410u)) {
        auto targetFn = runtime->lookupFunction(0x321410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B5A0u; }
        if (ctx->pc != 0x13B5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321410_0x321410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B5A0u; }
        if (ctx->pc != 0x13B5A0u) { return; }
    }
    ctx->pc = 0x13B5A0u;
label_13b5a0:
    // 0x13b5a0: 0x2624018c  addiu       $a0, $s1, 0x18C
    ctx->pc = 0x13b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x13b5a4: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B5A4u;
    SET_GPR_U32(ctx, 31, 0x13B5ACu);
    ctx->pc = 0x13B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B5A4u;
            // 0x13b5a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (runtime->hasFunction(0x321410u)) {
        auto targetFn = runtime->lookupFunction(0x321410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B5ACu; }
        if (ctx->pc != 0x13B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321410_0x321410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B5ACu; }
        if (ctx->pc != 0x13B5ACu) { return; }
    }
    ctx->pc = 0x13B5ACu;
label_13b5ac:
    // 0x13b5ac: 0xc052c90  jal         func_14B240
    ctx->pc = 0x13B5ACu;
    SET_GPR_U32(ctx, 31, 0x13B5B4u);
    ctx->pc = 0x14B240u;
    if (runtime->hasFunction(0x14B240u)) {
        auto targetFn = runtime->lookupFunction(0x14B240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B5B4u; }
        if (ctx->pc != 0x13B5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B240_0x14b240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B5B4u; }
        if (ctx->pc != 0x13B5B4u) { return; }
    }
    ctx->pc = 0x13B5B4u;
label_13b5b4:
    // 0x13b5b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13b5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13b5b8:
    // 0x13b5b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13b5b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b5bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13b5bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b5c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b5c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b5c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b5c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b5cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B5D0u;
            // 0x13b5d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B5D8u;
    // 0x13b5d8: 0x0  nop
    ctx->pc = 0x13b5d8u;
    // NOP
    // 0x13b5dc: 0x0  nop
    ctx->pc = 0x13b5dcu;
    // NOP
    ctx->pc = 0x13b5e0u;
}
