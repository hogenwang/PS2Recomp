#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111F08
// Address: 0x111f08 - 0x112170
void sub_00111F08_0x111f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111F08_0x111f08");
#endif

    switch (ctx->pc) {
        case 0x111f2cu: goto label_111f2c;
        case 0x111f40u: goto label_111f40;
        case 0x111f64u: goto label_111f64;
        case 0x111f7cu: goto label_111f7c;
        case 0x111f84u: goto label_111f84;
        case 0x111f94u: goto label_111f94;
        case 0x111fa8u: goto label_111fa8;
        case 0x111fb8u: goto label_111fb8;
        case 0x111ff8u: goto label_111ff8;
        case 0x112040u: goto label_112040;
        case 0x112050u: goto label_112050;
        case 0x112064u: goto label_112064;
        case 0x112080u: goto label_112080;
        case 0x11209cu: goto label_11209c;
        case 0x1120b4u: goto label_1120b4;
        case 0x1120bcu: goto label_1120bc;
        case 0x1120ccu: goto label_1120cc;
        case 0x1120e0u: goto label_1120e0;
        case 0x1120f0u: goto label_1120f0;
        case 0x112134u: goto label_112134;
        case 0x112144u: goto label_112144;
        case 0x112158u: goto label_112158;
        default: break;
    }

    ctx->pc = 0x111f08u;

    // 0x111f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111f0c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x111f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x111f10: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x111f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x111f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111f18: 0xac40873c  sw          $zero, -0x78C4($v0)
    ctx->pc = 0x111f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936380), GPR_U32(ctx, 0));
    // 0x111f1c: 0x248499a8  addiu       $a0, $a0, -0x6658
    ctx->pc = 0x111f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941096));
    // 0x111f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f24: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x111F24u;
    SET_GPR_U32(ctx, 31, 0x111F2Cu);
    ctx->pc = 0x111F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111F24u;
            // 0x111f28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F2Cu; }
        if (ctx->pc != 0x111F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F2Cu; }
        if (ctx->pc != 0x111F2Cu) { return; }
    }
    ctx->pc = 0x111F2Cu;
label_111f2c:
    // 0x111f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111f30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f34: 0x3e00008  jr          $ra
    ctx->pc = 0x111F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111F34u;
            // 0x111f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111F3Cu;
    // 0x111f3c: 0x0  nop
    ctx->pc = 0x111f3cu;
    // NOP
label_111f40:
    // 0x111f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111f44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111f48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x111f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x111f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x111f54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x111f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x111f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x111f5c: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x111F5Cu;
    SET_GPR_U32(ctx, 31, 0x111F64u);
    ctx->pc = 0x111F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111F5Cu;
            // 0x111f60: 0x240400fe  addiu       $a0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F64u; }
        if (ctx->pc != 0x111F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F64u; }
        if (ctx->pc != 0x111F64u) { return; }
    }
    ctx->pc = 0x111F64u;
label_111f64:
    // 0x111f64: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x111f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x111f68: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x111f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x111f6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111F6Cu;
    {
        const bool branch_taken_0x111f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111f6c) {
            ctx->pc = 0x111F7Cu;
            goto label_111f7c;
        }
    }
    ctx->pc = 0x111F74u;
    // 0x111f74: 0xc04471c  jal         func_111C70
    ctx->pc = 0x111F74u;
    SET_GPR_U32(ctx, 31, 0x111F7Cu);
    ctx->pc = 0x111C70u;
    if (runtime->hasFunction(0x111C70u)) {
        auto targetFn = runtime->lookupFunction(0x111C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F7Cu; }
        if (ctx->pc != 0x111F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C70_0x111c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F7Cu; }
        if (ctx->pc != 0x111F7Cu) { return; }
    }
    ctx->pc = 0x111F7Cu;
label_111f7c:
    // 0x111f7c: 0xc04479e  jal         func_111E78
    ctx->pc = 0x111F7Cu;
    SET_GPR_U32(ctx, 31, 0x111F84u);
    ctx->pc = 0x111E78u;
    if (runtime->hasFunction(0x111E78u)) {
        auto targetFn = runtime->lookupFunction(0x111E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F84u; }
        if (ctx->pc != 0x111F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111E78_0x111e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F84u; }
        if (ctx->pc != 0x111F84u) { return; }
    }
    ctx->pc = 0x111F84u;
