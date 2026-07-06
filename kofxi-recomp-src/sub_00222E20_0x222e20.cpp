#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222E20
// Address: 0x222e20 - 0x222f28
void sub_00222E20_0x222e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222E20_0x222e20");
#endif

    switch (ctx->pc) {
        case 0x222e48u: goto label_222e48;
        case 0x222e68u: goto label_222e68;
        case 0x222e94u: goto label_222e94;
        case 0x222eacu: goto label_222eac;
        case 0x222ec4u: goto label_222ec4;
        case 0x222ed4u: goto label_222ed4;
        case 0x222efcu: goto label_222efc;
        case 0x222f04u: goto label_222f04;
        case 0x222f1cu: goto label_222f1c;
        default: break;
    }

    ctx->pc = 0x222e20u;

    // 0x222e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222e28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222e2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x222e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x222e30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x222e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x222e34: 0x8c8f1044  lw          $t7, 0x1044($a0)
    ctx->pc = 0x222e34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x222e38: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x222E38u;
    {
        const bool branch_taken_0x222e38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222E38u;
            // 0x222e3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e38) {
            ctx->pc = 0x222F04u;
            goto label_222f04;
        }
    }
    ctx->pc = 0x222E40u;
    // 0x222e40: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x222E40u;
    SET_GPR_U32(ctx, 31, 0x222E48u);
    ctx->pc = 0x222E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E40u;
            // 0x222e44: 0x2612083c  addiu       $s2, $s0, 0x83C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E48u; }
        if (ctx->pc != 0x222E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E48u; }
        if (ctx->pc != 0x222E48u) { return; }
    }
    ctx->pc = 0x222E48u;
label_222e48:
    // 0x222e48: 0x8e061044  lw          $a2, 0x1044($s0)
    ctx->pc = 0x222e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4164)));
    // 0x222e4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e50: 0x8e0e1040  lw          $t6, 0x1040($s0)
    ctx->pc = 0x222e50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x222e54: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x222e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x222e58: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x222e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x222e5c: 0x1c6782a  slt         $t7, $t6, $a2
    ctx->pc = 0x222e5cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222e60: 0xc09754a  jal         func_25D528
    ctx->pc = 0x222E60u;
    SET_GPR_U32(ctx, 31, 0x222E68u);
    ctx->pc = 0x222E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E60u;
            // 0x222e64: 0x1cf300b  movn        $a2, $t6, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D528u;
    if (runtime->hasFunction(0x25D528u)) {
        auto targetFn = runtime->lookupFunction(0x25D528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E68u; }
        if (ctx->pc != 0x222E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D528_0x25d528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E68u; }
        if (ctx->pc != 0x222E68u) { return; }
    }
    ctx->pc = 0x222E68u;
label_222e68:
    // 0x222e68: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x222e68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222e6c: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x222e6cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x222e70: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x222E70u;
    {
        const bool branch_taken_0x222e70 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x222E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222E70u;
            // 0x222e74: 0x2112821  addu        $a1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e70) {
            ctx->pc = 0x222E94u;
            goto label_222e94;
        }
    }
    ctx->pc = 0x222E78u;
    // 0x222e78: 0x8e061044  lw          $a2, 0x1044($s0)
    ctx->pc = 0x222e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4164)));
    // 0x222e7c: 0xae001048  sw          $zero, 0x1048($s0)
    ctx->pc = 0x222e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
    // 0x222e80: 0x24a5083c  addiu       $a1, $a1, 0x83C
    ctx->pc = 0x222e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2108));
    // 0x222e84: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x222e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x222e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e8c: 0xc049c48  jal         func_127120
    ctx->pc = 0x222E8Cu;
    SET_GPR_U32(ctx, 31, 0x222E94u);
    ctx->pc = 0x222E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E8Cu;
            // 0x222e90: 0xae061044  sw          $a2, 0x1044($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4164), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E94u; }
        if (ctx->pc != 0x222E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E94u; }
        if (ctx->pc != 0x222E94u) { return; }
    }
    ctx->pc = 0x222E94u;
