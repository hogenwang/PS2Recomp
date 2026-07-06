#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025FE00
// Address: 0x25fe00 - 0x260018
void sub_0025FE00_0x25fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FE00_0x25fe00");
#endif

    switch (ctx->pc) {
        case 0x25fe00u: goto label_25fe00;
        case 0x25fe04u: goto label_25fe04;
        case 0x25fe08u: goto label_25fe08;
        case 0x25fe0cu: goto label_25fe0c;
        case 0x25fe10u: goto label_25fe10;
        case 0x25fe14u: goto label_25fe14;
        case 0x25fe18u: goto label_25fe18;
        case 0x25fe1cu: goto label_25fe1c;
        case 0x25fe20u: goto label_25fe20;
        case 0x25fe24u: goto label_25fe24;
        case 0x25fe28u: goto label_25fe28;
        case 0x25fe2cu: goto label_25fe2c;
        case 0x25fe30u: goto label_25fe30;
        case 0x25fe34u: goto label_25fe34;
        case 0x25fe38u: goto label_25fe38;
        case 0x25fe3cu: goto label_25fe3c;
        case 0x25fe40u: goto label_25fe40;
        case 0x25fe44u: goto label_25fe44;
        case 0x25fe48u: goto label_25fe48;
        case 0x25fe4cu: goto label_25fe4c;
        case 0x25fe50u: goto label_25fe50;
        case 0x25fe54u: goto label_25fe54;
        case 0x25fe58u: goto label_25fe58;
        case 0x25fe5cu: goto label_25fe5c;
        case 0x25fe60u: goto label_25fe60;
        case 0x25fe64u: goto label_25fe64;
        case 0x25fe68u: goto label_25fe68;
        case 0x25fe6cu: goto label_25fe6c;
        case 0x25fe70u: goto label_25fe70;
        case 0x25fe74u: goto label_25fe74;
        case 0x25fe78u: goto label_25fe78;
        case 0x25fe7cu: goto label_25fe7c;
        case 0x25fe80u: goto label_25fe80;
        case 0x25fe84u: goto label_25fe84;
        case 0x25fe88u: goto label_25fe88;
        case 0x25fe8cu: goto label_25fe8c;
        case 0x25fe90u: goto label_25fe90;
        case 0x25fe94u: goto label_25fe94;
        case 0x25fe98u: goto label_25fe98;
        case 0x25fe9cu: goto label_25fe9c;
        case 0x25fea0u: goto label_25fea0;
        case 0x25fea4u: goto label_25fea4;
        case 0x25fea8u: goto label_25fea8;
        case 0x25feacu: goto label_25feac;
        case 0x25feb0u: goto label_25feb0;
        case 0x25feb4u: goto label_25feb4;
        case 0x25feb8u: goto label_25feb8;
        case 0x25febcu: goto label_25febc;
        case 0x25fec0u: goto label_25fec0;
        case 0x25fec4u: goto label_25fec4;
        case 0x25fec8u: goto label_25fec8;
        case 0x25feccu: goto label_25fecc;
        case 0x25fed0u: goto label_25fed0;
        case 0x25fed4u: goto label_25fed4;
        case 0x25fed8u: goto label_25fed8;
        case 0x25fedcu: goto label_25fedc;
        case 0x25fee0u: goto label_25fee0;
        case 0x25fee4u: goto label_25fee4;
        case 0x25fee8u: goto label_25fee8;
        case 0x25feecu: goto label_25feec;
        case 0x25fef0u: goto label_25fef0;
        case 0x25fef4u: goto label_25fef4;
        case 0x25fef8u: goto label_25fef8;
        case 0x25fefcu: goto label_25fefc;
        case 0x25ff00u: goto label_25ff00;
        case 0x25ff04u: goto label_25ff04;
        case 0x25ff08u: goto label_25ff08;
        case 0x25ff0cu: goto label_25ff0c;
        case 0x25ff10u: goto label_25ff10;
        case 0x25ff14u: goto label_25ff14;
        case 0x25ff18u: goto label_25ff18;
        case 0x25ff1cu: goto label_25ff1c;
        case 0x25ff20u: goto label_25ff20;
        case 0x25ff24u: goto label_25ff24;
        case 0x25ff28u: goto label_25ff28;
        case 0x25ff2cu: goto label_25ff2c;
        case 0x25ff30u: goto label_25ff30;
        case 0x25ff34u: goto label_25ff34;
        case 0x25ff38u: goto label_25ff38;
        case 0x25ff3cu: goto label_25ff3c;
        case 0x25ff40u: goto label_25ff40;
        case 0x25ff44u: goto label_25ff44;
        case 0x25ff48u: goto label_25ff48;
        case 0x25ff4cu: goto label_25ff4c;
        case 0x25ff50u: goto label_25ff50;
        case 0x25ff54u: goto label_25ff54;
        case 0x25ff58u: goto label_25ff58;
        case 0x25ff5cu: goto label_25ff5c;
        case 0x25ff60u: goto label_25ff60;
        case 0x25ff64u: goto label_25ff64;
        case 0x25ff68u: goto label_25ff68;
        case 0x25ff6cu: goto label_25ff6c;
        case 0x25ff70u: goto label_25ff70;
        case 0x25ff74u: goto label_25ff74;
        case 0x25ff78u: goto label_25ff78;
        case 0x25ff7cu: goto label_25ff7c;
        case 0x25ff80u: goto label_25ff80;
        case 0x25ff84u: goto label_25ff84;
        case 0x25ff88u: goto label_25ff88;
        case 0x25ff8cu: goto label_25ff8c;
        case 0x25ff90u: goto label_25ff90;
        case 0x25ff94u: goto label_25ff94;
        case 0x25ff98u: goto label_25ff98;
        case 0x25ff9cu: goto label_25ff9c;
        case 0x25ffa0u: goto label_25ffa0;
        case 0x25ffa4u: goto label_25ffa4;
        case 0x25ffa8u: goto label_25ffa8;
        case 0x25ffacu: goto label_25ffac;
        case 0x25ffb0u: goto label_25ffb0;
        case 0x25ffb4u: goto label_25ffb4;
        case 0x25ffb8u: goto label_25ffb8;
        case 0x25ffbcu: goto label_25ffbc;
        case 0x25ffc0u: goto label_25ffc0;
        case 0x25ffc4u: goto label_25ffc4;
        case 0x25ffc8u: goto label_25ffc8;
        case 0x25ffccu: goto label_25ffcc;
        case 0x25ffd0u: goto label_25ffd0;
        case 0x25ffd4u: goto label_25ffd4;
        case 0x25ffd8u: goto label_25ffd8;
        case 0x25ffdcu: goto label_25ffdc;
        case 0x25ffe0u: goto label_25ffe0;
        case 0x25ffe4u: goto label_25ffe4;
        case 0x25ffe8u: goto label_25ffe8;
        case 0x25ffecu: goto label_25ffec;
        case 0x25fff0u: goto label_25fff0;
        case 0x25fff4u: goto label_25fff4;
        case 0x25fff8u: goto label_25fff8;
        case 0x25fffcu: goto label_25fffc;
        case 0x260000u: goto label_260000;
        case 0x260004u: goto label_260004;
        case 0x260008u: goto label_260008;
        case 0x26000cu: goto label_26000c;
        case 0x260010u: goto label_260010;
        case 0x260014u: goto label_260014;
        default: break;
    }

    ctx->pc = 0x25fe00u;