label_111f84:
    // 0x111f84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111F84u;
    {
        const bool branch_taken_0x111f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111f84) {
            ctx->pc = 0x111FA0u;
            goto label_111fa0;
        }
    }
    ctx->pc = 0x111F8Cu;
    // 0x111f8c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x111F8Cu;
    SET_GPR_U32(ctx, 31, 0x111F94u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F94u; }
        if (ctx->pc != 0x111F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F94u; }
        if (ctx->pc != 0x111F94u) { return; }
    }
    ctx->pc = 0x111F94u;
label_111f94:
    // 0x111f94: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x111f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x111f98: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x111F98u;
    {
        const bool branch_taken_0x111f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111F98u;
            // 0x111f9c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f98) {
            ctx->pc = 0x112068u;
            goto label_112068;
        }
    }
    ctx->pc = 0x111FA0u;
label_111fa0:
    // 0x111fa0: 0xc044534  jal         func_1114D0
    ctx->pc = 0x111FA0u;
    SET_GPR_U32(ctx, 31, 0x111FA8u);
    ctx->pc = 0x1114D0u;
    if (runtime->hasFunction(0x1114D0u)) {
        auto targetFn = runtime->lookupFunction(0x1114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111FA8u; }
        if (ctx->pc != 0x111FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001114D0_0x1114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111FA8u; }
        if (ctx->pc != 0x111FA8u) { return; }
    }
    ctx->pc = 0x111FA8u;
label_111fa8:
    // 0x111fa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111FA8u;
    {
        const bool branch_taken_0x111fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111FA8u;
            // 0x111fac: 0x32023fff  andi        $v0, $s0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fa8) {
            ctx->pc = 0x111FC0u;
            goto label_111fc0;
        }
    }
    ctx->pc = 0x111FB0u;
    // 0x111fb0: 0xc0446de  jal         func_111B78
    ctx->pc = 0x111FB0u;
    SET_GPR_U32(ctx, 31, 0x111FB8u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111FB8u; }
        if (ctx->pc != 0x111FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111FB8u; }
        if (ctx->pc != 0x111FB8u) { return; }
    }
    ctx->pc = 0x111FB8u;
label_111fb8:
    // 0x111fb8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x111FB8u;
    {
        const bool branch_taken_0x111fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111FB8u;
            // 0x111fbc: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fb8) {
            ctx->pc = 0x112068u;
            goto label_112068;
        }
    }
    ctx->pc = 0x111FC0u;
label_111fc0:
    // 0x111fc0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111FC0u;
    {
        const bool branch_taken_0x111fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111fc0) {
            ctx->pc = 0x111FF0u;
            goto label_111ff0;
        }
    }
    ctx->pc = 0x111FC8u;
    // 0x111fc8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x111FC8u;
    {
        const bool branch_taken_0x111fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111FC8u;
            // 0x111fcc: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fc8) {
            ctx->pc = 0x111FF0u;
            goto label_111ff0;
        }
    }
    ctx->pc = 0x111FD0u;
    // 0x111fd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111fd4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x111fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x111fd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111FD8u;
    {
        const bool branch_taken_0x111fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111fd8) {
            ctx->pc = 0x111FF0u;
            goto label_111ff0;
        }
    }
    ctx->pc = 0x111FE0u;
    // 0x111fe0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111FE0u;
    {
        const bool branch_taken_0x111fe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111FE0u;
            // 0x111fe4: 0x2e220021  sltiu       $v0, $s1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fe0) {
            ctx->pc = 0x111FF0u;
            goto label_111ff0;
        }
    }
    ctx->pc = 0x111FE8u;
    // 0x111fe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111FE8u;
    {
        const bool branch_taken_0x111fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111FE8u;
            // 0x111fec: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fe8) {
            ctx->pc = 0x112000u;
            goto label_112000;
        }
    }
    ctx->pc = 0x111FF0u;
label_111ff0:
    // 0x111ff0: 0xc0446de  jal         func_111B78
    ctx->pc = 0x111FF0u;
    SET_GPR_U32(ctx, 31, 0x111FF8u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111FF8u; }
        if (ctx->pc != 0x111FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111FF8u; }
        if (ctx->pc != 0x111FF8u) { return; }
    }
    ctx->pc = 0x111FF8u;
label_111ff8:
    // 0x111ff8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x111FF8u;
    {
        const bool branch_taken_0x111ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111FF8u;
            // 0x111ffc: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ff8) {
            ctx->pc = 0x112068u;
            goto label_112068;
        }
    }
    ctx->pc = 0x112000u;
