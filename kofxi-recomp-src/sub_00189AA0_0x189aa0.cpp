#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189AA0
// Address: 0x189aa0 - 0x189c20
void sub_00189AA0_0x189aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189AA0_0x189aa0");
#endif

    switch (ctx->pc) {
        case 0x189b04u: goto label_189b04;
        case 0x189b18u: goto label_189b18;
        case 0x189b2cu: goto label_189b2c;
        case 0x189b40u: goto label_189b40;
        case 0x189b54u: goto label_189b54;
        case 0x189b68u: goto label_189b68;
        case 0x189b7cu: goto label_189b7c;
        case 0x189b90u: goto label_189b90;
        case 0x189ba4u: goto label_189ba4;
        case 0x189bb8u: goto label_189bb8;
        case 0x189bccu: goto label_189bcc;
        case 0x189be0u: goto label_189be0;
        default: break;
    }

    ctx->pc = 0x189aa0u;

    // 0x189aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189aa4: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x189aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x189aa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x189aac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189ab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189ab4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189abc: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x189abcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x189ac0: 0xa4c204a6  sh          $v0, 0x4A6($a2)
    ctx->pc = 0x189ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1190), (uint16_t)GPR_U32(ctx, 2));
    // 0x189ac4: 0x24d004a6  addiu       $s0, $a2, 0x4A6
    ctx->pc = 0x189ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1190));
    // 0x189ac8: 0xa4c004a8  sh          $zero, 0x4A8($a2)
    ctx->pc = 0x189ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1192), (uint16_t)GPR_U32(ctx, 0));
    // 0x189acc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x189accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x189ad0: 0xa4c004b0  sh          $zero, 0x4B0($a2)
    ctx->pc = 0x189ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1200), (uint16_t)GPR_U32(ctx, 0));
    // 0x189ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ad8: 0xa4c004bc  sh          $zero, 0x4BC($a2)
    ctx->pc = 0x189ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1212), (uint16_t)GPR_U32(ctx, 0));
    // 0x189adc: 0xa4c004c4  sh          $zero, 0x4C4($a2)
    ctx->pc = 0x189adcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1220), (uint16_t)GPR_U32(ctx, 0));
    // 0x189ae0: 0xa4c004da  sh          $zero, 0x4DA($a2)
    ctx->pc = 0x189ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1242), (uint16_t)GPR_U32(ctx, 0));
    // 0x189ae4: 0xa4c004dc  sh          $zero, 0x4DC($a2)
    ctx->pc = 0x189ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1244), (uint16_t)GPR_U32(ctx, 0));
    // 0x189ae8: 0xa4c004de  sh          $zero, 0x4DE($a2)
    ctx->pc = 0x189ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1246), (uint16_t)GPR_U32(ctx, 0));
    // 0x189aec: 0xa4c004e0  sh          $zero, 0x4E0($a2)
    ctx->pc = 0x189aecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1248), (uint16_t)GPR_U32(ctx, 0));
    // 0x189af0: 0xa4c004e2  sh          $zero, 0x4E2($a2)
    ctx->pc = 0x189af0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1250), (uint16_t)GPR_U32(ctx, 0));
    // 0x189af4: 0xa4c004e4  sh          $zero, 0x4E4($a2)
    ctx->pc = 0x189af4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1252), (uint16_t)GPR_U32(ctx, 0));
    // 0x189af8: 0xa4c204b8  sh          $v0, 0x4B8($a2)
    ctx->pc = 0x189af8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1208), (uint16_t)GPR_U32(ctx, 2));
    // 0x189afc: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189AFCu;
    SET_GPR_U32(ctx, 31, 0x189B04u);
    ctx->pc = 0x189B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189AFCu;
            // 0x189b00: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B04u; }
        if (ctx->pc != 0x189B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B04u; }
        if (ctx->pc != 0x189B04u) { return; }
    }
    ctx->pc = 0x189B04u;
label_189b04:
    // 0x189b04: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x189b04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x189b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b10: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189B10u;
    SET_GPR_U32(ctx, 31, 0x189B18u);
    ctx->pc = 0x189B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B10u;
            // 0x189b14: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B18u; }
        if (ctx->pc != 0x189B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B18u; }
        if (ctx->pc != 0x189B18u) { return; }
    }
    ctx->pc = 0x189B18u;
label_189b18:
    // 0x189b18: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x189b18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x189b1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b24: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189B24u;
    SET_GPR_U32(ctx, 31, 0x189B2Cu);
    ctx->pc = 0x189B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B24u;
            // 0x189b28: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B2Cu; }
        if (ctx->pc != 0x189B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B2Cu; }
        if (ctx->pc != 0x189B2Cu) { return; }
    }
    ctx->pc = 0x189B2Cu;
