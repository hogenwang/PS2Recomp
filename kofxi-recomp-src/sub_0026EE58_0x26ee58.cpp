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

// Function: sub_0026EE58
// Address: 0x26ee58 - 0x26ef68
void sub_0026EE58_0x26ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EE58_0x26ee58");
#endif

    switch (ctx->pc) {
        case 0x26ee7cu: goto label_26ee7c;
        case 0x26ee94u: goto label_26ee94;
        case 0x26eeacu: goto label_26eeac;
        case 0x26eed0u: goto label_26eed0;
        case 0x26eee0u: goto label_26eee0;
        case 0x26eef8u: goto label_26eef8;
        case 0x26ef30u: goto label_26ef30;
        case 0x26ef4cu: goto label_26ef4c;
        default: break;
    }

    ctx->pc = 0x26ee58u;

    // 0x26ee58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26ee5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ee5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee60: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26ee64: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x26ee64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26ee68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ee68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee6c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x26ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26ee70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26ee74: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26EE74u;
    SET_GPR_U32(ctx, 31, 0x26EE7Cu);
    ctx->pc = 0x26EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE74u;
    // 0x26ee78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26EE74u, 0x26EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE7Cu;
label_26ee7c:
    // 0x26ee7c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26ee80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26ee80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee84: 0x24719570  addiu       $s1, $v1, -0x6A90
    ctx->pc = 0x26ee84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940016));
    // 0x26ee88: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26ee88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26ee8c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26EE8Cu;
    SET_GPR_U32(ctx, 31, 0x26EE94u);
    ctx->pc = 0x26EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE8Cu;
    // 0x26ee90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26EE8Cu, 0x26EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE94u;
label_26ee94:
    // 0x26ee94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee98: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x26ee98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x26ee9c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26ee9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26eea0: 0x34a5697a  ori         $a1, $a1, 0x697A
    ctx->pc = 0x26eea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27002);
    // 0x26eea4: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26EEA4u;
    SET_GPR_U32(ctx, 31, 0x26EEACu);
    ctx->pc = 0x26EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEA4u;
    // 0x26eea8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26EEA4u, 0x26EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEACu;
label_26eeac:
    // 0x26eeac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EEACu;
    {
        const bool branch_taken_0x26eeac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEACu;
        // 0x26eeb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eeac) {
            ctx->pc = 0x26EEC4u;
            goto label_26eec4;
        }
    }
    ctx->pc = 0x26EEB4u;
    // 0x26eeb4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26eeb8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26eebc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26EEBCu;
    {
        const bool branch_taken_0x26eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEBCu;
        // 0x26eec0: 0x24a59580  addiu       $a1, $a1, -0x6A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eebc) {
            ctx->pc = 0x26EF44u;
            goto label_26ef44;
        }
    }
    ctx->pc = 0x26EEC4u;
label_26eec4:
    // 0x26eec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26eec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eec8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26EEC8u;
    SET_GPR_U32(ctx, 31, 0x26EED0u);
    ctx->pc = 0x26EECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEC8u;
    // 0x26eecc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26EEC8u, 0x26EED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EED0u;
label_26eed0:
    // 0x26eed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26eed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eed8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26EED8u;
    SET_GPR_U32(ctx, 31, 0x26EEE0u);
    ctx->pc = 0x26EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EED8u;
    // 0x26eedc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26EED8u, 0x26EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEE0u;
label_26eee0:
    // 0x26eee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26eee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eee4: 0x3405c020  ori         $a1, $zero, 0xC020
    ctx->pc = 0x26eee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x26eee8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26eee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26eeec: 0x34a56911  ori         $a1, $a1, 0x6911
    ctx->pc = 0x26eeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26897);
    // 0x26eef0: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26EEF0u;
    SET_GPR_U32(ctx, 31, 0x26EEF8u);
    ctx->pc = 0x26EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEF0u;
    // 0x26eef4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26EEF0u, 0x26EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEF8u;
label_26eef8:
    // 0x26eef8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EEF8u;
    {
        const bool branch_taken_0x26eef8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEF8u;
        // 0x26eefc: 0x97a20010  lhu         $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eef8) {
            ctx->pc = 0x26EF10u;
            goto label_26ef10;
        }
    }
    ctx->pc = 0x26EF00u;
    // 0x26ef00: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26ef04: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ef08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26EF08u;
    {
        const bool branch_taken_0x26ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF08u;
        // 0x26ef0c: 0x24a595b8  addiu       $a1, $a1, -0x6A48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef08) {
            ctx->pc = 0x26EF44u;
            goto label_26ef44;
        }
    }
    ctx->pc = 0x26EF10u;
label_26ef10:
    // 0x26ef10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef14: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x26ef14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x26ef18: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26ef18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26ef1c: 0x34a56910  ori         $a1, $a1, 0x6910
    ctx->pc = 0x26ef1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26896);
    // 0x26ef20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26ef20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef24: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x26ef24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x26ef28: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26EF28u;
    SET_GPR_U32(ctx, 31, 0x26EF30u);
    ctx->pc = 0x26EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF28u;
    // 0x26ef2c: 0xa7a20010  sh          $v0, 0x10($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26EF28u, 0x26EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF30u;
label_26ef30:
    // 0x26ef30: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EF30u;
    {
        const bool branch_taken_0x26ef30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF30u;
        // 0x26ef34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef30) {
            ctx->pc = 0x26EF50u;
            goto label_26ef50;
        }
    }
    ctx->pc = 0x26EF38u;
    // 0x26ef38: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26ef3c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ef40: 0x24a595f0  addiu       $a1, $a1, -0x6A10
    ctx->pc = 0x26ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940144));
label_26ef44:
    // 0x26ef44: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26EF44u;
    SET_GPR_U32(ctx, 31, 0x26EF4Cu);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26EF44u, 0x26EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF4Cu;
label_26ef4c:
    // 0x26ef4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26ef50:
    // 0x26ef50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26ef50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ef54: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x26ef54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ef58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x26ef58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ef5c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF5Cu;
        // 0x26ef60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EF64u;
    // 0x26ef64: 0x0  nop
    ctx->pc = 0x26ef64u;
    // NOP
}