label_112000:
    // 0x112000: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x112000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x112004: 0x24678280  addiu       $a3, $v1, -0x7D80
    ctx->pc = 0x112004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935168));
    // 0x112008: 0xac708280  sw          $s0, -0x7D80($v1)
    ctx->pc = 0x112008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935168), GPR_U32(ctx, 16));
    // 0x11200c: 0xacf10004  sw          $s1, 0x4($a3)
    ctx->pc = 0x11200cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 17));
    // 0x112010: 0x24528ec0  addiu       $s2, $v0, -0x7140
    ctx->pc = 0x112010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x112014: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x112014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x112018: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11201c: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x11201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x112020: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x112020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x112024: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x112024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x112028: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11202c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x11202cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x112030: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x112030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112034: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x112034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112038: 0xc044576  jal         func_1115D8
    ctx->pc = 0x112038u;
    SET_GPR_U32(ctx, 31, 0x112040u);
    ctx->pc = 0x11203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112038u;
            // 0x11203c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112040u; }
        if (ctx->pc != 0x112040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112040u; }
        if (ctx->pc != 0x112040u) { return; }
    }
    ctx->pc = 0x112040u;
label_112040:
    // 0x112040: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112040u;
    {
        const bool branch_taken_0x112040 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112040u;
            // 0x112044: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112040) {
            ctx->pc = 0x112058u;
            goto label_112058;
        }
    }
    ctx->pc = 0x112048u;
    // 0x112048: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112048u;
    SET_GPR_U32(ctx, 31, 0x112050u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112050u; }
        if (ctx->pc != 0x112050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112050u; }
        if (ctx->pc != 0x112050u) { return; }
    }
    ctx->pc = 0x112050u;
label_112050:
    // 0x112050: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112050u;
    {
        const bool branch_taken_0x112050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112050u;
            // 0x112054: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112050) {
            ctx->pc = 0x112068u;
            goto label_112068;
        }
    }
    ctx->pc = 0x112058u;
label_112058:
    // 0x112058: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x112058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x11205c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11205Cu;
    SET_GPR_U32(ctx, 31, 0x112064u);
    ctx->pc = 0x112060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11205Cu;
            // 0x112060: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112064u; }
        if (ctx->pc != 0x112064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112064u; }
        if (ctx->pc != 0x112064u) { return; }
    }
    ctx->pc = 0x112064u;
label_112064:
    // 0x112064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112068:
    // 0x112068: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x112068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11206c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11206cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112070: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x112070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112074: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x112074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112078: 0x3e00008  jr          $ra
    ctx->pc = 0x112078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112078u;
            // 0x11207c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112080u;
label_112080:
    // 0x112080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112084: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x112084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x112088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11208c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x112090: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x112090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x112094: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x112094u;
    SET_GPR_U32(ctx, 31, 0x11209Cu);
    ctx->pc = 0x112098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112094u;
            // 0x112098: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11209Cu; }
        if (ctx->pc != 0x11209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11209Cu; }
        if (ctx->pc != 0x11209Cu) { return; }
    }
    ctx->pc = 0x11209Cu;
label_11209c:
    // 0x11209c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11209cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1120a0: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x1120a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x1120a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1120A4u;
    {
        const bool branch_taken_0x1120a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1120a4) {
            ctx->pc = 0x1120B4u;
            goto label_1120b4;
        }
    }
    ctx->pc = 0x1120ACu;
    // 0x1120ac: 0xc04471c  jal         func_111C70
    ctx->pc = 0x1120ACu;
    SET_GPR_U32(ctx, 31, 0x1120B4u);
    ctx->pc = 0x111C70u;
    if (runtime->hasFunction(0x111C70u)) {
        auto targetFn = runtime->lookupFunction(0x111C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120B4u; }
        if (ctx->pc != 0x1120B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C70_0x111c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120B4u; }
        if (ctx->pc != 0x1120B4u) { return; }
    }
    ctx->pc = 0x1120B4u;
label_1120b4:
    // 0x1120b4: 0xc04479e  jal         func_111E78
    ctx->pc = 0x1120B4u;
    SET_GPR_U32(ctx, 31, 0x1120BCu);
    ctx->pc = 0x111E78u;
    if (runtime->hasFunction(0x111E78u)) {
        auto targetFn = runtime->lookupFunction(0x111E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120BCu; }
        if (ctx->pc != 0x1120BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111E78_0x111e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120BCu; }
        if (ctx->pc != 0x1120BCu) { return; }
    }
    ctx->pc = 0x1120BCu;
label_1120bc:
    // 0x1120bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1120BCu;
    {
        const bool branch_taken_0x1120bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1120bc) {
            ctx->pc = 0x1120D8u;
            goto label_1120d8;
        }
    }
    ctx->pc = 0x1120C4u;
    // 0x1120c4: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1120C4u;
    SET_GPR_U32(ctx, 31, 0x1120CCu);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120CCu; }
        if (ctx->pc != 0x1120CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120CCu; }
        if (ctx->pc != 0x1120CCu) { return; }
    }
    ctx->pc = 0x1120CCu;