label_25fe00:
    // 0x25fe00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25fe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25fe04:
    // 0x25fe04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25fe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fe08:
    // 0x25fe08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25fe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_25fe0c:
    // 0x25fe0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_25fe10:
    // 0x25fe10: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x25fe10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
label_25fe14:
    // 0x25fe14: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x25fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
label_25fe18:
    // 0x25fe18: 0x2631beb0  addiu       $s1, $s1, -0x4150
    ctx->pc = 0x25fe18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950576));
label_25fe1c:
    // 0x25fe1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25fe20:
    // 0x25fe20: 0xc08c6a6  jal         func_231A98
label_25fe24:
    if (ctx->pc == 0x25FE24u) {
        ctx->pc = 0x25FE24u;
            // 0x25fe24: 0x2610fe78  addiu       $s0, $s0, -0x188 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966904));
        ctx->pc = 0x25FE28u;
        goto label_25fe28;
    }
    ctx->pc = 0x25FE20u;
    SET_GPR_U32(ctx, 31, 0x25FE28u);
    ctx->pc = 0x25FE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE20u;
            // 0x25fe24: 0x2610fe78  addiu       $s0, $s0, -0x188 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A98u;
    if (runtime->hasFunction(0x231A98u)) {
        auto targetFn = runtime->lookupFunction(0x231A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FE28u; }
        if (ctx->pc != 0x25FE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A98_0x231a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FE28u; }
        if (ctx->pc != 0x25FE28u) { return; }
    }
    ctx->pc = 0x25FE28u;
