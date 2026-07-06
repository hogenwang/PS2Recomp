#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiThreadStartWithContextInit
// Address: 0x10dda0 - 0x10df40
void kofxiThreadStartWithContextInit_0x10dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadStartWithContextInit_0x10dda0");
#endif

    switch (ctx->pc) {
        case 0x10ddc0u: goto label_10ddc0;
        case 0x10ddd0u: goto label_10ddd0;
        case 0x10dde0u: goto label_10dde0;
        case 0x10ddf4u: goto label_10ddf4;
        case 0x10de10u: goto label_10de10;
        case 0x10def4u: goto label_10def4;
        case 0x10df00u: goto label_10df00;
        case 0x10df18u: goto label_10df18;
        case 0x10df28u: goto label_10df28;
        default: break;
    }

    ctx->pc = 0x10dda0u;

    // 0x10dda0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10dda4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10dda8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x10dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x10ddac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10ddacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddb0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10ddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10ddb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ddb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddb8: 0xc0435cc  jal         func_10D730
    ctx->pc = 0x10DDB8u;
    SET_GPR_U32(ctx, 31, 0x10DDC0u);
    ctx->pc = 0x10DDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDB8u;
            // 0x10ddbc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D730u;
    if (runtime->hasFunction(0x10D730u)) {
        auto targetFn = runtime->lookupFunction(0x10D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDC0u; }
        if (ctx->pc != 0x10DDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadCanStartCurrentState_0x10d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDC0u; }
        if (ctx->pc != 0x10DDC0u) { return; }
    }
    ctx->pc = 0x10DDC0u;
label_10ddc0:
    // 0x10ddc0: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x10DDC0u;
    {
        const bool branch_taken_0x10ddc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDC0u;
            // 0x10ddc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddc0) {
            ctx->pc = 0x10DF00u;
            goto label_10df00;
        }
    }
    ctx->pc = 0x10DDC8u;
    // 0x10ddc8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10DDC8u;
    SET_GPR_U32(ctx, 31, 0x10DDD0u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDD0u; }
        if (ctx->pc != 0x10DDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDD0u; }
        if (ctx->pc != 0x10DDD0u) { return; }
    }
    ctx->pc = 0x10DDD0u;
label_10ddd0:
    // 0x10ddd0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10DDD0u;
    {
        const bool branch_taken_0x10ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDD0u;
            // 0x10ddd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddd0) {
            ctx->pc = 0x10DE10u;
            goto label_10de10;
        }
    }
    ctx->pc = 0x10DDD8u;
    // 0x10ddd8: 0xc0432d8  jal         func_10CB60
    ctx->pc = 0x10DDD8u;
    SET_GPR_U32(ctx, 31, 0x10DDE0u);
    ctx->pc = 0x10DDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDD8u;
            // 0x10dddc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (runtime->hasFunction(0x10CB60u)) {
        auto targetFn = runtime->lookupFunction(0x10CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDE0u; }
        if (ctx->pc != 0x10DDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallReferThreadStatusWrapper_0x10cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDE0u; }
        if (ctx->pc != 0x10DDE0u) { return; }
    }
    ctx->pc = 0x10DDE0u;
label_10dde0:
    // 0x10dde0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dde4: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DDE4u;
    {
        const bool branch_taken_0x10dde4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x10DDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDE4u;
            // 0x10dde8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dde4) {
            ctx->pc = 0x10DDFCu;
            goto label_10ddfc;
        }
    }
    ctx->pc = 0x10DDECu;
    // 0x10ddec: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10DDECu;
    SET_GPR_U32(ctx, 31, 0x10DDF4u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDF4u; }
        if (ctx->pc != 0x10DDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDF4u; }
        if (ctx->pc != 0x10DDF4u) { return; }
    }
    ctx->pc = 0x10DDF4u;
label_10ddf4:
    // 0x10ddf4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x10DDF4u;
    {
        const bool branch_taken_0x10ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDF4u;
            // 0x10ddf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddf4) {
            ctx->pc = 0x10DF00u;
            goto label_10df00;
        }
    }
    ctx->pc = 0x10DDFCu;
label_10ddfc:
    // 0x10ddfc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10de00: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DE00u;
    {
        const bool branch_taken_0x10de00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE00u;
            // 0x10de04: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de00) {
            ctx->pc = 0x10DE18u;
            goto label_10de18;
        }
    }
    ctx->pc = 0x10DE08u;
    // 0x10de08: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10DE08u;
    SET_GPR_U32(ctx, 31, 0x10DE10u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE10u; }
        if (ctx->pc != 0x10DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE10u; }
        if (ctx->pc != 0x10DE10u) { return; }
    }
    ctx->pc = 0x10DE10u;
