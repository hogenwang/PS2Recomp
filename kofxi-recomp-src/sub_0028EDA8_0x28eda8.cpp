#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028EDA8
// Address: 0x28eda8 - 0x28eeb0
void sub_0028EDA8_0x28eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EDA8_0x28eda8");
#endif

    switch (ctx->pc) {
        case 0x28eda8u: goto label_28eda8;
        case 0x28edacu: goto label_28edac;
        case 0x28edb0u: goto label_28edb0;
        case 0x28edb4u: goto label_28edb4;
        case 0x28edb8u: goto label_28edb8;
        case 0x28edbcu: goto label_28edbc;
        case 0x28edc0u: goto label_28edc0;
        case 0x28edc4u: goto label_28edc4;
        case 0x28edc8u: goto label_28edc8;
        case 0x28edccu: goto label_28edcc;
        case 0x28edd0u: goto label_28edd0;
        case 0x28edd4u: goto label_28edd4;
        case 0x28edd8u: goto label_28edd8;
        case 0x28eddcu: goto label_28eddc;
        case 0x28ede0u: goto label_28ede0;
        case 0x28ede4u: goto label_28ede4;
        case 0x28ede8u: goto label_28ede8;
        case 0x28edecu: goto label_28edec;
        case 0x28edf0u: goto label_28edf0;
        case 0x28edf4u: goto label_28edf4;
        case 0x28edf8u: goto label_28edf8;
        case 0x28edfcu: goto label_28edfc;
        case 0x28ee00u: goto label_28ee00;
        case 0x28ee04u: goto label_28ee04;
        case 0x28ee08u: goto label_28ee08;
        case 0x28ee0cu: goto label_28ee0c;
        case 0x28ee10u: goto label_28ee10;
        case 0x28ee14u: goto label_28ee14;
        case 0x28ee18u: goto label_28ee18;
        case 0x28ee1cu: goto label_28ee1c;
        case 0x28ee20u: goto label_28ee20;
        case 0x28ee24u: goto label_28ee24;
        case 0x28ee28u: goto label_28ee28;
        case 0x28ee2cu: goto label_28ee2c;
        case 0x28ee30u: goto label_28ee30;
        case 0x28ee34u: goto label_28ee34;
        case 0x28ee38u: goto label_28ee38;
        case 0x28ee3cu: goto label_28ee3c;
        case 0x28ee40u: goto label_28ee40;
        case 0x28ee44u: goto label_28ee44;
        case 0x28ee48u: goto label_28ee48;
        case 0x28ee4cu: goto label_28ee4c;
        case 0x28ee50u: goto label_28ee50;
        case 0x28ee54u: goto label_28ee54;
        case 0x28ee58u: goto label_28ee58;
        case 0x28ee5cu: goto label_28ee5c;
        case 0x28ee60u: goto label_28ee60;
        case 0x28ee64u: goto label_28ee64;
        case 0x28ee68u: goto label_28ee68;
        case 0x28ee6cu: goto label_28ee6c;
        case 0x28ee70u: goto label_28ee70;
        case 0x28ee74u: goto label_28ee74;
        case 0x28ee78u: goto label_28ee78;
        case 0x28ee7cu: goto label_28ee7c;
        case 0x28ee80u: goto label_28ee80;
        case 0x28ee84u: goto label_28ee84;
        case 0x28ee88u: goto label_28ee88;
        case 0x28ee8cu: goto label_28ee8c;
        case 0x28ee90u: goto label_28ee90;
        case 0x28ee94u: goto label_28ee94;
        case 0x28ee98u: goto label_28ee98;
        case 0x28ee9cu: goto label_28ee9c;
        case 0x28eea0u: goto label_28eea0;
        case 0x28eea4u: goto label_28eea4;
        case 0x28eea8u: goto label_28eea8;
        case 0x28eeacu: goto label_28eeac;
        default: break;
    }

    ctx->pc = 0x28eda8u;

label_28eda8:
    // 0x28eda8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28edac:
    // 0x28edac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28edacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28edb0:
    // 0x28edb0: 0x8c424630  lw          $v0, 0x4630($v0)
    ctx->pc = 0x28edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17968)));