label_25fe28:
    // 0x25fe28: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x25fe28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
label_25fe2c:
    // 0x25fe2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fe30:
    // 0x25fe30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25fe30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fe34:
    // 0x25fe34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25fe34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fe38:
    // 0x25fe38: 0x252971b8  addiu       $t1, $t1, 0x71B8
    ctx->pc = 0x25fe38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29112));
label_25fe3c:
    // 0x25fe3c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x25fe3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_25fe40:
    // 0x25fe40: 0xc0985d0  jal         func_261740
label_25fe44:
    if (ctx->pc == 0x25FE44u) {
        ctx->pc = 0x25FE44u;
            // 0x25fe44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25FE48u;
        goto label_25fe48;
    }
    ctx->pc = 0x25FE40u;
    SET_GPR_U32(ctx, 31, 0x25FE48u);
    ctx->pc = 0x25FE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE40u;
            // 0x25fe44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (runtime->hasFunction(0x261740u)) {
        auto targetFn = runtime->lookupFunction(0x261740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FE48u; }
        if (ctx->pc != 0x25FE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261740_0x261740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FE48u; }
        if (ctx->pc != 0x25FE48u) { return; }
    }
    ctx->pc = 0x25FE48u;
label_25fe48:
    // 0x25fe48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25fe48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fe4c:
    // 0x25fe4c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x25fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_25fe50:
    // 0x25fe50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25fe54:
    // 0x25fe54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25fe54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25fe58:
    // 0x25fe58: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x25fe58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_25fe5c:
    // 0x25fe5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25fe5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25fe60:
    // 0x25fe60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fe60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fe64:
    // 0x25fe64: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x25fe64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_25fe68:
    // 0x25fe68: 0xac85cec4  sw          $a1, -0x313C($a0)
    ctx->pc = 0x25fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954692), GPR_U32(ctx, 5));
label_25fe6c:
    // 0x25fe6c: 0x3e00008  jr          $ra
label_25fe70:
    if (ctx->pc == 0x25FE70u) {
        ctx->pc = 0x25FE70u;
            // 0x25fe70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x25FE74u;
        goto label_25fe74;
    }
    ctx->pc = 0x25FE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE6Cu;
            // 0x25fe70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FE74u;
label_25fe74:
    // 0x25fe74: 0x0  nop
    ctx->pc = 0x25fe74u;
    // NOP
label_25fe78:
    // 0x25fe78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25fe7c:
    // 0x25fe7c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25fe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_25fe80:
    // 0x25fe80: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25fe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_25fe84:
    // 0x25fe84: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x25fe84u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
label_25fe88:
    // 0x25fe88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25fe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_25fe8c:
    // 0x25fe8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25fe8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fe90:
    // 0x25fe90: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x25fe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_25fe94:
    // 0x25fe94: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x25fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_25fe98:
    // 0x25fe98: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25fe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_25fe9c:
    // 0x25fe9c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_25fea0:
    // 0x25fea0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_25fea4:
    // 0x25fea4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_25fea8:
    // 0x25fea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_25feac:
    // 0x25feac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_25feb0:
    // 0x25feb0: 0xc043328  jal         func_10CCA0
label_25feb4:
    if (ctx->pc == 0x25FEB4u) {
        ctx->pc = 0x25FEB4u;
            // 0x25feb4: 0x8c4417a8  lw          $a0, 0x17A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6056)));
        ctx->pc = 0x25FEB8u;
        goto label_25feb8;
    }
    ctx->pc = 0x25FEB0u;
    SET_GPR_U32(ctx, 31, 0x25FEB8u);
    ctx->pc = 0x25FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FEB0u;
            // 0x25feb4: 0x8c4417a8  lw          $a0, 0x17A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6056)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FEB8u; }
        if (ctx->pc != 0x25FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FEB8u; }
        if (ctx->pc != 0x25FEB8u) { return; }
    }
    ctx->pc = 0x25FEB8u;