label_10de10:
    // 0x10de10: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x10DE10u;
    {
        const bool branch_taken_0x10de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE10u;
            // 0x10de14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de10) {
            ctx->pc = 0x10DF00u;
            goto label_10df00;
        }
    }
    ctx->pc = 0x10DE18u;
label_10de18:
    // 0x10de18: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x10de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x10de1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10de20: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x10de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
    // 0x10de24: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x10de24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x10de28: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x10de28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x10de2c: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x10de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x10de30: 0x7c400030  sq          $zero, 0x30($v0)
    ctx->pc = 0x10de30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 0));
    // 0x10de34: 0x7c400040  sq          $zero, 0x40($v0)
    ctx->pc = 0x10de34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 0));
    // 0x10de38: 0x7c400050  sq          $zero, 0x50($v0)
    ctx->pc = 0x10de38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 0));
    // 0x10de3c: 0x7c400060  sq          $zero, 0x60($v0)
    ctx->pc = 0x10de3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 0));
    // 0x10de40: 0x7c400070  sq          $zero, 0x70($v0)
    ctx->pc = 0x10de40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 0));
    // 0x10de44: 0x7c400080  sq          $zero, 0x80($v0)
    ctx->pc = 0x10de44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 0));
    // 0x10de48: 0x7c400090  sq          $zero, 0x90($v0)
    ctx->pc = 0x10de48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 0));
    // 0x10de4c: 0x7c4000a0  sq          $zero, 0xA0($v0)
    ctx->pc = 0x10de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 160), GPR_VEC(ctx, 0));
    // 0x10de50: 0x7c4000b0  sq          $zero, 0xB0($v0)
    ctx->pc = 0x10de50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), GPR_VEC(ctx, 0));
    // 0x10de54: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x10de54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x10de58: 0x7c4000d0  sq          $zero, 0xD0($v0)
    ctx->pc = 0x10de58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 208), GPR_VEC(ctx, 0));
    // 0x10de5c: 0x7c4000e0  sq          $zero, 0xE0($v0)
    ctx->pc = 0x10de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 224), GPR_VEC(ctx, 0));
    // 0x10de60: 0x7c4000f0  sq          $zero, 0xF0($v0)
    ctx->pc = 0x10de60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 240), GPR_VEC(ctx, 0));
    // 0x10de64: 0x7c400100  sq          $zero, 0x100($v0)
    ctx->pc = 0x10de64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 256), GPR_VEC(ctx, 0));
    // 0x10de68: 0x7c400110  sq          $zero, 0x110($v0)
    ctx->pc = 0x10de68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 272), GPR_VEC(ctx, 0));
    // 0x10de6c: 0x7c400120  sq          $zero, 0x120($v0)
    ctx->pc = 0x10de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 288), GPR_VEC(ctx, 0));
    // 0x10de70: 0x7c400130  sq          $zero, 0x130($v0)
    ctx->pc = 0x10de70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 304), GPR_VEC(ctx, 0));
    // 0x10de74: 0x7c400140  sq          $zero, 0x140($v0)
    ctx->pc = 0x10de74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 320), GPR_VEC(ctx, 0));
    // 0x10de78: 0x7c400150  sq          $zero, 0x150($v0)
    ctx->pc = 0x10de78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 336), GPR_VEC(ctx, 0));
    // 0x10de7c: 0x7c400160  sq          $zero, 0x160($v0)
    ctx->pc = 0x10de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 352), GPR_VEC(ctx, 0));
    // 0x10de80: 0x7c400170  sq          $zero, 0x170($v0)
    ctx->pc = 0x10de80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 368), GPR_VEC(ctx, 0));
    // 0x10de84: 0x7c400180  sq          $zero, 0x180($v0)
    ctx->pc = 0x10de84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 384), GPR_VEC(ctx, 0));
    // 0x10de88: 0x7c400190  sq          $zero, 0x190($v0)
    ctx->pc = 0x10de88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 400), GPR_VEC(ctx, 0));
    // 0x10de8c: 0x7c4001a0  sq          $zero, 0x1A0($v0)
    ctx->pc = 0x10de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 416), GPR_VEC(ctx, 0));
    // 0x10de90: 0x7c4001b0  sq          $zero, 0x1B0($v0)
    ctx->pc = 0x10de90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 432), GPR_VEC(ctx, 0));
    // 0x10de94: 0x7c400200  sq          $zero, 0x200($v0)
    ctx->pc = 0x10de94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 512), GPR_VEC(ctx, 0));
    // 0x10de98: 0x7c400210  sq          $zero, 0x210($v0)
    ctx->pc = 0x10de98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 528), GPR_VEC(ctx, 0));
    // 0x10de9c: 0x7c400220  sq          $zero, 0x220($v0)
    ctx->pc = 0x10de9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 544), GPR_VEC(ctx, 0));
    // 0x10dea0: 0x7c400230  sq          $zero, 0x230($v0)
    ctx->pc = 0x10dea0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 560), GPR_VEC(ctx, 0));
    // 0x10dea4: 0x7c400240  sq          $zero, 0x240($v0)
    ctx->pc = 0x10dea4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 576), GPR_VEC(ctx, 0));
    // 0x10dea8: 0x7c400250  sq          $zero, 0x250($v0)
    ctx->pc = 0x10dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 592), GPR_VEC(ctx, 0));
    // 0x10deac: 0x7c400260  sq          $zero, 0x260($v0)
    ctx->pc = 0x10deacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 608), GPR_VEC(ctx, 0));
    // 0x10deb0: 0x7c400270  sq          $zero, 0x270($v0)
    ctx->pc = 0x10deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 624), GPR_VEC(ctx, 0));
    // 0x10deb4: 0x124000  sll         $t0, $s2, 0
    ctx->pc = 0x10deb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 0));
    // 0x10deb8: 0xfc480040  sd          $t0, 0x40($v0)
    ctx->pc = 0x10deb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x10debc: 0x8c4801c0  lw          $t0, 0x1C0($v0)
    ctx->pc = 0x10debcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x10dec0: 0xfc4801c0  sd          $t0, 0x1C0($v0)
    ctx->pc = 0x10dec0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 448), GPR_U64(ctx, 8));
    // 0x10dec4: 0xfc4001c8  sd          $zero, 0x1C8($v0)
    ctx->pc = 0x10dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 456), GPR_U64(ctx, 0));
    // 0x10dec8: 0x8c4801d0  lw          $t0, 0x1D0($v0)
    ctx->pc = 0x10dec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x10decc: 0xfc4801d0  sd          $t0, 0x1D0($v0)
    ctx->pc = 0x10deccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 464), GPR_U64(ctx, 8));
    // 0x10ded0: 0xfc4001d8  sd          $zero, 0x1D8($v0)
    ctx->pc = 0x10ded0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 472), GPR_U64(ctx, 0));
    // 0x10ded4: 0x8c4801e0  lw          $t0, 0x1E0($v0)
    ctx->pc = 0x10ded4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x10ded8: 0xfc4801e0  sd          $t0, 0x1E0($v0)
    ctx->pc = 0x10ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 480), GPR_U64(ctx, 8));
    // 0x10dedc: 0xfc4001e8  sd          $zero, 0x1E8($v0)
    ctx->pc = 0x10dedcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 488), GPR_U64(ctx, 0));
    // 0x10dee0: 0x8c4801f0  lw          $t0, 0x1F0($v0)
    ctx->pc = 0x10dee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x10dee4: 0xfc4801f0  sd          $t0, 0x1F0($v0)
    ctx->pc = 0x10dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 496), GPR_U64(ctx, 8));
    // 0x10dee8: 0xfc4001f8  sd          $zero, 0x1F8($v0)
    ctx->pc = 0x10dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 504), GPR_U64(ctx, 0));
    // 0x10deec: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10DEECu;
    SET_GPR_U32(ctx, 31, 0x10DEF4u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DEF4u; }
        if (ctx->pc != 0x10DEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DEF4u; }
        if (ctx->pc != 0x10DEF4u) { return; }
    }
    ctx->pc = 0x10DEF4u;