label_189b2c:
    // 0x189b2c: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x189b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x189b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b38: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189B38u;
    SET_GPR_U32(ctx, 31, 0x189B40u);
    ctx->pc = 0x189B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B38u;
            // 0x189b3c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B40u; }
        if (ctx->pc != 0x189B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B40u; }
        if (ctx->pc != 0x189B40u) { return; }
    }
    ctx->pc = 0x189B40u;
label_189b40:
    // 0x189b40: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x189b40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x189b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b4c: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189B4Cu;
    SET_GPR_U32(ctx, 31, 0x189B54u);
    ctx->pc = 0x189B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B4Cu;
            // 0x189b50: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B54u; }
        if (ctx->pc != 0x189B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B54u; }
        if (ctx->pc != 0x189B54u) { return; }
    }
    ctx->pc = 0x189B54u;
label_189b54:
    // 0x189b54: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x189b54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x189b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b60: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189B60u;
    SET_GPR_U32(ctx, 31, 0x189B68u);
    ctx->pc = 0x189B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B60u;
            // 0x189b64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B68u; }
        if (ctx->pc != 0x189B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B68u; }
        if (ctx->pc != 0x189B68u) { return; }
    }
    ctx->pc = 0x189B68u;
label_189b68:
    // 0x189b68: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x189b68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x189b6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b74: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189B74u;
    SET_GPR_U32(ctx, 31, 0x189B7Cu);
    ctx->pc = 0x189B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B74u;
            // 0x189b78: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B7Cu; }
        if (ctx->pc != 0x189B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B7Cu; }
        if (ctx->pc != 0x189B7Cu) { return; }
    }
    ctx->pc = 0x189B7Cu;
label_189b7c:
    // 0x189b7c: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x189b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x189b80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b88: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189B88u;
    SET_GPR_U32(ctx, 31, 0x189B90u);
    ctx->pc = 0x189B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B88u;
            // 0x189b8c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B90u; }
        if (ctx->pc != 0x189B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B90u; }
        if (ctx->pc != 0x189B90u) { return; }
    }
    ctx->pc = 0x189B90u;
label_189b90:
    // 0x189b90: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x189b90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x189b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b9c: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189B9Cu;
    SET_GPR_U32(ctx, 31, 0x189BA4u);
    ctx->pc = 0x189BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B9Cu;
            // 0x189ba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BA4u; }
        if (ctx->pc != 0x189BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BA4u; }
        if (ctx->pc != 0x189BA4u) { return; }
    }
    ctx->pc = 0x189BA4u;
label_189ba4:
    // 0x189ba4: 0xa2020040  sb          $v0, 0x40($s0)
    ctx->pc = 0x189ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x189ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bb0: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189BB0u;
    SET_GPR_U32(ctx, 31, 0x189BB8u);
    ctx->pc = 0x189BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189BB0u;
            // 0x189bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BB8u; }
        if (ctx->pc != 0x189BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BB8u; }
        if (ctx->pc != 0x189BB8u) { return; }
    }
    ctx->pc = 0x189BB8u;
label_189bb8:
    // 0x189bb8: 0xa2020041  sb          $v0, 0x41($s0)
    ctx->pc = 0x189bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x189bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bc4: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189BC4u;
    SET_GPR_U32(ctx, 31, 0x189BCCu);
    ctx->pc = 0x189BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189BC4u;
            // 0x189bc8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BCCu; }
        if (ctx->pc != 0x189BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BCCu; }
        if (ctx->pc != 0x189BCCu) { return; }
    }
    ctx->pc = 0x189BCCu;
label_189bcc:
    // 0x189bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bd4: 0xa2020042  sb          $v0, 0x42($s0)
    ctx->pc = 0x189bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x189bd8: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x189BD8u;
    SET_GPR_U32(ctx, 31, 0x189BE0u);
    ctx->pc = 0x189BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189BD8u;
            // 0x189bdc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BE0u; }
        if (ctx->pc != 0x189BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BE0u; }
        if (ctx->pc != 0x189BE0u) { return; }
    }
    ctx->pc = 0x189BE0u;
label_189be0:
    // 0x189be0: 0xa2020043  sb          $v0, 0x43($s0)
    ctx->pc = 0x189be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 2));
    // 0x189be4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x189be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x189be8: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x189be8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x189bec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x189becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189bf0: 0xa6030032  sh          $v1, 0x32($s0)
    ctx->pc = 0x189bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x189bf4: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x189bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x189bf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x189bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189bfc: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x189bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x189c00: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x189c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x189c04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x189c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189c08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189c14: 0x3e00008  jr          $ra
    ctx->pc = 0x189C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C14u;
            // 0x189c18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189C1Cu;
    // 0x189c1c: 0x0  nop
    ctx->pc = 0x189c1cu;
    // NOP
    ctx->pc = 0x189c20u;
}
