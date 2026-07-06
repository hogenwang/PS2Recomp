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

// Function: sub_00339A40
// Address: 0x339a40 - 0x339d30
void sub_00339A40_0x339a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A40_0x339a40");
#endif

    switch (ctx->pc) {
        case 0x339a60u: goto label_339a60;
        case 0x339ac0u: goto label_339ac0;
        case 0x339adcu: goto label_339adc;
        case 0x339b08u: goto label_339b08;
        case 0x339b18u: goto label_339b18;
        case 0x339b28u: goto label_339b28;
        case 0x339b30u: goto label_339b30;
        case 0x339b50u: goto label_339b50;
        case 0x339b58u: goto label_339b58;
        case 0x339b7cu: goto label_339b7c;
        case 0x339b8cu: goto label_339b8c;
        case 0x339ba8u: goto label_339ba8;
        case 0x339bc8u: goto label_339bc8;
        case 0x339bd0u: goto label_339bd0;
        case 0x339c10u: goto label_339c10;
        case 0x339c2cu: goto label_339c2c;
        case 0x339c58u: goto label_339c58;
        case 0x339c68u: goto label_339c68;
        case 0x339c78u: goto label_339c78;
        case 0x339c98u: goto label_339c98;
        case 0x339ca0u: goto label_339ca0;
        case 0x339cc4u: goto label_339cc4;
        case 0x339cd4u: goto label_339cd4;
        case 0x339cf0u: goto label_339cf0;
        case 0x339d10u: goto label_339d10;
        case 0x339d18u: goto label_339d18;
        default: break;
    }

    ctx->pc = 0x339a40u;

    // 0x339a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339a44: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x339a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x339a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339a4c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x339a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x339a50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339a54: 0xac64e8f0  sw          $a0, -0x1710($v1)
    ctx->pc = 0x339a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961392), GPR_U32(ctx, 4));
    // 0x339a58: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x339A58u;
    SET_GPR_U32(ctx, 31, 0x339A60u);
    ctx->pc = 0x339A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339A58u;
    // 0x339a5c: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x339A58u, 0x339A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339A60u;
label_339a60:
    // 0x339a60: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x339a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x339a64: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x339a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x339a68: 0xac60e8d8  sw          $zero, -0x1728($v1)
    ctx->pc = 0x339a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961368), GPR_U32(ctx, 0));
    // 0x339a6c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x339a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x339a70: 0xac80e8d0  sw          $zero, -0x1730($a0)
    ctx->pc = 0x339a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961360), GPR_U32(ctx, 0));
    // 0x339a74: 0xa06095c0  sb          $zero, -0x6A40($v1)
    ctx->pc = 0x339a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940096), (uint8_t)GPR_U32(ctx, 0));
    // 0x339a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x339A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A7Cu;
        // 0x339a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339A84u;
    // 0x339a84: 0x0  nop
    ctx->pc = 0x339a84u;
    // NOP
    // 0x339a88: 0x0  nop
    ctx->pc = 0x339a88u;
    // NOP
    // 0x339a8c: 0x0  nop
    ctx->pc = 0x339a8cu;
    // NOP
    // 0x339a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339a94: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x339a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339aa4: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x339aa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x339aa8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x339AA8u;
    {
        const bool branch_taken_0x339aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x339AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AA8u;
        // 0x339aac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339aa8) {
            ctx->pc = 0x339AC8u;
            goto label_339ac8;
        }
    }
    ctx->pc = 0x339AB0u;
    // 0x339ab0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x339ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x339ab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ab8: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x339AB8u;
    SET_GPR_U32(ctx, 31, 0x339AC0u);
    ctx->pc = 0x339ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339AB8u;
    // 0x339abc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x339AB8u, 0x339AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339AC0u;
label_339ac0:
    // 0x339ac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x339AC0u;
    {
        const bool branch_taken_0x339ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AC0u;
        // 0x339ac4: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ac0) {
            ctx->pc = 0x339AE0u;
            goto label_339ae0;
        }
    }
    ctx->pc = 0x339AC8u;
label_339ac8:
    // 0x339ac8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x339ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x339acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x339accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ad0: 0x90449748  lbu         $a0, -0x68B8($v0)
    ctx->pc = 0x339ad0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x339ad4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x339AD4u;
    SET_GPR_U32(ctx, 31, 0x339ADCu);
    ctx->pc = 0x339AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339AD4u;
    // 0x339ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x339AD4u, 0x339ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339ADCu;
