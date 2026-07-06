#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F9F18
// Address: 0x2f9f18 - 0x2fa068
void sub_002F9F18_0x2f9f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9F18_0x2f9f18");
#endif

    switch (ctx->pc) {
        case 0x2f9f84u: goto label_2f9f84;
        case 0x2f9f8cu: goto label_2f9f8c;
        case 0x2f9f94u: goto label_2f9f94;
        case 0x2f9facu: goto label_2f9fac;
        case 0x2f9fb0u: goto label_2f9fb0;
        case 0x2f9fb8u: goto label_2f9fb8;
        case 0x2fa000u: goto label_2fa000;
        case 0x2fa010u: goto label_2fa010;
        case 0x2fa020u: goto label_2fa020;
        case 0x2fa030u: goto label_2fa030;
        case 0x2fa044u: goto label_2fa044;
        default: break;
    }

    ctx->pc = 0x2f9f18u;

    // 0x2f9f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f9f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f9f1c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f9f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f9f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f9f2c: 0x8c44065c  lw          $a0, 0x65C($v0)
    ctx->pc = 0x2f9f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x2f9f30: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9F30u;
    {
        const bool branch_taken_0x2f9f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F30u;
        // 0x2f9f34: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f30) {
            ctx->pc = 0x2F9F40u;
            goto label_2f9f40;
        }
    }
    ctx->pc = 0x2F9F38u;
    // 0x2f9f38: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2f9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2f9f3c: 0x24449140  addiu       $a0, $v0, -0x6EC0
    ctx->pc = 0x2f9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938944));
label_2f9f40:
    // 0x2f9f40: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f9f44: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9f48: 0x8c650660  lw          $a1, 0x660($v1)
    ctx->pc = 0x2f9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
    // 0x2f9f4c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9F4Cu;
    {
        const bool branch_taken_0x2f9f4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F4Cu;
        // 0x2f9f50: 0xac4406d0  sw          $a0, 0x6D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1744), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f4c) {
            ctx->pc = 0x2F9F5Cu;
            goto label_2f9f5c;
        }
    }
    ctx->pc = 0x2F9F54u;
    // 0x2f9f54: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2f9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2f9f58: 0x244591b0  addiu       $a1, $v0, -0x6E50
    ctx->pc = 0x2f9f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
label_2f9f5c:
    // 0x2f9f5c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f9f60: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9f64: 0x8c660664  lw          $a2, 0x664($v1)
    ctx->pc = 0x2f9f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1636)));
    // 0x2f9f68: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9F68u;
    {
        const bool branch_taken_0x2f9f68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F68u;
        // 0x2f9f6c: 0xac4506d4  sw          $a1, 0x6D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1748), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f68) {
            ctx->pc = 0x2F9F78u;
            goto label_2f9f78;
        }
    }
    ctx->pc = 0x2F9F70u;
    // 0x2f9f70: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2f9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2f9f74: 0x24469178  addiu       $a2, $v0, -0x6E88
    ctx->pc = 0x2f9f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939000));
label_2f9f78:
    // 0x2f9f78: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9f7c: 0xc0a8bac  jal         func_2A2EB0
    ctx->pc = 0x2F9F7Cu;
    SET_GPR_U32(ctx, 31, 0x2F9F84u);
    ctx->pc = 0x2F9F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F7Cu;
    // 0x2f9f80: 0xac4606d8  sw          $a2, 0x6D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1752), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2EB0u, 0x2F9F7Cu, 0x2F9F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F84u;
label_2f9f84:
    // 0x2f9f84: 0xc0aeb46  jal         func_2BAD18
    ctx->pc = 0x2F9F84u;
    SET_GPR_U32(ctx, 31, 0x2F9F8Cu);
    ctx->pc = 0x2BAD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAD18u, 0x2F9F84u, 0x2F9F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F8Cu;
label_2f9f8c:
    // 0x2f9f8c: 0xc0abdc6  jal         func_2AF718
    ctx->pc = 0x2F9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2F9F94u);
    ctx->pc = 0x2AF718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF718u, 0x2F9F8Cu, 0x2F9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F94u;
label_2f9f94:
    // 0x2f9f94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f9f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f98: 0x6210009  bgez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9F98u;
    {
        const bool branch_taken_0x2f9f98 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2F9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F98u;
        // 0x2f9f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f98) {
            ctx->pc = 0x2F9FC0u;
            goto label_2f9fc0;
        }
    }
    ctx->pc = 0x2F9FA0u;
    // 0x2f9fa0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2f9fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2f9fa4: 0xc0a56c0  jal         func_295B00
    ctx->pc = 0x2F9FA4u;
    SET_GPR_U32(ctx, 31, 0x2F9FACu);
    ctx->pc = 0x2F9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FA4u;
    // 0x2f9fa8: 0x26102700  addiu       $s0, $s0, 0x2700 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B00u, 0x2F9FA4u, 0x2F9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FACu;
label_2f9fac:
    // 0x2f9fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9fb0:
    // 0x2f9fb0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2F9FB0u;
    SET_GPR_U32(ctx, 31, 0x2F9FB8u);
    ctx->pc = 0x2F9FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FB0u;
    // 0x2f9fb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2F9FB0u, 0x2F9FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FB8u;
label_2f9fb8:
    // 0x2f9fb8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2F9FB8u;
    {
        const bool branch_taken_0x2f9fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FB8u;
        // 0x2f9fbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fb8) {
            ctx->pc = 0x2FA054u;
            goto label_2fa054;
        }
    }
    ctx->pc = 0x2F9FC0u;