label_25feb8:
    // 0x25feb8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_25febc:
    // 0x25febc: 0xc043328  jal         func_10CCA0
label_25fec0:
    if (ctx->pc == 0x25FEC0u) {
        ctx->pc = 0x25FEC0u;
            // 0x25fec0: 0x8c44f580  lw          $a0, -0xA80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964608)));
        ctx->pc = 0x25FEC4u;
        goto label_25fec4;
    }
    ctx->pc = 0x25FEBCu;
    SET_GPR_U32(ctx, 31, 0x25FEC4u);
    ctx->pc = 0x25FEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FEBCu;
            // 0x25fec0: 0x8c44f580  lw          $a0, -0xA80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FEC4u; }
        if (ctx->pc != 0x25FEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FEC4u; }
        if (ctx->pc != 0x25FEC4u) { return; }
    }
    ctx->pc = 0x25FEC4u;
label_25fec4:
    // 0x25fec4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_25fec8:
    // 0x25fec8: 0xdc8317d0  ld          $v1, 0x17D0($a0)
    ctx->pc = 0x25fec8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 6096)));
label_25fecc:
    // 0x25fecc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x25feccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_25fed0:
    // 0x25fed0: 0xdc82ceb0  ld          $v0, -0x3150($a0)
    ctx->pc = 0x25fed0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294954672)));
label_25fed4:
    // 0x25fed4: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
label_25fed8:
    if (ctx->pc == 0x25FED8u) {
        ctx->pc = 0x25FED8u;
            // 0x25fed8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x25FEDCu;
        goto label_25fedc;
    }
    ctx->pc = 0x25FED4u;
    {
        const bool branch_taken_0x25fed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FED4u;
            // 0x25fed8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fed4) {
            ctx->pc = 0x260000u;
            goto label_260000;
        }
    }
    ctx->pc = 0x25FEDCu;
label_25fedc:
    // 0x25fedc: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x25fedcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
label_25fee0:
    // 0x25fee0: 0xdfc217d0  ld          $v0, 0x17D0($fp)
    ctx->pc = 0x25fee0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 6096)));
label_25fee4:
    // 0x25fee4: 0x0  nop
    ctx->pc = 0x25fee4u;
    // NOP
label_25fee8:
    // 0x25fee8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25fee8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_25feec:
    // 0x25feec: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x25feecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_25fef0:
    // 0x25fef0: 0xffc217d0  sd          $v0, 0x17D0($fp)
    ctx->pc = 0x25fef0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 6096), GPR_U64(ctx, 2));
label_25fef4:
    // 0x25fef4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x25fef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_25fef8:
    // 0x25fef8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x25fef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_25fefc:
    // 0x25fefc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_25ff00:
    // 0x25ff00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_25ff04:
    // 0x25ff04: 0x2442f588  addiu       $v0, $v0, -0xA78
    ctx->pc = 0x25ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964616));
label_25ff08:
    // 0x25ff08: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25ff08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25ff0c:
    // 0x25ff0c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x25ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25ff10:
    // 0x25ff10: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
label_25ff14:
    if (ctx->pc == 0x25FF14u) {
        ctx->pc = 0x25FF14u;
            // 0x25ff14: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x25FF18u;
        goto label_25ff18;
    }
    ctx->pc = 0x25FF10u;
    {
        const bool branch_taken_0x25ff10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF10u;
            // 0x25ff14: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff10) {
            ctx->pc = 0x25FFE8u;
            goto label_25ffe8;
        }
    }
    ctx->pc = 0x25FF18u;
label_25ff18:
    // 0x25ff18: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x25ff18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
label_25ff1c:
    // 0x25ff1c: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x25ff1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
label_25ff20:
    // 0x25ff20: 0x2417fffd  addiu       $s7, $zero, -0x3
    ctx->pc = 0x25ff20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_25ff24:
    // 0x25ff24: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_25ff28:
    // 0x25ff28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25ff28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25ff2c:
    // 0x25ff2c: 0xdc8217d0  ld          $v0, 0x17D0($a0)
    ctx->pc = 0x25ff2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 6096)));