label_10def4:
    // 0x10def4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10def8: 0xc0432a0  jal         func_10CA80
    ctx->pc = 0x10DEF8u;
    SET_GPR_U32(ctx, 31, 0x10DF00u);
    ctx->pc = 0x10DEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DEF8u;
            // 0x10defc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA80u;
    if (runtime->hasFunction(0x10CA80u)) {
        auto targetFn = runtime->lookupFunction(0x10CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF00u; }
        if (ctx->pc != 0x10DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallStartExitThreadWrappers_0x10ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF00u; }
        if (ctx->pc != 0x10DF00u) { return; }
    }
    ctx->pc = 0x10DF00u;
label_10df00:
    // 0x10df00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10df00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10df04: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10df04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10df08: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x10df08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10df0c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10df0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10df10: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF10u;
            // 0x10df14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF18u;
label_10df18:
    // 0x10df18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10df18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10df1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10df20: 0xc043324  jal         func_10CC90
    ctx->pc = 0x10DF20u;
    SET_GPR_U32(ctx, 31, 0x10DF28u);
    ctx->pc = 0x10DF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF20u;
            // 0x10df24: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF28u; }
        if (ctx->pc != 0x10DF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF28u; }
        if (ctx->pc != 0x10DF28u) { return; }
    }
    ctx->pc = 0x10DF28u;
label_10df28:
    // 0x10df28: 0xf  sync
    ctx->pc = 0x10df28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10df2c: 0x42000038  ei
    ctx->pc = 0x10df2cu;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x10df30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10df34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10df34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df38: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF38u;
            // 0x10df3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF40u;
    ctx->pc = 0x10df40u;
}