label_28edb4:
    // 0x28edb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28edb8:
    if (ctx->pc == 0x28EDB8u) {
        ctx->pc = 0x28EDB8u;
            // 0x28edb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28EDBCu;
        goto label_28edbc;
    }
    ctx->pc = 0x28EDB4u;
    {
        const bool branch_taken_0x28edb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDB4u;
            // 0x28edb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edb4) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28EDBCu;
label_28edbc:
    // 0x28edbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28edc0:
    // 0x28edc0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28edc4:
    // 0x28edc4: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x28edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_28edc8:
    // 0x28edc8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28edc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28edcc:
    // 0x28edcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28edccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28edd0:
    // 0x28edd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28edd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28edd4:
    // 0x28edd4: 0x80a5648  j           func_295920
label_28edd8:
    if (ctx->pc == 0x28EDD8u) {
        ctx->pc = 0x28EDD8u;
            // 0x28edd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EDDCu;
        goto label_28eddc;
    }
    ctx->pc = 0x28EDD4u;
    ctx->pc = 0x28EDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDD4u;
            // 0x28edd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00295920_0x295920(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x28EDDCu;
label_28eddc:
    // 0x28eddc: 0x40f809  jalr        $v0
label_28ede0:
    if (ctx->pc == 0x28EDE0u) {
        ctx->pc = 0x28EDE4u;
        goto label_28ede4;
    }
    ctx->pc = 0x28EDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EDE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EDE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EDE4u; }
            if (ctx->pc != 0x28EDE4u) { return; }
        }
        }
    }
    ctx->pc = 0x28EDE4u;
label_28ede4:
    // 0x28ede4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ede4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ede8:
    // 0x28ede8: 0x3e00008  jr          $ra
label_28edec:
    if (ctx->pc == 0x28EDECu) {
        ctx->pc = 0x28EDECu;
            // 0x28edec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EDF0u;
        goto label_28edf0;
    }
    ctx->pc = 0x28EDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDE8u;
            // 0x28edec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28EDF0u;
label_28edf0:
    // 0x28edf0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28edf4:
    // 0x28edf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28edf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28edf8:
    // 0x28edf8: 0x8c424634  lw          $v0, 0x4634($v0)
    ctx->pc = 0x28edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17972)));
label_28edfc:
    // 0x28edfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ee00:
    if (ctx->pc == 0x28EE00u) {
        ctx->pc = 0x28EE00u;
            // 0x28ee00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28EE04u;
        goto label_28ee04;
    }
    ctx->pc = 0x28EDFCu;
    {
        const bool branch_taken_0x28edfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDFCu;
            // 0x28ee00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edfc) {
            ctx->pc = 0x28EE24u;
            goto label_28ee24;
        }
    }
    ctx->pc = 0x28EE04u;
label_28ee04:
    // 0x28ee04: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ee08:
    // 0x28ee08: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x28ee08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_28ee0c:
    // 0x28ee0c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ee0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ee10:
    // 0x28ee10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ee10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ee14:
    // 0x28ee14: 0xc0a5648  jal         func_295920
label_28ee18:
    if (ctx->pc == 0x28EE18u) {
        ctx->pc = 0x28EE18u;
            // 0x28ee18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EE1Cu;
        goto label_28ee1c;
    }
    ctx->pc = 0x28EE14u;
    SET_GPR_U32(ctx, 31, 0x28EE1Cu);
    ctx->pc = 0x28EE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE14u;
            // 0x28ee18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE1Cu; }
        if (ctx->pc != 0x28EE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE1Cu; }
        if (ctx->pc != 0x28EE1Cu) { return; }
    }
    ctx->pc = 0x28EE1Cu;
label_28ee1c:
    // 0x28ee1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ee20:
    if (ctx->pc == 0x28EE20u) {
        ctx->pc = 0x28EE20u;
            // 0x28ee20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EE24u;
        goto label_28ee24;
    }
    ctx->pc = 0x28EE1Cu;
    {
        const bool branch_taken_0x28ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE1Cu;
            // 0x28ee20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee1c) {
            ctx->pc = 0x28EE2Cu;
            goto label_28ee2c;
        }
    }
    ctx->pc = 0x28EE24u;
label_28ee24:
    // 0x28ee24: 0x40f809  jalr        $v0
label_28ee28:
    if (ctx->pc == 0x28EE28u) {
        ctx->pc = 0x28EE2Cu;
        goto label_28ee2c;
    }
    ctx->pc = 0x28EE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EE2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EE2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EE2Cu; }
            if (ctx->pc != 0x28EE2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28EE2Cu;
label_28ee2c:
    // 0x28ee2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ee2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ee30:
    // 0x28ee30: 0x3e00008  jr          $ra
label_28ee34:
    if (ctx->pc == 0x28EE34u) {
        ctx->pc = 0x28EE34u;
            // 0x28ee34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EE38u;
        goto label_28ee38;
    }
    ctx->pc = 0x28EE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE30u;
            // 0x28ee34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28EE38u;
label_28ee38:
    // 0x28ee38: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ee3c:
    // 0x28ee3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ee3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ee40:
    // 0x28ee40: 0x8c424638  lw          $v0, 0x4638($v0)
    ctx->pc = 0x28ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17976)));