label_2f9fc0:
    // 0x2f9fc0: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F9FC0u;
    {
        const bool branch_taken_0x2f9fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FC0u;
        // 0x2f9fc4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fc0) {
            ctx->pc = 0x2FA008u;
            goto label_2fa008;
        }
    }
    ctx->pc = 0x2F9FC8u;
    // 0x2f9fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9FC8u;
    {
        const bool branch_taken_0x2f9fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FC8u;
        // 0x2f9fcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fc8) {
            ctx->pc = 0x2F9FE0u;
            goto label_2f9fe0;
        }
    }
    ctx->pc = 0x2F9FD0u;
    // 0x2f9fd0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9FD0u;
    {
        const bool branch_taken_0x2f9fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FD0u;
        // 0x2f9fd4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fd0) {
            ctx->pc = 0x2F9FF8u;
            goto label_2f9ff8;
        }
    }
    ctx->pc = 0x2F9FD8u;
    // 0x2f9fd8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F9FD8u;
    {
        const bool branch_taken_0x2f9fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FD8u;
        // 0x2f9fdc: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fd8) {
            ctx->pc = 0x2FA03Cu;
            goto label_2fa03c;
        }
    }
    ctx->pc = 0x2F9FE0u;
label_2f9fe0:
    // 0x2f9fe0: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F9FE0u;
    {
        const bool branch_taken_0x2f9fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FE0u;
        // 0x2f9fe4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fe0) {
            ctx->pc = 0x2FA018u;
            goto label_2fa018;
        }
    }
    ctx->pc = 0x2F9FE8u;
    // 0x2f9fe8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9FE8u;
    {
        const bool branch_taken_0x2f9fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FE8u;
        // 0x2f9fec: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fe8) {
            ctx->pc = 0x2FA028u;
            goto label_2fa028;
        }
    }
    ctx->pc = 0x2F9FF0u;
    // 0x2f9ff0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F9FF0u;
    {
        const bool branch_taken_0x2f9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FF0u;
        // 0x2f9ff4: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ff0) {
            ctx->pc = 0x2FA03Cu;
            goto label_2fa03c;
        }
    }
    ctx->pc = 0x2F9FF8u;
label_2f9ff8:
    // 0x2f9ff8: 0xc0aa604  jal         func_2A9810
    ctx->pc = 0x2F9FF8u;
    SET_GPR_U32(ctx, 31, 0x2FA000u);
    ctx->pc = 0x2A9810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9810u, 0x2F9FF8u, 0x2FA000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA000u;
label_2fa000:
    // 0x2fa000: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FA000u;
    {
        const bool branch_taken_0x2fa000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA000u;
        // 0x2fa004: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa000) {
            ctx->pc = 0x2FA034u;
            goto label_2fa034;
        }
    }
    ctx->pc = 0x2FA008u;
label_2fa008:
    // 0x2fa008: 0xc0aa9fa  jal         func_2AA7E8
    ctx->pc = 0x2FA008u;
    SET_GPR_U32(ctx, 31, 0x2FA010u);
    ctx->pc = 0x2AA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA7E8u, 0x2FA008u, 0x2FA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA010u;
label_2fa010:
    // 0x2fa010: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FA010u;
    {
        const bool branch_taken_0x2fa010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA010u;
        // 0x2fa014: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa010) {
            ctx->pc = 0x2FA034u;
            goto label_2fa034;
        }
    }
    ctx->pc = 0x2FA018u;
label_2fa018:
    // 0x2fa018: 0xc0acc3e  jal         func_2B30F8
    ctx->pc = 0x2FA018u;
    SET_GPR_U32(ctx, 31, 0x2FA020u);
    ctx->pc = 0x2B30F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B30F8u, 0x2FA018u, 0x2FA020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA020u;
label_2fa020:
    // 0x2fa020: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA020u;
    {
        const bool branch_taken_0x2fa020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA020u;
        // 0x2fa024: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa020) {
            ctx->pc = 0x2FA034u;
            goto label_2fa034;
        }
    }
    ctx->pc = 0x2FA028u;
label_2fa028:
    // 0x2fa028: 0xc0af196  jal         func_2BC658
    ctx->pc = 0x2FA028u;
    SET_GPR_U32(ctx, 31, 0x2FA030u);
    ctx->pc = 0x2BC658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC658u, 0x2FA028u, 0x2FA030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA030u;
label_2fa030:
    // 0x2fa030: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fa030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fa034:
    // 0x2fa034: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA034u;
    {
        const bool branch_taken_0x2fa034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa034) {
            ctx->pc = 0x2FA04Cu;
            goto label_2fa04c;
        }
    }
    ctx->pc = 0x2FA03Cu;
label_2fa03c:
    // 0x2fa03c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA03Cu;
    SET_GPR_U32(ctx, 31, 0x2FA044u);
    ctx->pc = 0x2FA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA03Cu;
    // 0x2fa040: 0x24842728  addiu       $a0, $a0, 0x2728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA03Cu, 0x2FA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA044u;
label_2fa044:
    // 0x2fa044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA044u;
    {
        const bool branch_taken_0x2fa044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA044u;
        // 0x2fa048: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa044) {
            ctx->pc = 0x2FA054u;
            goto label_2fa054;
        }
    }
    ctx->pc = 0x2FA04Cu;
label_2fa04c:
    // 0x2fa04c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fa04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa050: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fa050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa054:
    // 0x2fa054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fa054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fa058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa060: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA060u;
        // 0x2fa064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA068u;
}