label_1120cc:
    // 0x1120cc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1120ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1120d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1120D0u;
    {
        const bool branch_taken_0x1120d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1120D0u;
            // 0x1120d4: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120d0) {
            ctx->pc = 0x11215Cu;
            goto label_11215c;
        }
    }
    ctx->pc = 0x1120D8u;
label_1120d8:
    // 0x1120d8: 0xc044534  jal         func_1114D0
    ctx->pc = 0x1120D8u;
    SET_GPR_U32(ctx, 31, 0x1120E0u);
    ctx->pc = 0x1114D0u;
    if (runtime->hasFunction(0x1114D0u)) {
        auto targetFn = runtime->lookupFunction(0x1114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120E0u; }
        if (ctx->pc != 0x1120E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001114D0_0x1114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120E0u; }
        if (ctx->pc != 0x1120E0u) { return; }
    }
    ctx->pc = 0x1120E0u;
label_1120e0:
    // 0x1120e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1120E0u;
    {
        const bool branch_taken_0x1120e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1120E0u;
            // 0x1120e4: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120e0) {
            ctx->pc = 0x1120F8u;
            goto label_1120f8;
        }
    }
    ctx->pc = 0x1120E8u;
    // 0x1120e8: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1120E8u;
    SET_GPR_U32(ctx, 31, 0x1120F0u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120F0u; }
        if (ctx->pc != 0x1120F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1120F0u; }
        if (ctx->pc != 0x1120F0u) { return; }
    }
    ctx->pc = 0x1120F0u;
label_1120f0:
    // 0x1120f0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1120F0u;
    {
        const bool branch_taken_0x1120f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1120F0u;
            // 0x1120f4: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120f0) {
            ctx->pc = 0x11215Cu;
            goto label_11215c;
        }
    }
    ctx->pc = 0x1120F8u;
label_1120f8:
    // 0x1120f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1120f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1120fc: 0x24518ec0  addiu       $s1, $v0, -0x7140
    ctx->pc = 0x1120fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x112100: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x112100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x112104: 0xacf08280  sw          $s0, -0x7D80($a3)
    ctx->pc = 0x112104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294935168), GPR_U32(ctx, 16));
    // 0x112108: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x112108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x11210c: 0x24e78280  addiu       $a3, $a3, -0x7D80
    ctx->pc = 0x11210cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935168));
    // 0x112110: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x112114: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x112114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x112118: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x112118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x11211c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11211cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112120: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x112120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x112124: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x112124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112128: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x112128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11212c: 0xc044576  jal         func_1115D8
    ctx->pc = 0x11212Cu;
    SET_GPR_U32(ctx, 31, 0x112134u);
    ctx->pc = 0x112130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11212Cu;
            // 0x112130: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112134u; }
        if (ctx->pc != 0x112134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112134u; }
        if (ctx->pc != 0x112134u) { return; }
    }
    ctx->pc = 0x112134u;
label_112134:
    // 0x112134: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112134u;
    {
        const bool branch_taken_0x112134 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112134u;
            // 0x112138: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112134) {
            ctx->pc = 0x11214Cu;
            goto label_11214c;
        }
    }
    ctx->pc = 0x11213Cu;
    // 0x11213c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11213Cu;
    SET_GPR_U32(ctx, 31, 0x112144u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112144u; }
        if (ctx->pc != 0x112144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112144u; }
        if (ctx->pc != 0x112144u) { return; }
    }
    ctx->pc = 0x112144u;
label_112144:
    // 0x112144: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112144u;
    {
        const bool branch_taken_0x112144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112144u;
            // 0x112148: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112144) {
            ctx->pc = 0x11215Cu;
            goto label_11215c;
        }
    }
    ctx->pc = 0x11214Cu;
label_11214c:
    // 0x11214c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x11214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x112150: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112150u;
    SET_GPR_U32(ctx, 31, 0x112158u);
    ctx->pc = 0x112154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112150u;
            // 0x112154: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112158u; }
        if (ctx->pc != 0x112158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112158u; }
        if (ctx->pc != 0x112158u) { return; }
    }
    ctx->pc = 0x112158u;
label_112158:
    // 0x112158: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11215c:
    // 0x11215c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112160: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x112160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112164: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x112164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112168: 0x3e00008  jr          $ra
    ctx->pc = 0x112168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11216Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112168u;
            // 0x11216c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112170u;
    ctx->pc = 0x112170u;
}