label_28ee44:
    // 0x28ee44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ee48:
    if (ctx->pc == 0x28EE48u) {
        ctx->pc = 0x28EE48u;
            // 0x28ee48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28EE4Cu;
        goto label_28ee4c;
    }
    ctx->pc = 0x28EE44u;
    {
        const bool branch_taken_0x28ee44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE44u;
            // 0x28ee48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee44) {
            ctx->pc = 0x28EE6Cu;
            goto label_28ee6c;
        }
    }
    ctx->pc = 0x28EE4Cu;
label_28ee4c:
    // 0x28ee4c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ee50:
    // 0x28ee50: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x28ee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_28ee54:
    // 0x28ee54: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ee54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ee58:
    // 0x28ee58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ee58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ee5c:
    // 0x28ee5c: 0xc0a5648  jal         func_295920
label_28ee60:
    if (ctx->pc == 0x28EE60u) {
        ctx->pc = 0x28EE60u;
            // 0x28ee60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EE64u;
        goto label_28ee64;
    }
    ctx->pc = 0x28EE5Cu;
    SET_GPR_U32(ctx, 31, 0x28EE64u);
    ctx->pc = 0x28EE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE5Cu;
            // 0x28ee60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE64u; }
        if (ctx->pc != 0x28EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE64u; }
        if (ctx->pc != 0x28EE64u) { return; }
    }
    ctx->pc = 0x28EE64u;
label_28ee64:
    // 0x28ee64: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ee68:
    if (ctx->pc == 0x28EE68u) {
        ctx->pc = 0x28EE68u;
            // 0x28ee68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EE6Cu;
        goto label_28ee6c;
    }
    ctx->pc = 0x28EE64u;
    {
        const bool branch_taken_0x28ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE64u;
            // 0x28ee68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee64) {
            ctx->pc = 0x28EE74u;
            goto label_28ee74;
        }
    }
    ctx->pc = 0x28EE6Cu;
label_28ee6c:
    // 0x28ee6c: 0x40f809  jalr        $v0
label_28ee70:
    if (ctx->pc == 0x28EE70u) {
        ctx->pc = 0x28EE74u;
        goto label_28ee74;
    }
    ctx->pc = 0x28EE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EE74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EE74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EE74u; }
            if (ctx->pc != 0x28EE74u) { return; }
        }
        }
    }
    ctx->pc = 0x28EE74u;
label_28ee74:
    // 0x28ee74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ee74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ee78:
    // 0x28ee78: 0x3e00008  jr          $ra
label_28ee7c:
    if (ctx->pc == 0x28EE7Cu) {
        ctx->pc = 0x28EE7Cu;
            // 0x28ee7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EE80u;
        goto label_28ee80;
    }
    ctx->pc = 0x28EE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE78u;
            // 0x28ee7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28EE80u;
label_28ee80:
    // 0x28ee80: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ee84:
    // 0x28ee84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ee84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ee88:
    // 0x28ee88: 0x8c42463c  lw          $v0, 0x463C($v0)
    ctx->pc = 0x28ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17980)));
label_28ee8c:
    // 0x28ee8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28ee90:
    if (ctx->pc == 0x28EE90u) {
        ctx->pc = 0x28EE90u;
            // 0x28ee90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28EE94u;
        goto label_28ee94;
    }
    ctx->pc = 0x28EE8Cu;
    {
        const bool branch_taken_0x28ee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE8Cu;
            // 0x28ee90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee8c) {
            ctx->pc = 0x28EE9Cu;
            goto label_28ee9c;
        }
    }
    ctx->pc = 0x28EE94u;
label_28ee94:
    // 0x28ee94: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ee98:
    if (ctx->pc == 0x28EE98u) {
        ctx->pc = 0x28EE98u;
            // 0x28ee98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EE9Cu;
        goto label_28ee9c;
    }
    ctx->pc = 0x28EE94u;
    {
        const bool branch_taken_0x28ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE94u;
            // 0x28ee98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee94) {
            ctx->pc = 0x28EEA4u;
            goto label_28eea4;
        }
    }
    ctx->pc = 0x28EE9Cu;
label_28ee9c:
    // 0x28ee9c: 0x40f809  jalr        $v0
label_28eea0:
    if (ctx->pc == 0x28EEA0u) {
        ctx->pc = 0x28EEA4u;
        goto label_28eea4;
    }
    ctx->pc = 0x28EE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EEA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EEA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EEA4u; }
            if (ctx->pc != 0x28EEA4u) { return; }
        }
        }
    }
    ctx->pc = 0x28EEA4u;
label_28eea4:
    // 0x28eea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28eea8:
    // 0x28eea8: 0x3e00008  jr          $ra
label_28eeac:
    if (ctx->pc == 0x28EEACu) {
        ctx->pc = 0x28EEACu;
            // 0x28eeac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EEB0u;
        goto label_fallthrough_0x28eea8;
    }
    ctx->pc = 0x28EEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEA8u;
            // 0x28eeac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28eea8:
    ctx->pc = 0x28EEB0u;
    ctx->pc = 0x28eeb0u;
}