label_25ff30:
    // 0x25ff30: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x25ff30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_25ff34:
    // 0x25ff34: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_25ff38:
    if (ctx->pc == 0x25FF38u) {
        ctx->pc = 0x25FF38u;
            // 0x25ff38: 0x2a640064  slti        $a0, $s3, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->pc = 0x25FF3Cu;
        goto label_25ff3c;
    }
    ctx->pc = 0x25FF34u;
    {
        const bool branch_taken_0x25ff34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF34u;
            // 0x25ff38: 0x2a640064  slti        $a0, $s3, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff34) {
            ctx->pc = 0x25FF64u;
            goto label_25ff64;
        }
    }
    ctx->pc = 0x25FF3Cu;
label_25ff3c:
    // 0x25ff3c: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
label_25ff40:
    if (ctx->pc == 0x25FF40u) {
        ctx->pc = 0x25FF40u;
            // 0x25ff40: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x25FF44u;
        goto label_25ff44;
    }
    ctx->pc = 0x25FF3Cu;
    {
        const bool branch_taken_0x25ff3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF3Cu;
            // 0x25ff40: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff3c) {
            ctx->pc = 0x25FFDCu;
            goto label_25ffdc;
        }
    }
    ctx->pc = 0x25FF44u;
label_25ff44:
    // 0x25ff44: 0x8e84f580  lw          $a0, -0xA80($s4)
    ctx->pc = 0x25ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964608)));
label_25ff48:
    // 0x25ff48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25ff48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ff4c:
    // 0x25ff4c: 0xc043320  jal         func_10CC80
label_25ff50:
    if (ctx->pc == 0x25FF50u) {
        ctx->pc = 0x25FF50u;
            // 0x25ff50: 0xaea5f988  sw          $a1, -0x678($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294965640), GPR_U32(ctx, 5));
        ctx->pc = 0x25FF54u;
        goto label_25ff54;
    }
    ctx->pc = 0x25FF4Cu;
    SET_GPR_U32(ctx, 31, 0x25FF54u);
    ctx->pc = 0x25FF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF4Cu;
            // 0x25ff50: 0xaea5f988  sw          $a1, -0x678($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294965640), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FF54u; }
        if (ctx->pc != 0x25FF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FF54u; }
        if (ctx->pc != 0x25FF54u) { return; }
    }
    ctx->pc = 0x25FF54u;
label_25ff54:
    // 0x25ff54: 0xc043328  jal         func_10CCA0
label_25ff58:
    if (ctx->pc == 0x25FF58u) {
        ctx->pc = 0x25FF58u;
            // 0x25ff58: 0x8e84f580  lw          $a0, -0xA80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964608)));
        ctx->pc = 0x25FF5Cu;
        goto label_25ff5c;
    }
    ctx->pc = 0x25FF54u;
    SET_GPR_U32(ctx, 31, 0x25FF5Cu);
    ctx->pc = 0x25FF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF54u;
            // 0x25ff58: 0x8e84f580  lw          $a0, -0xA80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FF5Cu; }
        if (ctx->pc != 0x25FF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FF5Cu; }
        if (ctx->pc != 0x25FF5Cu) { return; }
    }
    ctx->pc = 0x25FF5Cu;
label_25ff5c:
    // 0x25ff5c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_25ff60:
    if (ctx->pc == 0x25FF60u) {
        ctx->pc = 0x25FF60u;
            // 0x25ff60: 0x8ea5f988  lw          $a1, -0x678($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965640)));
        ctx->pc = 0x25FF64u;
        goto label_25ff64;
    }
    ctx->pc = 0x25FF5Cu;
    {
        const bool branch_taken_0x25ff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF5Cu;
            // 0x25ff60: 0x8ea5f988  lw          $a1, -0x678($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff5c) {
            ctx->pc = 0x25FFDCu;
            goto label_25ffdc;
        }
    }
    ctx->pc = 0x25FF64u;
label_25ff64:
    // 0x25ff64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25ff68:
    // 0x25ff68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_25ff6c:
    if (ctx->pc == 0x25FF6Cu) {
        ctx->pc = 0x25FF6Cu;
            // 0x25ff6c: 0xaec3f988  sw          $v1, -0x678($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294965640), GPR_U32(ctx, 3));
        ctx->pc = 0x25FF70u;
        goto label_25ff70;
    }
    ctx->pc = 0x25FF68u;
    {
        const bool branch_taken_0x25ff68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF68u;
            // 0x25ff6c: 0xaec3f988  sw          $v1, -0x678($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294965640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff68) {
            ctx->pc = 0x25FF80u;
            goto label_25ff80;
        }
    }
    ctx->pc = 0x25FF70u;