label_339adc:
    // 0x339adc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x339adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_339ae0:
    // 0x339ae0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x339ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x339ae4: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x339AE4u;
    {
        const bool branch_taken_0x339ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ae4) {
            ctx->pc = 0x339AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339AE4u;
            // 0x339ae8: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x339B68u;
            goto label_339b68;
        }
    }
    ctx->pc = 0x339AECu;
    // 0x339aec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339af0: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x339af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
    // 0x339af4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x339AF4u;
    {
        const bool branch_taken_0x339af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339af4) {
            ctx->pc = 0x339AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339AF4u;
            // 0x339af8: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339B20u;
            goto label_339b20;
        }
    }
    ctx->pc = 0x339AFCu;
    // 0x339afc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x339afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x339b00: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x339B00u;
    SET_GPR_U32(ctx, 31, 0x339B08u);
    ctx->pc = 0x339B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B00u;
    // 0x339b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x339B00u, 0x339B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B08u;
label_339b08:
    // 0x339b08: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x339b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x339b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b10: 0xc055768  jal         func_155DA0
    ctx->pc = 0x339B10u;
    SET_GPR_U32(ctx, 31, 0x339B18u);
    ctx->pc = 0x339B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B10u;
    // 0x339b14: 0x248483d0  addiu       $a0, $a0, -0x7C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x339B10u, 0x339B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B18u;
label_339b18:
    // 0x339b18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x339B18u;
    {
        const bool branch_taken_0x339b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b18) {
            ctx->pc = 0x339BC0u;
            goto label_339bc0;
        }
    }
    ctx->pc = 0x339B20u;
label_339b20:
    // 0x339b20: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x339B20u;
    SET_GPR_U32(ctx, 31, 0x339B28u);
    ctx->pc = 0x339B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B20u;
    // 0x339b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x339B20u, 0x339B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B28u;
label_339b28:
    // 0x339b28: 0xc053318  jal         func_14CC60
    ctx->pc = 0x339B28u;
    SET_GPR_U32(ctx, 31, 0x339B30u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x339B28u, 0x339B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B30u;
label_339b30:
    // 0x339b30: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x339b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x339b34: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x339b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x339b38: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x339b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
    // 0x339b3c: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x339b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x339b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x339b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b48: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x339B48u;
    SET_GPR_U32(ctx, 31, 0x339B50u);
    ctx->pc = 0x339B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B48u;
    // 0x339b4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x339B48u, 0x339B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B50u;
label_339b50:
    // 0x339b50: 0xc055728  jal         func_155CA0
    ctx->pc = 0x339B50u;
    SET_GPR_U32(ctx, 31, 0x339B58u);
    ctx->pc = 0x339B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B50u;
    // 0x339b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x339B50u, 0x339B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B58u;
label_339b58:
    // 0x339b58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x339b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339b5c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339b60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x339B60u;
    {
        const bool branch_taken_0x339b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B60u;
        // 0x339b64: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b60) {
            ctx->pc = 0x339BC0u;
            goto label_339bc0;
        }
    }
    ctx->pc = 0x339B68u;
label_339b68:
    // 0x339b68: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x339B68u;
    {
        const bool branch_taken_0x339b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b68) {
            ctx->pc = 0x339B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339B68u;
            // 0x339b6c: 0x306200a0  andi        $v0, $v1, 0xA0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
            ctx->in_delay_slot = false;
            ctx->pc = 0x339B94u;
            goto label_339b94;
        }
    }
    ctx->pc = 0x339B70u;
    // 0x339b70: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x339b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x339b74: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x339B74u;
    SET_GPR_U32(ctx, 31, 0x339B7Cu);
    ctx->pc = 0x339B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B74u;
    // 0x339b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x339B74u, 0x339B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B7Cu;
label_339b7c:
    // 0x339b7c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x339b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x339b80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b84: 0xc055768  jal         func_155DA0
    ctx->pc = 0x339B84u;
    SET_GPR_U32(ctx, 31, 0x339B8Cu);
    ctx->pc = 0x339B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B84u;
    // 0x339b88: 0x248483d0  addiu       $a0, $a0, -0x7C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x339B84u, 0x339B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B8Cu;
label_339b8c:
    // 0x339b8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x339B8Cu;
    {
        const bool branch_taken_0x339b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b8c) {
            ctx->pc = 0x339BC0u;
            goto label_339bc0;
        }
    }
    ctx->pc = 0x339B94u;