label_222e94:
    // 0x222e94: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x222E94u;
    {
        const bool branch_taken_0x222e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e94) {
            ctx->pc = 0x222E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222E94u;
            // 0x222e98: 0xae001048  sw          $zero, 0x1048($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222E9Cu;
            goto label_222e9c;
        }
    }
    ctx->pc = 0x222E9Cu;
label_222e9c:
    // 0x222e9c: 0x6210017  bgez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x222E9Cu;
    {
        const bool branch_taken_0x222e9c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x222e9c) {
            ctx->pc = 0x222EFCu;
            goto label_222efc;
        }
    }
    ctx->pc = 0x222EA4u;
    // 0x222ea4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222EA4u;
    SET_GPR_U32(ctx, 31, 0x222EACu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EACu; }
        if (ctx->pc != 0x222EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EACu; }
        if (ctx->pc != 0x222EACu) { return; }
    }
    ctx->pc = 0x222EACu;
label_222eac:
    // 0x222eac: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x222eacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222eb0: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x222eb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x222eb4: 0x524f0019  beql        $s2, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x222EB4u;
    {
        const bool branch_taken_0x222eb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        if (branch_taken_0x222eb4) {
            ctx->pc = 0x222EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222EB4u;
            // 0x222eb8: 0x8e0f1048  lw          $t7, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222F1Cu;
            goto label_222f1c;
        }
    }
    ctx->pc = 0x222EBCu;
    // 0x222ebc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222EBCu;
    SET_GPR_U32(ctx, 31, 0x222EC4u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EC4u; }
        if (ctx->pc != 0x222EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EC4u; }
        if (ctx->pc != 0x222EC4u) { return; }
    }
    ctx->pc = 0x222EC4u;
label_222ec4:
    // 0x222ec4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ecc: 0xc089144  jal         func_224510
    ctx->pc = 0x222ECCu;
    SET_GPR_U32(ctx, 31, 0x222ED4u);
    ctx->pc = 0x222ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222ECCu;
            // 0x222ed0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222ED4u; }
        if (ctx->pc != 0x222ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222ED4u; }
        if (ctx->pc != 0x222ED4u) { return; }
    }
    ctx->pc = 0x222ED4u;
label_222ed4:
    // 0x222ed4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222ed8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222edc: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x222edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x222ee0: 0x25083060  addiu       $t0, $t0, 0x3060
    ctx->pc = 0x222ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12384));
    // 0x222ee4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x222ee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ee8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x222ee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222eec: 0x2405012d  addiu       $a1, $zero, 0x12D
    ctx->pc = 0x222eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x222ef0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222ef4: 0xc089794  jal         func_225E50
    ctx->pc = 0x222EF4u;
    SET_GPR_U32(ctx, 31, 0x222EFCu);
    ctx->pc = 0x222EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222EF4u;
            // 0x222ef8: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EFCu; }
        if (ctx->pc != 0x222EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EFCu; }
        if (ctx->pc != 0x222EFCu) { return; }
    }
    ctx->pc = 0x222EFCu;
label_222efc:
    // 0x222efc: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x222EFCu;
    SET_GPR_U32(ctx, 31, 0x222F04u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F04u; }
        if (ctx->pc != 0x222F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F04u; }
        if (ctx->pc != 0x222F04u) { return; }
    }
    ctx->pc = 0x222F04u;
label_222f04:
    // 0x222f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222f08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222f0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222f10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x222f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222f14: 0x3e00008  jr          $ra
    ctx->pc = 0x222F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F14u;
            // 0x222f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222F1Cu;
label_222f1c:
    // 0x222f1c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x222f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x222f20: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x222F20u;
    {
        const bool branch_taken_0x222f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F20u;
            // 0x222f24: 0xae0f1048  sw          $t7, 0x1048($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f20) {
            ctx->pc = 0x222EFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222efc;
        }
    }
    ctx->pc = 0x222F28u;
    ctx->pc = 0x222f28u;
}