label_25ff70:
    // 0x25ff70: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x25ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25ff74:
    // 0x25ff74: 0x10000004  b           . + 4 + (0x4 << 2)
label_25ff78:
    if (ctx->pc == 0x25FF78u) {
        ctx->pc = 0x25FF78u;
            // 0x25ff78: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x25FF7Cu;
        goto label_25ff7c;
    }
    ctx->pc = 0x25FF74u;
    {
        const bool branch_taken_0x25ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF74u;
            // 0x25ff78: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff74) {
            ctx->pc = 0x25FF88u;
            goto label_25ff88;
        }
    }
    ctx->pc = 0x25FF7Cu;
label_25ff7c:
    // 0x25ff7c: 0x0  nop
    ctx->pc = 0x25ff7cu;
    // NOP
label_25ff80:
    // 0x25ff80: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x25ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25ff84:
    // 0x25ff84: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x25ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_25ff88:
    // 0x25ff88: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25ff8c:
    // 0x25ff8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25ff90:
    // 0x25ff90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25ff94:
    // 0x25ff94: 0x8cb10014  lw          $s1, 0x14($a1)
    ctx->pc = 0x25ff94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_25ff98:
    // 0x25ff98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25ff98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ff9c:
    // 0x25ff9c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x25ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_25ffa0:
    // 0x25ffa0: 0x8e84f580  lw          $a0, -0xA80($s4)
    ctx->pc = 0x25ffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964608)));
label_25ffa4:
    // 0x25ffa4: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x25ffa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_25ffa8:
    // 0x25ffa8: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x25ffa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_25ffac:
    // 0x25ffac: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x25ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_25ffb0:
    // 0x25ffb0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x25ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_25ffb4:
    // 0x25ffb4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x25ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_25ffb8:
    // 0x25ffb8: 0xc043320  jal         func_10CC80
label_25ffbc:
    if (ctx->pc == 0x25FFBCu) {
        ctx->pc = 0x25FFBCu;
            // 0x25ffbc: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x25FFC0u;
        goto label_25ffc0;
    }
    ctx->pc = 0x25FFB8u;
    SET_GPR_U32(ctx, 31, 0x25FFC0u);
    ctx->pc = 0x25FFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FFB8u;
            // 0x25ffbc: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FFC0u; }
        if (ctx->pc != 0x25FFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FFC0u; }
        if (ctx->pc != 0x25FFC0u) { return; }
    }
    ctx->pc = 0x25FFC0u;
label_25ffc0:
    // 0x25ffc0: 0x220f809  jalr        $s1
label_25ffc4:
    if (ctx->pc == 0x25FFC4u) {
        ctx->pc = 0x25FFC4u;
            // 0x25ffc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25FFC8u;
        goto label_25ffc8;
    }
    ctx->pc = 0x25FFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x25FFC8u);
        ctx->pc = 0x25FFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FFC0u;
            // 0x25ffc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25FFC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25FFC8u; }
            if (ctx->pc != 0x25FFC8u) { return; }
        }
        }
    }
    ctx->pc = 0x25FFC8u;
label_25ffc8:
    // 0x25ffc8: 0xc043328  jal         func_10CCA0
label_25ffcc:
    if (ctx->pc == 0x25FFCCu) {
        ctx->pc = 0x25FFCCu;
            // 0x25ffcc: 0x8e84f580  lw          $a0, -0xA80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964608)));
        ctx->pc = 0x25FFD0u;
        goto label_25ffd0;
    }
    ctx->pc = 0x25FFC8u;
    SET_GPR_U32(ctx, 31, 0x25FFD0u);
    ctx->pc = 0x25FFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FFC8u;
            // 0x25ffcc: 0x8e84f580  lw          $a0, -0xA80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FFD0u; }
        if (ctx->pc != 0x25FFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FFD0u; }
        if (ctx->pc != 0x25FFD0u) { return; }
    }
    ctx->pc = 0x25FFD0u;
label_25ffd0:
    // 0x25ffd0: 0xc097316  jal         func_25CC58