label_339b94:
    // 0x339b94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x339B94u;
    {
        const bool branch_taken_0x339b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b94) {
            ctx->pc = 0x339BC0u;
            goto label_339bc0;
        }
    }
    ctx->pc = 0x339B9Cu;
    // 0x339b9c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x339b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x339ba0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x339BA0u;
    SET_GPR_U32(ctx, 31, 0x339BA8u);
    ctx->pc = 0x339BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BA0u;
    // 0x339ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x339BA0u, 0x339BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BA8u;
label_339ba8:
    // 0x339ba8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x339ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x339bac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339bb0: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x339bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
    // 0x339bb4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x339bb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x339bb8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x339bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x339bbc: 0xac43e8e8  sw          $v1, -0x1718($v0)
    ctx->pc = 0x339bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
label_339bc0:
    // 0x339bc0: 0xc0ce4b8  jal         func_3392E0
    ctx->pc = 0x339BC0u;
    SET_GPR_U32(ctx, 31, 0x339BC8u);
    ctx->pc = 0x3392E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3392E0u, 0x339BC0u, 0x339BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BC8u;
label_339bc8:
    // 0x339bc8: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x339BC8u;
    SET_GPR_U32(ctx, 31, 0x339BD0u);
    ctx->pc = 0x339BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BC8u;
    // 0x339bcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x339BC8u, 0x339BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BD0u;
label_339bd0:
    // 0x339bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x339BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BD8u;
        // 0x339bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339BE0u;
    // 0x339be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339be4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x339becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339bf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339bf4: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x339bf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x339bf8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x339BF8u;
    {
        const bool branch_taken_0x339bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x339BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BF8u;
        // 0x339bfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bf8) {
            ctx->pc = 0x339C18u;
            goto label_339c18;
        }
    }
    ctx->pc = 0x339C00u;
    // 0x339c00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x339c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x339c04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c08: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x339C08u;
    SET_GPR_U32(ctx, 31, 0x339C10u);
    ctx->pc = 0x339C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C08u;
    // 0x339c0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x339C08u, 0x339C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C10u;
label_339c10:
    // 0x339c10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x339C10u;
    {
        const bool branch_taken_0x339c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C10u;
        // 0x339c14: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c10) {
            ctx->pc = 0x339C30u;
            goto label_339c30;
        }
    }
    ctx->pc = 0x339C18u;
label_339c18:
    // 0x339c18: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x339c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x339c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x339c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c20: 0x90449748  lbu         $a0, -0x68B8($v0)
    ctx->pc = 0x339c20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x339c24: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x339C24u;
    SET_GPR_U32(ctx, 31, 0x339C2Cu);
    ctx->pc = 0x339C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C24u;
    // 0x339c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x339C24u, 0x339C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C2Cu;
label_339c2c:
    // 0x339c2c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x339c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_339c30:
    // 0x339c30: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x339c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x339c34: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x339C34u;
    {
        const bool branch_taken_0x339c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339c34) {
            ctx->pc = 0x339C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339C34u;
            // 0x339c38: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x339CB0u;
            goto label_339cb0;
        }
    }
    ctx->pc = 0x339C3Cu;
    // 0x339c3c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339c40: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x339c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
    // 0x339c44: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x339C44u;
    {
        const bool branch_taken_0x339c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339c44) {
            ctx->pc = 0x339C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339C44u;
            // 0x339c48: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339C70u;
            goto label_339c70;
        }
    }
    ctx->pc = 0x339C4Cu;
    // 0x339c4c: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x339c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x339c50: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x339C50u;
    SET_GPR_U32(ctx, 31, 0x339C58u);
    ctx->pc = 0x339C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C50u;
    // 0x339c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x339C50u, 0x339C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C58u;
label_339c58:
    // 0x339c58: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x339c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x339c5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c60: 0xc055768  jal         func_155DA0
    ctx->pc = 0x339C60u;
    SET_GPR_U32(ctx, 31, 0x339C68u);
    ctx->pc = 0x339C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C60u;
    // 0x339c64: 0x248483d0  addiu       $a0, $a0, -0x7C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x339C60u, 0x339C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C68u;
label_339c68:
    // 0x339c68: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x339C68u;
    {
        const bool branch_taken_0x339c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339c68) {
            ctx->pc = 0x339D08u;
            goto label_339d08;
        }
    }
    ctx->pc = 0x339C70u;