label_25ffd4:
    if (ctx->pc == 0x25FFD4u) {
        ctx->pc = 0x25FFD8u;
        goto label_25ffd8;
    }
    ctx->pc = 0x25FFD0u;
    SET_GPR_U32(ctx, 31, 0x25FFD8u);
    ctx->pc = 0x25CC58u;
    if (runtime->hasFunction(0x25CC58u)) {
        auto targetFn = runtime->lookupFunction(0x25CC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FFD8u; }
        if (ctx->pc != 0x25FFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC58_0x25cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FFD8u; }
        if (ctx->pc != 0x25FFD8u) { return; }
    }
    ctx->pc = 0x25FFD8u;
label_25ffd8:
    // 0x25ffd8: 0x8ec5f988  lw          $a1, -0x678($s6)
    ctx->pc = 0x25ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965640)));
label_25ffdc:
    // 0x25ffdc: 0x14a0ffd2  bnez        $a1, . + 4 + (-0x2E << 2)
label_25ffe0:
    if (ctx->pc == 0x25FFE0u) {
        ctx->pc = 0x25FFE0u;
            // 0x25ffe0: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x25FFE4u;
        goto label_25ffe4;
    }
    ctx->pc = 0x25FFDCu;
    {
        const bool branch_taken_0x25ffdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FFDCu;
            // 0x25ffe0: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffdc) {
            ctx->pc = 0x25FF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ff28;
        }
    }
    ctx->pc = 0x25FFE4u;
label_25ffe4:
    // 0x25ffe4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_25ffe8:
    // 0x25ffe8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x25ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_25ffec:
    // 0x25ffec: 0xdc4317d0  ld          $v1, 0x17D0($v0)
    ctx->pc = 0x25ffecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 6096)));
label_25fff0:
    // 0x25fff0: 0xdc82ceb0  ld          $v0, -0x3150($a0)
    ctx->pc = 0x25fff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294954672)));
label_25fff4:
    // 0x25fff4: 0x1462ffbc  bne         $v1, $v0, . + 4 + (-0x44 << 2)
label_25fff8:
    if (ctx->pc == 0x25FFF8u) {
        ctx->pc = 0x25FFF8u;
            // 0x25fff8: 0xdfc217d0  ld          $v0, 0x17D0($fp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 6096)));
        ctx->pc = 0x25FFFCu;
        goto label_25fffc;
    }
    ctx->pc = 0x25FFF4u;
    {
        const bool branch_taken_0x25fff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FFF4u;
            // 0x25fff8: 0xdfc217d0  ld          $v0, 0x17D0($fp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 6096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fff4) {
            ctx->pc = 0x25FEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25fee8;
        }
    }
    ctx->pc = 0x25FFFCu;
label_25fffc:
    // 0x25fffc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_260000:
    // 0x260000: 0xaec0f988  sw          $zero, -0x678($s6)
    ctx->pc = 0x260000u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294965640), GPR_U32(ctx, 0));
label_260004:
    // 0x260004: 0xc043320  jal         func_10CC80
label_260008:
    if (ctx->pc == 0x260008u) {
        ctx->pc = 0x260008u;
            // 0x260008: 0x8c44f580  lw          $a0, -0xA80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964608)));
        ctx->pc = 0x26000Cu;
        goto label_26000c;
    }
    ctx->pc = 0x260004u;
    SET_GPR_U32(ctx, 31, 0x26000Cu);
    ctx->pc = 0x260008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260004u;
            // 0x260008: 0x8c44f580  lw          $a0, -0xA80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26000Cu; }
        if (ctx->pc != 0x26000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26000Cu; }
        if (ctx->pc != 0x26000Cu) { return; }
    }
    ctx->pc = 0x26000Cu;
label_26000c:
    // 0x26000c: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
label_260010:
    if (ctx->pc == 0x260010u) {
        ctx->pc = 0x260010u;
            // 0x260010: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x260014u;
        goto label_260014;
    }
    ctx->pc = 0x26000Cu;
    {
        const bool branch_taken_0x26000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26000Cu;
            // 0x260010: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26000c) {
            ctx->pc = 0x25FEB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25feb0;
        }
    }
    ctx->pc = 0x260014u;
label_260014:
    // 0x260014: 0x0  nop
    ctx->pc = 0x260014u;
    // NOP
    ctx->pc = 0x260018u;
}