label_339c70:
    // 0x339c70: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x339C70u;
    SET_GPR_U32(ctx, 31, 0x339C78u);
    ctx->pc = 0x339C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C70u;
    // 0x339c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x339C70u, 0x339C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C78u;
label_339c78:
    // 0x339c78: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x339c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x339c7c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x339c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x339c80: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x339c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
    // 0x339c84: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x339c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x339c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x339c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c90: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x339C90u;
    SET_GPR_U32(ctx, 31, 0x339C98u);
    ctx->pc = 0x339C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C90u;
    // 0x339c94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x339C90u, 0x339C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C98u;
label_339c98:
    // 0x339c98: 0xc055728  jal         func_155CA0
    ctx->pc = 0x339C98u;
    SET_GPR_U32(ctx, 31, 0x339CA0u);
    ctx->pc = 0x339C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C98u;
    // 0x339c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x339C98u, 0x339CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339CA0u;
label_339ca0:
    // 0x339ca0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x339ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x339ca4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339ca8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x339CA8u;
    {
        const bool branch_taken_0x339ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CA8u;
        // 0x339cac: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ca8) {
            ctx->pc = 0x339D08u;
            goto label_339d08;
        }
    }
    ctx->pc = 0x339CB0u;
label_339cb0:
    // 0x339cb0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x339CB0u;
    {
        const bool branch_taken_0x339cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cb0) {
            ctx->pc = 0x339CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339CB0u;
            // 0x339cb4: 0x306200a0  andi        $v0, $v1, 0xA0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
            ctx->in_delay_slot = false;
            ctx->pc = 0x339CDCu;
            goto label_339cdc;
        }
    }
    ctx->pc = 0x339CB8u;
    // 0x339cb8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x339cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x339cbc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x339CBCu;
    SET_GPR_U32(ctx, 31, 0x339CC4u);
    ctx->pc = 0x339CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CBCu;
    // 0x339cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x339CBCu, 0x339CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339CC4u;
label_339cc4:
    // 0x339cc4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x339cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x339cc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ccc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x339CCCu;
    SET_GPR_U32(ctx, 31, 0x339CD4u);
    ctx->pc = 0x339CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CCCu;
    // 0x339cd0: 0x248483d0  addiu       $a0, $a0, -0x7C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x339CCCu, 0x339CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339CD4u;
label_339cd4:
    // 0x339cd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x339CD4u;
    {
        const bool branch_taken_0x339cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cd4) {
            ctx->pc = 0x339D08u;
            goto label_339d08;
        }
    }
    ctx->pc = 0x339CDCu;
label_339cdc:
    // 0x339cdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x339CDCu;
    {
        const bool branch_taken_0x339cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cdc) {
            ctx->pc = 0x339D08u;
            goto label_339d08;
        }
    }
    ctx->pc = 0x339CE4u;
    // 0x339ce4: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x339ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x339ce8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x339CE8u;
    SET_GPR_U32(ctx, 31, 0x339CF0u);
    ctx->pc = 0x339CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CE8u;
    // 0x339cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x339CE8u, 0x339CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339CF0u;
label_339cf0:
    // 0x339cf0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x339cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x339cf4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339cf8: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x339cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
    // 0x339cfc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x339cfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x339d00: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x339d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x339d04: 0xac43e8e8  sw          $v1, -0x1718($v0)
    ctx->pc = 0x339d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
label_339d08:
    // 0x339d08: 0xc0ce4b8  jal         func_3392E0
    ctx->pc = 0x339D08u;
    SET_GPR_U32(ctx, 31, 0x339D10u);
    ctx->pc = 0x3392E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3392E0u, 0x339D08u, 0x339D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339D10u;
label_339d10:
    // 0x339d10: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x339D10u;
    SET_GPR_U32(ctx, 31, 0x339D18u);
    ctx->pc = 0x339D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D10u;
    // 0x339d14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x339D10u, 0x339D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339D18u;
label_339d18:
    // 0x339d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339d20: 0x3e00008  jr          $ra
    ctx->pc = 0x339D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D20u;
        // 0x339d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339D28u;
    // 0x339d28: 0x0  nop
    ctx->pc = 0x339d28u;
    // NOP
    // 0x339d2c: 0x0  nop
    ctx->pc = 0x339d2cu;
    // NOP
}
